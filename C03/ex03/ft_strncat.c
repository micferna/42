/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: micferna <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 10:27:34 by micferna     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 10:54:24 by micferna    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int chaine;
	int i;

	chaine = -1;
	while (dest[++chaine]);

	i = 0;
	while (i < nb)
	{
		dest[chaine] = src[i];
		i++;
		chaine++;
	}
	dest[chaine] = '\0';

	return (dest);
}


int main()
{
	char str[] = "sdfsd";
	char to_find[] = "asdf";
	int n = 2;

	printf("%s", ft_strncat(str, to_find, 2 ));

	return(0);
}
