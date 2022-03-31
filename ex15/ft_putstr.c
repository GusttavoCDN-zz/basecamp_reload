/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil <guda-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 12:24:51 by guda-sil          #+#    #+#             */
/*   Updated: 2022/03/27 12:35:52 by guda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{

	while (*str != '\0')
		ft_putchar(*str++);
}

int main()
{
	char name[] = "Gustavo";

	ft_putstr(name);

	return (0);
}
