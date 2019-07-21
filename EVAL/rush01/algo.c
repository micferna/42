/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   algo.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jdesbord <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 10:02:21 by jdesbord     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 11:28:39 by tprat       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_recursive(int **indexes, int **boxes, int size, int current);

void	ft_algo(int **indexes, int size)
{
	int		**boxes;
	int		x;

	x = 0;
	boxes = malloc(sizeof(int *) * size);
	while (x < size)
	{
		boxes[x] = malloc(sizeof(int) * size);
		x++;
	}
	if (!ft_recursive(indexes, boxes, size, 0))
		write(1, "Error\n", 6);
}
