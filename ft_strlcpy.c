/*strlcpy copia uma string de origem src para um destino dest,
garantindo que a cópia seja sempre terminada em \0,
desde que o tamanho fornecido seja maior que 0.
Ela também retorna o comprimento total da string de origem (src),
o que permite ao chamador saber quanto espaço seria necessário
para uma cópia completa, independentemente do tamanho fornecido.
*/

#include <libft.h>

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
  size_t  i;
  size_t  src_len;

  i = 0;
  src_len = 0;
  while (src[src_len] != '\0') // Conta o tamanho de src (sem incluir o terminador nulo)
  {
    src_len++;
  }
  if (size < 1) // Se o tamanho for 0, não copia nada e retorna o comprimento de src
    return (src_len);
  while (src[i] != '\0' && i < size -1) // Copia os caracteres de src para dest até atingir o limite de size - 1
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0'; // Garante a terminação nula em dest
  return (src_len); // Retorna o comprimento total de src
}
