/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldas <acaldas@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 02:37:43 by acaldas           #+#    #+#             */
/*   Updated: 2022/09/21 02:53:38 by acaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size(int n);
static void		fill_tab(char *tab, int nb, int size);

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;

	size = get_size(n);
	str = (char *) ft_calloc(size + 1, sizeof(char));
	fill_tab(str, n, size);
	return (str);
}

static void	fill_tab(char *tab, int nb, int size)
{
	int	si;

	si = 1;
	tab[size--] = '\0';
	if (nb == (1 << 31))
	{
		tab[size--] = 8 + '0';
		nb = (nb / 10);
	}
	if (nb < 0)
	{
		si = -1;
		nb *= sign;
	}
	while (size > 0)
	{
		tab[size--] = (nb % 10) + '0';
		nb /= 10;
	}
	if (si < 0)
		tab[0] = '-';
	else
		tab[0] = (nb % 10) + '0';
}

static size_t	get_size(int nb)
{
	size_t	cnt;

	cnt = 1;
	if (nb == (1 << 31))
	{
		nb = (nb + 1) * -1;
		cnt++;
	}
	if (nb < 0)
	{
		nb *= -1;
		cnt++;
	}
	while (nb > 9)
	{
		nb /= 10;
		cnt++;
	}
	return (cnt);
}
