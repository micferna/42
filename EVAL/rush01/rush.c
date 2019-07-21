/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tprat <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 08:59:40 by tprat        #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 11:18:11 by tprat       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		arg_in_tab(char *str, int **indexes, int size);
void	print_tab(int **tab, int size);
void	ft_algo(int **indexes, int size);

int		rush(char *str, int size)
{
	int **indexes;
	int i;

	i = -1;
	indexes = malloc(sizeof(int *) * 4);
	while (++i < 4)
		indexes[i] = malloc(sizeof(int) * size);
	if (arg_in_tab(str, indexes, size) == 0)
		return (0);
	ft_algo(indexes, 4);
	return (1);
}
