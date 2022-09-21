/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldas <acaldas@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 00:48:32 by acaldas           #+#    #+#             */
/*   Updated: 2022/09/21 00:51:29 by acaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	strlen;
	unsigned int	size;

	strlen = ft_strlen(s);
	if (start >= strlen)
		size = 1;
	else if (len >= strlen)
		size = (strlen - start) + 1;
	else
		size = len + 1;
	sub = malloc (size);
	if (!sub)
		return (NULL);
	i = 0;
	while (((start + i) < strlen) && (i < len))
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
