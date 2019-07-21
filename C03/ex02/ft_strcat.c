/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: micferna <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/20 16:42:57 by micferna     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 21:39:44 by micferna    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int a;

	a = 0;

	int b;

	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[a] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

int main (void) 
{

	char dest[10] = "abc";
	char src[] = "deboiter";

	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}

