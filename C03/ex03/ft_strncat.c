/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: micferna <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 10:27:34 by micferna     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 23:04:08 by micferna    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	a;
	int b;

	a = 0;
	b = 0;

	while(dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < nb)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);

}

int	main()
{
	char dest[30] = "abc";
	char src[] = "deboiter";
	
	ft_strncat(dest, src, 15);
	printf("%s\n", dest);
	return (0);
}
