/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldas <acaldas@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 01:43:26 by acaldas           #+#    #+#             */
/*   Updated: 2022/09/21 01:51:55 by acaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len;
	char			*jn;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	jn = (char *) ft_calloc (len, sizeof(char));
	if (!jn)
		return (NULL);
	ft_strlcat(jn, s1, len);
	ft_strlcat(jn, s2, len);
	return (jn);
}
