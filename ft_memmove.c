/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:22:02 by pabpalma          #+#    #+#             */
/*   Updated: 2023/09/08 18:50:27 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;
	char		*lstd;
	const char	*lsts;

	i = 0;
	d = dst;
	s = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (d < s)
		return (ft_memcpy(dst, src, len));
	else
	{
		lstd = d + (len -1);
		lsts = s + (len -1);
		while (i++ < len)
			*lstd-- = *lsts--;
		return (d);
	}
}
