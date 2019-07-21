/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jdesbord <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 20:25:42 by jdesbord     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 11:08:45 by tprat       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_testcolumn(int **indexes, int **boxes, int size)
{
	int i;
	int j;
	int watch;
	int watch2;

	i = -1;
	j = -1;
	while (++i < size)
	{
		watch = 0;
		watch2 = 0;
		while (++j < size)
		{
			if (boxes[j][i] > watch2)
			{
				watch2 = boxes[j][i];
				watch++;
			}
		}
		if (watch != indexes[0][i])
			return (1);
		j = -1;
	}
	return (0);
}

int		ft_testlines(int **indexes, int **boxes, int size)
{
	int i;
	int j;
	int watch;
	int watch2;

	i = -1;
	j = -1;
	while (++j < size)
	{
		watch = 0;
		watch2 = 0;
		while (++i < size)
		{
			if (boxes[j][i] > watch2)
			{
				watch2 = boxes[j][i];
				watch++;
			}
		}
		if (watch != indexes[2][j])
			return (1);
		i = -1;
	}
	return (0);
}

int		ft_testlines2(int **indexes, int **boxes, int size)
{
	int i;
	int j;
	int watch;
	int watch2;

	i = size - 1;
	j = -1;
	while (++j < size)
	{
		watch = 0;
		watch2 = 0;
		while (i >= 0)
		{
			if (boxes[j][i] > watch2)
			{
				watch2 = boxes[j][i];
				watch++;
			}
			i--;
		}
		if (watch != indexes[3][j])
			return (1);
		i = size - 1;
	}
	return (0);
}

int		ft_testcolumn2(int **indexes, int **boxes, int size)
{
	int i;
	int j;
	int watch;
	int watch2;

	i = -1;
	j = size - 1;
	while (++i < size)
	{
		watch = 0;
		watch2 = 0;
		while (j >= 0)
		{
			if (boxes[j][i] > watch2)
			{
				watch2 = boxes[j][i];
				watch++;
			}
			j--;
		}
		if (watch != indexes[1][i])
			return (1);
		j = size - 1;
	}
	return (0);
}

int		ft_test(int **indexes, int **boxes, int size)
{
	int i;

	i = 0;
	i += ft_testcolumn(indexes, boxes, size);
	i += ft_testcolumn2(indexes, boxes, size);
	i += ft_testlines(indexes, boxes, size);
	i += ft_testlines2(indexes, boxes, size);
	return (i);
}
