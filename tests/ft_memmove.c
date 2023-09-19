/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:22:02 by pabpalma          #+#    #+#             */
/*   Updated: 2023/09/18 18:55:58 by pabpalma         ###   ########.fr       */
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

int main() {
    // Caso 1: dst < src.
    char buffer1[] = "ABCDEF";
    printf("Antes de mover (caso 1): %s\n", buffer1);
    ft_memmove(buffer1, buffer1 + 2, 4);  // Moviendo "CDEF" dos lugares a la izquierda
    printf("Después de mover (caso 1): %s\n\n", buffer1);
        // Caso 2: dst > src.
    char buffer2[] = "ABCDEF";
    printf("Antes de mover (caso 2): %s\n", buffer2);
    ft_memmove(buffer2 + 2, buffer2, 4);  // Moviendo "ABCD" dos lugares a la derecha
    printf("Después de mover (caso 2): %s\n", buffer2);
        // Caso 3: Movimiento completo.
    char buffer3[] = "HELLO";
    printf("Antes de mover (caso 3): %s\n", buffer3);
    ft_memmove(buffer3, buffer3 + 1, 4); // Moviendo "ELLO" hacia la izquierda
    printf("Después de mover (caso 3): %s\n\n", buffer3);

    // Caso 4: Movimiento de un solo carácter.
    char buffer4[] = "WORLD";
    printf("Antes de mover (caso 4): %s\n", buffer4);
    ft_memmove(buffer4 + 2, buffer4 + 1, 1); // Moviendo la letra "O" a la derecha
    printf("Después de mover (caso 4): %s\n\n", buffer4);

    // Caso 5: Buffer vacío.
    char buffer5[] = "";
    printf("Antes de mover (caso 5): %s\n", buffer5);
    ft_memmove(buffer5, buffer5, 0); // No debería cambiar nada
    printf("Después de mover (caso 5): %s\n\n", buffer5);

    // Caso 6: Movimiento parcial superpuesto.
    char buffer6[] = "123456";
    printf("Antes de mover (caso 6): %s\n", buffer6);
    ft_memmove(buffer6 + 1, buffer6 + 2, 3); // Moviendo "345" un lugar a la izquierda
    printf("Después de mover (caso 6): %s\n\n", buffer6);

    return (0);
}
