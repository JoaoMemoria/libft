#include <libft.h>

int  ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t i;

  i = 0;
  if (n == 0)
    return (0);
  while (i < n && s1[i] != '\0' && s1[i] == s2[i]) //comparar até n caracteres
    i++;
  if (i == n) // comparou n caracteres e não encontrou diferença
    return (0);
  return ((unsigned char)s1[i] - (unsigned char)s2[i]); //retorna a diferença entre os valores dos caracteres (convertidos para unsigned char). garante que a comparação de caracteres seja feita para valores acima de 127
}
