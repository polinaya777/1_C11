/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:07:31 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/26 10:12:30 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

/*#include <stdio.h>

int	is_non_empty(char *str)
{
	return (str[0] != '\0');
}

int	main(void)
{
	char	*arr[] = {"", "42", "Piscine", ""};
	int	result = ft_count_if(arr, 4, is_non_empty);

	printf("Non-empty strings: %d\n", result);
	return (0);
}*/
