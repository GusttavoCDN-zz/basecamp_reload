/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 23:03:46 by guda-sil          #+#    #+#             */
/*   Updated: 2022/03/29 16:13:29 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*numbers;
	int	range;
	int	i;

	range = max - min;
	numbers = (int *) malloc(range * sizeof(int));
	if (!numbers || min >= max)
		return (NULL);
	i = 0;
	while (min < max)
		numbers[i++] = min++;
	return (numbers);
}

int main()
{
	int *numbers;
	numbers = ft_range(0, 97);

	int j = 0;
	while(numbers[j])
	{
		printf("%d\n", numbers[j]);
		j++;
	}

	return (0);
}
