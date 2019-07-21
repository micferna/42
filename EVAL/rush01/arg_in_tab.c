/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sort_in_tab.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tprat <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 10:14:03 by tprat        #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 10:31:49 by tprat       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		check_error(char a, char b, int size);

int		arg_in_tab(char *str, int **indexes, int size)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i < 4)
	{
		while (j < size)
		{
			if (check_error(str[k], str[k + 1], size) == 0)
				return (0);
			indexes[i][j] = str[k] - 48;
			k += 2;
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
