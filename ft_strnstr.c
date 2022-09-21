/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldas <acaldas@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 23:54:50 by acaldas           #+#    #+#             */
/*   Updated: 2022/09/17 04:41:38 by acaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lil, size_t len)
{
	size_t	i;

	if (!big)
		return (NULL);
	if (!*lil)
		return ((char *)big);
	while (*big && len > 0)
	{
		i = 0;
		while (big[i] == lil[i] && (len - i) > 0)
		{
			i++;
			if (!lil[i])
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
