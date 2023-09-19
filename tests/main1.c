/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:13:57 by pabpalma          #+#    #+#             */
/*   Updated: 2023/09/18 11:38:44 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	i;

	i = 80;
	printf("%d\n", ft_isalpha(i));
	printf("%d\n", ft_isalpha(0));
	printf("%d\n", ft_isalpha(166));
	printf("%d\n", ft_isascii(166));
	printf("%d\n", ft_isascii(127));
	return (0);
}
