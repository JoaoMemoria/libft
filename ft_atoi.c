#include <libft.h>

int			ft_atoi(const char *str)
{
	long			res;
	long			sign;
	unsigned int	i;

	res = 0;
	sign = 1;
	i = 0;
  /* garantir que pule qualquer tipo de espaço que possa ser encontrado no início da string.
 */
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	/* Veeificar se há um símbolo negativo no início do número que estaremos convertendo.
	 Se for negativo, definimos nosso sinal igual a -1 para multiplicar ao resultado quando o retornar.
  */
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
/* Converte a string de caracteres de char para int enquanto eles forem números.
 Se o caractere em que estamos atualmente é um número, converte para seu valor numérico ASCII.
 Para o primeiro caractere, res sempre está definido atualmente como 0.
 Multiplica por 10 para configurar a colocação do dígito,
 Em seguida, subtrai o valor numérico do caractere '0' na tabela ASCII do nosso caractere atual.
 Isso o define para seu valor numérico ASCII. Então começamos nosso loop de 
 novo e continuamos até atingirmos um caractere que não seja um número.
 */
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
  /* Retorna o valor de res multiplicado pelo valor do sinal para retornar o número com base em se era negativo ou não.
 */
	return ((int)(res * sign));
}
