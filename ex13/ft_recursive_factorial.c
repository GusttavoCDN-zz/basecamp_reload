/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 01:11:17 by guda-sil          #+#    #+#             */
/*   Updated: 2022/03/29 15:13:42 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int	nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 15)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

int main()
{
	printf("%d\n", ft_recursive_factorial(28));
	return (0);
}
