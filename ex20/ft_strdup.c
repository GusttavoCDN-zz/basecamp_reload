/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil <guda-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:38:07 by guda-sil          #+#    #+#             */
/*   Updated: 2022/03/27 23:41:13 by guda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int str_len;

	str_len = 0;
	while (*str++ != '\0')
		str_len++;
	return (str_len);
}

char *ft_strdup(char *src)
{
	char *copy;
	int i;

	copy = (char *) malloc(ft_strlen(src) + 1);

	if (!copy)
		return (0);

	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}

	copy[i] = '\0';

	return (copy);
}

int main()
{
	char name[] = "Marcio da Silva Amaral Santos";

	char *teste = ft_strdup(name);

	printf("Teste: %s", teste);

	return (0);
}
