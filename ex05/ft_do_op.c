/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:36:38 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/26 15:45:16 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_handle_zero(int b, char op)
{
	if (op == '/' && b == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return ;
	}
	else if (op == '%' && b == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return ;
	}
}

void	ft_calc(char **argv, int (*opr[])(int, int), char *ops)
{
	int		i;
	int		len;
	int		result;
	char	buffer[12];

	i = 0;
	result = 0;
	while (ops[i])
	{
		if (argv[2][0] == ops[i])
		{
			ft_handle_zero(ft_atoi(argv[3]), argv[2][0]);
			if ((argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
				|| (argv[2][0] == '%' && ft_atoi(argv[3]) == 0))
				return ;
			result = opr[i](ft_atoi(argv[1]), ft_atoi(argv[3]));
			len = ft_itoa(result, buffer);
			write(1, buffer, len);
			return ;
		}
		i++;
	}
	write(1, "0\n", 2);
}

int	main(int argc, char **argv)
{
	int		(*opr[5])(int, int);
	char	*ops;

	if (argc != 4)
		return (0);
	if (ft_strlen(argv[2]) == 1)
	{
		opr[0] = add;
		opr[1] = subtract;
		opr[2] = multiply;
		opr[3] = divide;
		opr[4] = modulo;
		ops = "+-*/%";
		ft_calc(argv, opr, ops);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
