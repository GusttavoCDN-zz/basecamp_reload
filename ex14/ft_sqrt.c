/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil <guda-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 12:08:45 by guda-sil          #+#    #+#             */
/*   Updated: 2022/03/27 12:17:56 by guda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;

	if (nb <= 0)
		return (0);

	i = 0;
	while ((i * i < nb) && i <= 46341)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

int main()
{

	printf("%d", ft_sqrt(50));
	printf("\n%d", ft_sqrt(81));
	printf("\n%d", ft_sqrt(256));
	printf("\n%d", ft_sqrt(9));

	return (0);
}
