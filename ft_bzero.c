#include <libft.h>

/* Escreve n zeros na string s. Se n for 0 ft_bzero não faz nada*/

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}