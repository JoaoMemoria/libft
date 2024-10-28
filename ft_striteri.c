/^ Para cada caractere na string s, aplica a função f,
passando como parâmetros o índice de cada caractere em s
e o endereço do próprio caractere.
A função f pode modificar o caractere, se necessário.
/*

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	i = -1;
	if (s == NULL && f == NULL)
		return ;
	while (s[++i])
		(*f)(i, &s[i]);
}