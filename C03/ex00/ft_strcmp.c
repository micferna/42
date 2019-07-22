/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: micferna <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/19 16:41:46 by micferna     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/22 15:57:01 by micferna    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 1;
	while (s1[i] == s2[i] && s2[i] != '\0' && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	main()
{
	char s1[]="abcdef";
	char s2[]="abcffr";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1,s2));
}
