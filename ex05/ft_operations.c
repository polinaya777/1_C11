/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:41:23 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/26 11:41:57 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	add(int a, int b)
{
	return (a + b);
}

int	subtract(int a, int b)
{
	return (a - b);
}

int	multiply(int a, int b)
{
	return (a * b);
}

int	divide(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}

int	modulo(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}
