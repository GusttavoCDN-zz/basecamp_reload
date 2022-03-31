/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil <guda-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:20:23 by guda-sil          #+#    #+#             */
/*   Updated: 2022/03/25 00:23:54 by guda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void  ft_swap(int *a, int *b)
{
  int temp;
  
  temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int a = 10;
  int b = 20;

  ft_swap(&a, &b);

  printf("A: %d\t\t", a);
  printf("B: %d", b);

  return (0);
}