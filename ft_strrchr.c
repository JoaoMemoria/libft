#include "libft.h"

/*
ft_strrchr: Procura a última ocorrência de um caractere 'c' em uma string 's'.
Se o caractere for encontrado, retorna um ponteiro para essa ocorrência.
Se 'c' for '\0', retorna um ponteiro para o terminador nulo.
Caso o caractere não seja encontrado, retorna NULL.
*/
char	*ft_strrchr(const char *s, int c)
{
	int		i;
  
  i = ft_strlen(s); // Inicializa 'i' com o comprimento da string 's
	if (c == 0) // Se 'c' for o terminador nulo, retorna um ponteiro para o final da string
		return ((char *)s + i);
	
	while (i >= 0) // Loop para buscar de trás para frente
	{
		if (s[i] == (unsigned char)c) // Compara 's[i]' com 'c' após converter 'c' para unsigned char
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
