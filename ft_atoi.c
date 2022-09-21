/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldas <acaldas@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 01:10:55 by acaldas           #+#    #+#             */
/*   Updated: 2022/09/17 04:57:27 by acaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_limit(int res, int next, int sign);

int	ft_atoi(const char *nptr)
{
	int	res;
	int	sig;

	res = 0;
	sig = 1;
	while (*nptr == ' ' || (*nptr >= 8 && *nptr <= 14))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sig *= -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		if (!check_limit(res, *nptr - '0', sig))
			return (0);
		res = res * 10 + (*nptr - '0');
		nptr++;
	}
	return (res * sig);
}

static int	check_limit(int res, int next, int sign)
{
	if (sign < 0)
	{
		if (-res < ((1 << 31) + next) / 10)
			return (0);
	}
	else
	{
		if (res > (~(1 << 31) - next) / 10)
			return (0);
	}
	return (1);
}
