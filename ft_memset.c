#include <libft.h>

/*void *b: ponteiro para o bloco de memória que vai ser preenchido
int c: Valor que vai entrar no byte do bloco de memoria - vai ser convertido para unsigned char
size_t len: Numero de bytes a serem preenchidos
*/

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char    *p;

    p = (unsigned char *)b;
    while (len > 0)
    {
        *p = (unsigned char)c;
        p++;
        len--;
    }
    return (b);
}
/*
#include <stdio.h>

int main() {
    char buffer[50];

    // Preenche o buffer com o caractere 'A' por 10 bytes
    ft_memset(buffer, 'A', 10);
    
    // Adiciona um terminador nulo ao final da string
    buffer[10] = '\0';

    printf("Buffer preenchido: %s\n", buffer); // Saída: Buffer preenchido: AAAAAAAAAA

    return 0;
}
*/