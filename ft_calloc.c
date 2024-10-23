#include "libft.h"

/* 
A função ft_calloc aloca memória para um array de 'count' elementos, 
cada um com 'size' bytes. A memória alocada é inicializada com zero.
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;   // armazenar o endereço da memória alocada.
	size_t	total;  // total de bytes a serem alocados.

	total = count * size; // Calcula o total de bytes necessários para a alocação.
	mem = malloc(total);   // Aloca a memória total usando malloc.
	if (!mem) // Verifica se a alocação de memória foi ou não bem-sucedida.
		return (NULL);

	ft_bzero(mem, total); // Inicializa toda a memória alocada com zeros.
	return (mem); // Retorna o ponteiro para a memória alocada e inicializada.
}
