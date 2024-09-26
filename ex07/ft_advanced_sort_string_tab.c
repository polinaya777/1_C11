/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:16:58 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/26 16:25:47 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		min_idx;
	char	*temp;

	i = 0;
	while (tab[i])
	{
		min_idx = i;
		j = i + 1;
		while (tab[j])
		{
			if (cmp(tab[min_idx], tab[j]) > 0)
				min_idx = j;
			j++;
		}
		if (min_idx != i)
		{
			temp = tab[i];
			tab[i] = tab[min_idx];
			tab[min_idx] = temp;
		}
		i++;
	}
}

/*#include <stdio.h>
#include <string.h>

void	print_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		printf("tab[%d]: %s\n", i, tab[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	*tab[] = {"ZAwFCcxR", "N9yvx2gYu", "QDSE9BRGYuao", "8Ee",
		"JUQrzL", "XOva", "79", "02oVjgItC", "Hz8dPxG", "k", "O6v",
		"s5RqdDuMb2J", "i97Y4OR", "7UcAoVBz", "FzbMd", "Tk93ZKAU", "HxzT",
		NULL};

	printf("Before sorting:\n");
	print_tab(tab);
	ft_advanced_sort_string_tab(tab, ft_strcmp);
	printf("\nAfter sorting:\n");
	print_tab(tab);
	return (0);
}*/
