#include <libft.h>

/* memccpy: Copia até n bytes da memória apontada por src para a memória apontada por dest, até que o caractere c seja encontrado. Se c for encontrado, o endereço do próximo byte após c em src é retornado; caso contrário, retorna NULL.
*/

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t   i;
    unsigned char    *dest2;
    unsigned char    *src2;

    i = 0;
    dest2 = (unsigned char *)dest;
    src2 = (unsigned char *)src;
    while (i < n)
    {
        dest2[i] = src2[i]; //copia
        if (src2[i] == (unsigned char)c) // compara
            return (dest2 + i + 1); //retorna o ponteiro depois de c
        i++;
    }
    return (NULL);
}
/*
#include <stdio.h>

int main() {
    char src[] = "Hello, World!";
    char dest[20];

    char *result = ft_memccpy(dest, src, ',', sizeof(src)); // Copia até a vírgula

    if (result != NULL) {
        *result = '\0'; // Adiciona um terminador nulo
        printf("Resultado: %s\n", dest); // Saída: "Hello"
    } else {
        printf("Caractere não encontrado.\n");
    }

    return 0;
}
*/