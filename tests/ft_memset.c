/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:24:17 by pabpalma          #+#    #+#             */
/*   Updated: 2023/09/18 12:24:58 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	sust;
	unsigned int	i;

	ptr = (unsigned char *)b;
	sust = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ptr[i] = sust;
		i++;
	}
	return (b);
}
/*
int main(void)
{
    char b[] = "pablo";
    int   c = 'P';
    size_t  n = 1;

    printf("%s\n", ft_memset(b, c, n));
}*/
