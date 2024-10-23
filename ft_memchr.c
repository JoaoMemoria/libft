#include <libft.h>

/*Essa função localiza a primeira ocorrência de c (convertido
para um unsigned char) na string s. ft_memchr retorna um ponteiro para o byte
localizado, ou NULL se nenhum desses bytes existir dentro de n bytes.
*/

void		*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	/*Enquanto a variável i for menor que o parâmetro n, o loop continuará.
	verificar se a posição do índice atual, que foi convertida
	para um unsigned char, é igual ao parâmetro c, que também foi convertido
	para um unsigned char. Se essa verdadeira, retorna ponteiro para o índice que contém c.
  Se i não for mais menor que n e ainda não achiu c, retorna NULL.
  */
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
