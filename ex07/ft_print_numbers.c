/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil <guda-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:48:42 by guda-sil          #+#    #+#             */
/*   Updated: 2022/03/24 16:52:35 by guda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
  char c;

  c = '0';
  while (c <= '9')
  {
    write(1, &c, 1);
    c = c + 1;
  }
}

int main()
{
  ft_print_numbers();
  return (0);
}