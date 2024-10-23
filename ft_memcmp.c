#include <libft.h>

/*Compara a string de bytes s1 com a string de bytes s2.
Ambas as strings são assumidas como tendo n bytes de comprimento. A
função ft_memcmp retorna zero se as duas strings forem idênticas; caso contrário,
retorna a diferença entre os primeiros dois bytes que diferem (tratados como
valores unsigned char, de modo que, por exemplo, '\200' é maior que '\0').
Strings de comprimento zero são sempre idênticas.
*/

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	/*Enquanto i for menor que o valor dado n, o oop continua.
	 * Mas se em algum ponto antes dissohouver uma diferenca, a função retorna
	 * imediatamente a diferença entre os dois bytes convertidos para unsigned char.
	 * Se i atingir o ponto onde não é mais menor que n e ainda não encontrar
	 * nenhum byte diferente, retorna 0 para indicar que ambas as strings
	 * de bytes são as mesmas.
  */
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
