/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_alphabet.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: micferna <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/17 16:35:22 by micferna     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/17 16:40:10 by micferna    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

void	ft_print_alphabet(void)
{
	int a;

	a = 'a';

	while(a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
}

int		main()
{
	ft_print_alphabet();
}
