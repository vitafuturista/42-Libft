/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgalle <adrgalle@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:56:38 by adrgalle          #+#    #+#             */
/*   Updated: 2024/10/06 13:14:54 by adrgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int		isalpha;
	int		isdigit;
	int		isalnum;
	int		isascii;
	int		isprint;
	int		strlen;
	char str[50] = "Prueba memset";
	char str2[50] = "prueba bzero";
	char str3[50] = "prueba memcopy";
	char str4[50];
	char str5[50];
	char str6[50];
	char str7[50] = "Concatenar ";
	int c = 'o';
	const char *str8 = "Hola Mundo";
	const char *str9 = "Hola Munda";

	isalpha = ft_isalpha('b');
	isdigit = ft_isdigit('b');
	isalnum = ft_isalnum('b');
	isascii = ft_isascii('b');
	isprint = ft_isprint('b');
	strlen = ft_strlen("bajo");
	ft_memset(str, '*', 13);
	ft_bzero(str2, 8);
	ft_memcpy(str4, str3, 8);
	ft_memcpy(str5, str3, 3);
	ft_strlcpy(str6, str3, 6);
	ft_strlcat(str7, str3, 30);
	char	*result = ft_strchr("String de prueba", c);
	char	*result2 = ft_strrchr(str8, c);
	char	*result3 = ft_memchr("String para memchr", c, 18); 
	int	index;
	index = 0;
	char **result4 = ft_split("Primer String, Segundo String, Tercer String", ',');

	
	printf("El resultado de ft_isalpha para 'b' es: %i", isalpha);
	printf("\n");
	printf("El resultado de ft_isdigit para 'b' es: %i", isdigit);
	printf("\n");
	printf("El resultado de ft_isalnum para 'b' es: %i", isalnum);
	printf("\n");
	printf("El resultado de ft_isascii para 'b' es: %i", isascii);
	printf("\n");
	printf("El resultado de ft_isprint para 'b' es: %i", isprint);
	printf("\n");
	printf("El resultado de ft_strlen para 'bajo' es: %i", strlen);
	printf("\n");
	printf("El resultado de ft_memset para 'Prueba memset' es: %s", str);
	printf("\n");
	printf("El resultado de ft_bzero para 'Prueba bzero' es: %s", str2);
	printf("\n");
	printf("El resultado de f_memcopy para 'Prueba memcopy' con 8 caracteres es: %s", str4);
	printf("\n");
	printf("El resultado de f_memmove para 'Prueba memcopy' con 3 caracteres es: %s", str5);
	printf("\n");
	printf("El resultado de ft_strlcpy para 'Prueba memcopy' con 6 de size es: %s", str6);
	printf("\n");
	printf("El resultado de ft_strlcat para 'Prueba memcopy' + 'Concatenar ' es: %s", str7);
	printf("\n");
	printf("El resultado de ft_toupper para 'v' es: %c", ft_toupper('v'));
	printf("\n");
	printf("El resultado de ft_tolower para 'A' es: %c", ft_tolower('A'));
	printf("\n");
 
	// Comprobación de ft_strchr
	if (result != NULL) 
		printf("El resultado de ft_strchr para '%c' es: '%c'\n", c, *result);
	else
		printf("Ft_strchr: El carácter '%c' no fue encontrado en la cadena 'String de prueba'.\n", c);
	printf("\n");
	// Comprobación de ft_strrchr
	if (result2 != NULL)
		printf("La última ocurrencia de '%c' en \"%s\" es en: %s\n", c, str8, result2);
	else 
		printf("El carácter '%c' no se encontró en \"%s\".\n", c, str8);
	printf("\n");
	printf("El resultado de ft_strncmp para 'Hola mundo' y 'Hola munda' comparando 6 caracteres es: %i", ft_strncmp(str8, str9, 6));
	printf("\n");
	// Comprobación de ft_memchr
	if (result3 != NULL)
		printf("El resultado de ft_memchr para la frase String para memchr y la letra '%c' es: '%c'\n", c, *result);
	else 
		printf("En la frase 'String para memchr' no se encontro la letra o");
	printf("\n");
	printf("El resultado de ft_memcmp para 'Hola mundo' y 'Hola munda' y size 10 es: %i", ft_memcmp(str8, str9, 10));
	printf("\n");
	printf("El resultado de ft_strnstr al buscar 'aguja' en 'una aguja en un pajar' es: %s", ft_strnstr("una aguja en un pajar", "aguja", 15));
	printf("\n");
	printf("El resultado de ft_atoi para 193 es: %i", ft_atoi("193"));
	printf("\n");
	printf("El resultado de ft_strdup con un str original 'Hola mundo' es: %s", ft_strdup(str8));
	printf("\n");
	printf("El resultado de ft_substr con un str original 'Hola mundo', un start de 2 y un size de 5 es: %s", ft_substr(str8, 2, 5));
	printf("\n");
	printf("El resultado de ft_strjoin de Hola mundo y Hola munda es: %s", ft_strjoin("Hola mundo ", "Hola munda"));
	printf("\n");
	printf("El resultado de ft_strtrim para el array 'uououououoPruebaouououou' y el set 'uo' es: %s", ft_strtrim("uououououoPruebaouououou", "ou"));
	printf("\n");
// Ejemplos de ft_split
	printf("El resultado de ft_split de 'Primer String, Segundo String, Tercer String' es: ");
	printf("\n");
    	while (result4[index] != NULL) 
    	{ // Repite hasta que encuentres NULL
        	printf("%s\n", result4[index]);
        	free(result4[index]); // Liberar cada substring
        	index++; // Incrementar el índice
    	}
    	free(result4); // Liberar el array de punteros
	printf("\n");
	printf("El resultado de ft_itoa para -923543553 es: %s", ft_itoa(-923543553));
    printf("\n");
	// printf("El resultado de ft_strmapi para a,b,c y la función ft_toupper es: %s", ft_strmapi("a b c", (char (*)(unsigned int, char))(ft_toupper)));
	printf("El resultado de ft_putchar_fd para c= 'a' y fd=1 es: ");
	ft_putchar_fd('a', 1);
    printf("\n");
	return (0);
}
