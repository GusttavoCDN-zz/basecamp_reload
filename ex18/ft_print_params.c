/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil <guda-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:37:44 by guda-sil          #+#    #+#             */
/*   Updated: 2022/03/27 14:59:49 by guda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{

	int i;
	int j;

	i = 1; // A posição 0 do argv sempre sera o proprio programa sendo executado.
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
		i++;
	}

	return (0);
}
