/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldas <acaldas@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:21:39 by acaldas           #+#    #+#             */
/*   Updated: 2022/09/17 01:22:57 by acaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*srce;

	if (!dst && !src)
		return (NULL);
	if (src < dst && (src + n) > dst)
	{
		srce = (char *) src;
		dest = (char *) dst;
		while (n > 0)
		{
			dest[n - 1] = srce[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
