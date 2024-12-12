#include "libft.h"
#include <stdio.h>

static char *ft_strrev(char *str, int len)
{
    char    *str2;
    int index;

    str2 = (char *)malloc((len + 1) * sizeof(char));
    index = 0;
    len--;
    while (len >= 0)
    {
        str2[index] = str[len];
        index++;
        len--;
    }
    str2[index] = '\0';
    return(str2);
}

static int ft_intlen(int n)
{
    int len;

    len = 0;
    if (n <= 0)
        len++;
    while (n != 0)
    {
        n = n / 10;
        len++;
    }
    return(len);
}

char *ft_itoa(int n)
{
    char *str;
    int len;
    int index;
    int symbol;

    index = 0;
    symbol = 0;
    if (n < 0)
    {
        symbol = -1;
        n = n * -1;
    }
    len = ft_intlen(n);
    str = (char *)malloc((len + 1) * sizeof(char));
    while (index < len)
    {
        str[index] = (n % 10) + '0';
        n = n / 10;
        index++;
    }
    if (symbol < 0)
        str[index++] = '-';
    str[index] = '\0'; 
    return(ft_strrev(str, index));
}