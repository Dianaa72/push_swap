#include "../push_swap.h"

long	ft_atol(char *nptr)
{
	int		i;
	long	sign;
	long	res;

	sign = 1;
	res = 0;
	i = 0;
	while ((nptr[i] <= 13 && nptr[i] >= 9) || nptr[i] == ' ')
		i++;
	if ((nptr[i] == '-' || nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return (sign * res);
}

int	word_check(char *src, char *word)
{
	if (!src || !word)
		return (0);
	//ft_printf("\t\tComprobamos %s\n", word);
	while (*word)
	{
		//ft_printf("\t\t\tEntramos en while the word_check %c %c\n", *src, *word);
		if (!*src || *src != *word)
			return (0);
		src++;
		word++;
	}
	return (1);
}
