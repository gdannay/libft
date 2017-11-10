/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdannay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:56:06 by gdannay           #+#    #+#             */
/*   Updated: 2017/11/09 22:19:00 by gdannay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	unsigned char	b;

	i = 0;
	b = (unsigned char)c;
	while (s[i] != '\0' && s[i] != b)
		i++;
	if (s[i] == '\0' && b != '\0')
		return (NULL);
	return ((char *)(s + i));
}
