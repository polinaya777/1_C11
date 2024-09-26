/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:01:42 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/26 10:06:50 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	is_non_empty(char *str)
{
	return (str[0] != '\0');
}

int	main(void)
{
	char	*arr[] = {"", "42", "Piscine", NULL};

	if (ft_any(arr, is_non_empty))
		printf("At least one non-empty string found\n");
	else
		printf("All strings are empty\n");
	return (0);
}*/
