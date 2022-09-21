/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldas <acaldas@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 23:54:59 by acaldas           #+#    #+#             */
/*   Updated: 2022/09/20 00:44:38 by acaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (size > (~(1 << 31) / count))
		return (NULL);
	mem = malloc (size * count);
	if (mem != NULL)
		ft_bzero(mem, (count * size));
	return (mem);
}
