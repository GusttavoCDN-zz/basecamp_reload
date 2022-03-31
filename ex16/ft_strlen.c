/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 12:43:55 by guda-sil          #+#    #+#             */
/*   Updated: 2022/03/29 16:12:15 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	return (str_len);
}


int main()
{
	char name[] = "Gustavo";

	printf("My strlen: %d\n", ft_strlen(name));
	printf("Original strlen: %ld\n", strlen(name));
	printf("%ld", sizeof(name));

	return (0);
}
