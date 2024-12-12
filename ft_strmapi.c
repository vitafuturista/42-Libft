#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t index;
    size_t len;
    char *s2;

    len = ft_strlen(s);
    s2 = (char *)malloc((len + 1) * sizeof(char));
    if (s2 == NULL || f == NULL)
        return NULL;
    index = 0;
    while (s[index] != '\0')
    {
        s2[index] = f(index, s[index]);
        index++;
    }
    s2[index] = '\0';
    return(s2);
}