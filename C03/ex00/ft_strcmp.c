/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: micferna <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/19 16:41:46 by micferna     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/20 13:41:42 by micferna    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = '0';
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	main ()
{
	char s1[] = "BONJOUR";
	char s2[] = "BOMJOUR";
	printf("%d", ft_strcmp(s1, s2));
}
