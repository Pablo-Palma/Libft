/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:38:33 by pabpalma          #+#    #+#             */
/*   Updated: 2023/09/15 13:33:04 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_ocurrence;
	char	char_to_find;

	last_ocurrence = NULL;
	char_to_find = (unsigned char)c;
	while (*s)
	{
		if (*s == char_to_find)
			last_ocurrence = (char *)s;
		s++;
	}
	if (char_to_find == '\0')
		return ((char *)s);
	return (last_ocurrence);
}
