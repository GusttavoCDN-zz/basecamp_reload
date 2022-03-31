/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil <guda-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:37:44 by guda-sil          #+#    #+#             */
/*   Updated: 2022/03/25 00:50:01 by guda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
  *div = a / b;
  *mod = a % b;
}

int main()
{
  int div;
  int mod;

  ft_div_mod(20, 10, &div, &mod);

  printf("Div: %d\n", div);
  printf("Mod: %d", mod);

  return (0);
}
