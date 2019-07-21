/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   algo2.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jdesbord <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 14:37:05 by jdesbord     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 11:28:46 by tprat       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_test(int **indexes, int **boxes, int size);

int		*ft_checklegal(int **boxes, int size, int current)
{
	int i;
	int j;
	int *places;

	places = malloc(sizeof(int) * size);
	i = -1;
	while (++i < size)
	{
		places[i] = 0;
		j = -1;
		while (++j < size)
		{
			if (j != current % size && boxes[current / size][j] == i + 1)
			{
				places[i] = 1;
				j = size - 1;
			}
			if (j != current / size && boxes[j][current % size] == i + 1)
			{
				places[i] = 1;
				j = size - 1;
			}
		}
	}
	return (places);
}

void	ft_printtable(int **boxes, int size)
{
	int		y;
	int		x;
	char	c;

	y = -1;
	while (++y < size)
	{
		x = 0;
		while (x < size)
		{
			c = '0' + boxes[y][x];
			write(1, &c, 1);
			if (x != size - 1)
				write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
	}
}

int		ft_recursive(int **indexes, int **boxes, int size, int current)
{
	int i;
	int *places;

	places = ft_checklegal(boxes, size, current);
	i = 0;
	while (i < size)
	{
		if (places[i] != 1)
		{
			boxes[current / size][current % size] = i + 1;
			if (current != (size * size) - 1)
			{
				if (ft_recursive(indexes, boxes, size, current + 1))
					return (1);
			}
		}
		i++;
	}
	if (current == (size * size) - 1 && ft_test(indexes, boxes, size) == 0)
	{
		ft_printtable(boxes, size);
		return (1);
	}
	boxes[current / size][current % size] = 0;
	return (0);
}
