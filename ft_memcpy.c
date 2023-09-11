/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:31:11 by pabpalma          #+#    #+#             */
/*   Updated: 2023/09/06 23:02:19 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*bytes_dest;
	unsigned char	*bytes_src;
	size_t			i;

	i = 0;
	bytes_dest = (unsigned char *)dst;
	bytes_src = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		bytes_dest[i] = bytes_src[i];
		i++;
	}
	return (dst);
}
