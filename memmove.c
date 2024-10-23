/* copia len bytes da string src para a string dst.
As duas strings podem se sobrepor;
a cópia é sempre realizada de forma não destrutiva.]
A função retorna o valor original de dst.*/

#include  <libft.h>

void  *ft_memmove(void *dst, const void, *src, size_t len) ///// Aloca memória suficiente para armazenar 'len' bytes, copiando de 'src' para 'temp'
{
  char  *temp;
  tmp = (char *)malloc(sizeof(char) * len);
  if (temp == NULL) ///// Verifica se a alocação de memória falhou. Se 'temp' for NULL, a função retorna NULL para sinalizar falha
    return (NULL);
  ft_memcpy(temp, src, len); ///// Copia os 'len' bytes de 'src' para 'temp'. protegendo contra sobreposição
  ft_memcpy(src, temp, len); ///Copia os 'len' bytes de 'temp' (buffer temporário) para 'dst'
  free(temp); ///Libera a memória temporária que foi alocada para 'temp'
  return(dst);
}
