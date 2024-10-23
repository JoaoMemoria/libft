#include <libft.h>

/* ft_strchr: Procura a primeira ocorrência de um caractere 'c' em uma string 's'.
 Se o caractere for encontrado, retorna um ponteiro para a primeira ocorrência
 de 'c' na string 's'. Se 'c' for '\0', retorna um ponteiro para o terminador nulo.
 Caso o caractere não seja encontrado, retorna NULL. */
 
char  *ft_strchr(const char *s, int c)
{
	size_t  i;

	i = 0; 
	while (s[i]) // percorre a string até encontrar o caractere c ou o final da string
	{
		if (s[i] == (unsigned char)c) // 'c' é convertido para unsigned char para garantir compatibilidade com a função strchr da libc
			return ((char *)s + i); // Retorna um ponteiro para a posição de 'c' na string
		i++;
	}
		if ((unsigned char)c == '\0' && s[i] == '\0') // checa se 'c' é '\0', caso sim, retorna um ponteiro para o terminador nulo da string
      return ((char *)s + i);
	return (NULL); // Se o caractere não for encontrado, retorna NULL
}
