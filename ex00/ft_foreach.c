/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 09:38:26 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/26 09:52:01 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*#include <stdio.h>

void	print_number(int n) 
{
	printf("%d\n", n);
}

int	main()
{
	int	arr[] = {1, 2, 3, 4, 5};
	
	ft_foreach(arr, 5, print_number);
	return (0);
}*/
