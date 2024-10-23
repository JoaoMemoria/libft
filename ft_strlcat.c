/*strlcat concatena a string src ao final da string dst,
garantindo que o resultado seja sempre uma string terminada em \0.
Além disso, ela limita o tamanho total da string concatenada
com base no valor de size, e retorna o tamanho total que a string
teria (soma do comprimento de dst e src),
mesmo que a concatenação não aconteça por completo.
*/

#include <libft.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
  size_t  j;
  size_t  k;
  size_t  src_len;

  j = 0;
  k = 0;
  src_len = ft_strlen(src);
  
  while (dst[j] && j < size) // Conta o tamanho de dst e verifica o limite de size
    j++;
  while ((src[k]) && ((j + k + 1) < size)) // Copia src para dst, mantendo o size
  {
    dst [j + k] = src[k];
    k++;
  }
  if (j != size) // Garante a terminação nula
    dst[j + k] = '\0';
  return (j + src_len); // Retorna o tamanho de dst + src
}
