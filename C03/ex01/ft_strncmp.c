/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: micferna <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/20 15:27:20 by micferna     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/20 16:39:42 by micferna    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < n && s1[i] != '\0') || s2[i] != '\0')
	{
		if (s1[i] != s2[i] && i < n)
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	main ()
{
	char s1[] = "bonjour";
	char s2[] = "bonjour";
	printf("%d", ft_strncmp(s1, s2, 3));
}
