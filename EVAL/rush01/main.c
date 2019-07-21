/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tprat <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 08:49:17 by tprat        #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 10:21:09 by tprat       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		rush(char *str, int size);

int		main(int argc, char *argv[])
{
	int len;

	len = 0;
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else
	{
		while (argv[1][len])
			len++;
		if (rush(argv[1], (len + 1) / 8) == 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
}
