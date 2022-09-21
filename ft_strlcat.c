/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldas <acaldas@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 23:25:59 by acaldas           #+#    #+#             */
/*   Updated: 2022/09/17 02:59:00 by acaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	total;

	if (size > ft_strlen(dst))
	{
		total = ft_strlen(dst) + ft_strlen(src);
		while (*dst)
		{
			dst++;
			size--;
		}
		i = 0;
		while (i < (size - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	else
	{
		total = ft_strlen(src) + size;
	}
	return (total);
}
