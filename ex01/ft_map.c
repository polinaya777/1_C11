/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 09:53:27 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/26 10:00:29 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*result;

	result = (int *)malloc(length * sizeof(int));
	if (!result)
		return (NULL);
	i = 0;
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}

/*#include <stdio.h>

int	multiply_by_two(int n)
{
	return (n * 2);
}

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	*result = ft_map(arr, 5, multiply_by_two);

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", result[i]);
	}
	free(result);
	return (0);
}*/
