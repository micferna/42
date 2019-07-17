/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: micferna <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/17 19:08:37 by micferna     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/17 21:45:36 by micferna    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;

	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main()
{
	char str[] = "toitoitoi";
	ft_putstr(str);
	return (0);
}
