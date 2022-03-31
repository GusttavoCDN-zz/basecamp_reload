/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil <guda-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:21:57 by guda-sil          #+#    #+#             */
/*   Updated: 2022/03/27 16:54:39 by guda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_param(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
	ft_putchar('\n');
}

int ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}

	return ((int)*s1 - (int)*s2);
}

void	ft_sort_params(char **tab, int size)
{
	int i;
	int j;
	char *temp;

	i = 1;
	temp = "";
	while (i < size)
	{
		j = 1;
		while (j < size - i)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{

	ft_sort_params(argv, argc);
	int i = 1;
	while (i < argc)
	{
		ft_print_param(argv[i]);
		i++;
	}

	return (0);
}
