/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_div_mod.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: micferna <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/17 18:40:04 by micferna     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/17 19:05:23 by micferna    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
	int s;
	int e;

	s = *a / *b;
	e = *a % *b;
	*a = s;
	*b = e;
}

int	main()
{
	int s;
	int e;
	s = 5;
	e = 2;

	ft_ultimate_div_mod(&s, &e);
	printf("%d\n%d\n", s, e);
}
