/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:57:58 by sepatez           #+#    #+#             */
/*   Updated: 2023/02/28 21:58:00 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

int	recount_daddy(char *str, char *charset)
{
	int	count;

	count = 0;
	while (str && *str)
	{
		while (*str && ft_is_sep(*str, charset))
			str++;
		if (*str)
			count++;
		while (*str && !ft_is_sep(*str, charset))
			str++;
	}
	return (count + 1);
}

int	count_letters(char *str, char *charset)
{
	int	i;

	i = 0;
	while (ft_is_sep(*str, charset) && *str)
		str++;
	while (!ft_is_sep(*str, charset) && *str)
	{
		i++;
		str++;
	}
	return (i + 1);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;

	i = 0;
	while (ft_is_sep(*str, charset))
		str++;
	result = malloc(sizeof(char *) * recount_daddy(str, charset));
	if (!result)
		return (0x0);
	while (*str)
	{
		j = 0;
		result[i] = malloc(count_letters(str, charset));
		if (!(result[i]))
			return (0x0);
		while (!ft_is_sep(*str, charset) && *str)
			result[i][j++] = *str++;
		result[i++][j] = '\0';
		while (ft_is_sep(*str, charset) && *str)
			str++;
	}
	result[i] = 0;
	return (result);
}

// //there's still a problem for empty charset
// int main()
// {
// 	char *b = "bonjour je veux partir";
// 	char **result = ft_split(b, "");
// 	for (int k = 0; k < 2; k++)
// 	{
// 		printf("|%s|\n", result[k]);
// 		// free(result[k]);
// 	}
// 	// free(result[5]);
// 	// free(result);
// }
