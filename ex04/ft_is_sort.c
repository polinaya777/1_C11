/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:13:49 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/26 10:34:41 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	i = 0;
	asc = 1;
	desc = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			asc = 0;
		else if (f(tab[i], tab[i + 1]) < 0)
			desc = 0;
		i++;
	}
	return (asc || desc);
}

/*#include <stdio.h>

int	ft_int_cmp(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int	arr1[] = {1, 2, 3, 4, 5};
	int	arr2[] = {5, 4, 3, 2, 1};
	int	arr3[] = {1, 3, 2, 4, 5};

	printf("Array 1 is sorted: %d\n", ft_is_sort(arr1, 5, ft_int_cmp));
	printf("Array 2 is sorted: %d\n", ft_is_sort(arr2, 5, ft_int_cmp));
	printf("Array 3 is sorted: %d\n", ft_is_sort(arr3, 5, ft_int_cmp));
	return (0);
}*/
