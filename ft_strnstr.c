#include "libft.h"

/* 
A função ft_strnstr localiza a primeira ocorrência da string s2 
dentro da string s1, mas limita a busca ao número de bytes n. 
Se s2 for uma string vazia, a função retornará s1. 
Se s2 não for encontrada em s1 dentro do limite n, retornará NULL.
*/

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < n && s1[i] != '\0') // Enquanto i for menor que n e o caractere atual de s1 não for o terminador nulo.
	{
		j = 0;
    while (i + j < n && s1[i + j] == s2[j] && s2[j] != '\0')
			j++;
		if (s2[j] == '\0') // Se chegar ao final de s2 (s2[j] == '\0'), isso significa que encontrou uma ocorrência completa de s2 em s1.
			return ((char *)s1 + i); // Retorna o ponteiro para a posição de s1 onde s2 foi encontrada.
		
		i++;
	}
	
	return (NULL);
}
