/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush04.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vdjorkae <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/06 09:02:44 by vdjorkae     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/07 19:12:35 by vdjorkae    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	milieu(int x, int y)
{
	int comptex;
	int comptey;

	if (y > 1)
	{
		comptey = 1;
		while (comptey < (y - 1))
		{
			ft_putchar('\n');
			ft_putchar('B');
			comptey++;
			comptex = 1;
			while (comptex < (x - 1))
			{
				ft_putchar(' ');
				comptex++;
			}
			if (x > 1)
			{
				ft_putchar('B');
			}
		}
	}
}

void	fin(int x, int y)
{
	int comptex;

	if (x > 0 && y > 1)
	{
		ft_putchar('\n');
		ft_putchar('C');
		comptex = 1;
		while (comptex < (x - 1))
		{
			ft_putchar('B');
			comptex++;
		}
		if (x > 1)
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
	}
}

void	rush(int x, int y)
{
	int comptex;

	if (x > 0 && y > 0)
	{
		ft_putchar('A');
		comptex = 1;
		while (comptex < (x - 1))
		{
			ft_putchar('B');
			comptex++;
		}
		if (x > 1)
		{
			ft_putchar('C');
		}
		if (y == 1)
			ft_putchar('\n');
		milieu(x, y);
		fin(x, y);
	}
}
