/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:47:49 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/26 13:32:10 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] != '-' && str[i] != '+' && (str[i] < '0' || str[i] > '9'))
		return (0);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

void	ft_strrev(char *buffer, int len)
{
	int		j;
	char	temp;

	j = 0;
	while (j < len / 2)
	{
		temp = buffer[j];
		buffer[j] = buffer[len - j - 1];
		buffer[len - j - 1] = temp;
		j++;
	}
}

int	ft_itoa(int n, char *buffer)
{
	int	i;
	int	is_negative;

	i = 0;
	if (n == 0)
		buffer[i++] = '0';
	else
	{
		is_negative = 0;
		if (n < 0)
		{
			is_negative = 1;
			n = (unsigned int)(-n);
		}
		while (n > 0)
		{
			buffer[i++] = (n % 10) + '0';
			n /= 10;
		}
		if (is_negative)
			buffer[i++] = '-';
		ft_strrev(buffer, i);
	}
	buffer[i++] = '\n';
	return (i);
}
