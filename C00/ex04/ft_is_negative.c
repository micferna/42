/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_negative.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: micferna <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/17 16:53:22 by micferna     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/17 16:56:51 by micferna    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if(n >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}

}

int	main()
{
	ft_is_negative(-10);
}	
