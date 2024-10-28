/* Esta função aplica f a cada caractere da string s, 
passando o índice como primeiro argumento e o próprio caractere como segundo argumento.
Ela cria uma nova string (usando malloc) para armazenar os resultados das aplicações sucessivas de f em cada caractere de s.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = ft_strdup(s);
	if (!s || !f || !str)
		return (0);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}