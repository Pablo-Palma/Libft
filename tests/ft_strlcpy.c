/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:27:23 by pabpalma          #+#    #+#             */
/*   Updated: 2023/09/18 20:00:16 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size <= 0 || dest == 0)
		return (len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

int main() {
    char destino[20];
    size_t len;

    // Test 1: Copia completa
    len = ft_strlcpy(destino, "Hello", sizeof(destino));
    printf("Resultado 1: %s, Longitud: %zu\n", destino, len);

    // Test 2: Truncamiento
    len = ft_strlcpy(destino, "HelloWorld", 5); // Solo copia "Hell" y añade '\0'
    printf("Resultado 2: %s, Longitud: %zu\n", destino, len);

    // Test 3: Tamaño 0 (no debería copiar nada)
    len = ft_strlcpy(destino, "No se copia", 0);
    printf("Resultado 3: %s, Longitud: %zu\n", destino, len);

    // Test 4: Cadena vacía
    len = ft_strlcpy(destino, "", sizeof(destino));
    printf("Resultado 4: %s, Longitud: %zu\n", destino, len);

    // Test 5: Destino justo para fuente
    len = ft_strlcpy(destino, "Ajustado", 9); // 8 caracteres + '\0'
    printf("Resultado 5: %s, Longitud: %zu\n", destino, len);

    return 0;
}
