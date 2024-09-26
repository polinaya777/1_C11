/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:40:31 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/26 13:32:48 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int	add(int a, int b);
int	subtract(int a, int b);
int	multiply(int a, int b);
int	divide(int a, int b);
int	modulo(int a, int b);
int	ft_strlen(char *str);
int	ft_atoi(char *str);
int	ft_itoa(int n, char *buffer);

#endif
