/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:50:25 by guda-sil          #+#    #+#             */
/*   Updated: 2022/03/29 15:11:56 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int i;
	int result;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);

	i = 1;
	result = nb;
	while (i < nb)
		result *= --nb;

	return (result);
}

int main()
{
	printf("Fatorial: %d", ft_iterative_factorial(30));
	return (0);
}
