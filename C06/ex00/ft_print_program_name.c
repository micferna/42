/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_program_name.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: micferna <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/24 10:52:28 by micferna     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 15:45:22 by micferna    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *src)
{
	int a;

	a = 0;
	while (src[a] != '\0')
	{
		ft_putchar(src[a]);
		a++;
	}
}

int		main(int argc, char **argv)
{
	ft_putstr(argv[0]);
	return (0);
}
