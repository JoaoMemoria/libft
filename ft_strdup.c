#include <libft.h>

/* STRDUP duplica a string s1 e retorna um ponteiro para a nova string. 
A nova string é alocada dinamicamente e deve ser liberada pelo chamador.
*/
char		*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1); /* Aloca memória suficiente para a nova string: O tamanho da string original (obtido com ft_strlen) + 1 para o caractere nulo. */
	if (str == NULL) // Verifica se a alocação de memória foi ou não bem-sucedida.
		return (NULL); // Retorna NULL se a alocação falhar.
		while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
