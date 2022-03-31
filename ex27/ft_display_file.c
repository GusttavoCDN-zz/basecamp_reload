/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:07:16 by guda-sil@st       #+#    #+#             */
/*   Updated: 2022/03/30 16:07:16 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUFFER_SIZE 4096

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	ft_display_file(char *file_name)
{
	int		fd;
	int		reader;
	char	buffer[BUFFER_SIZE + 1];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		write(2, "open() error", 12);
		return (1);
	}

	reader = read(fd, buffer, BUFFER_SIZE);
	buffer[reader] = '\0';

	ft_putstr(buffer);

	if (close(fd) == -1)
	{
		write(2, "close() error",13);
		return (1);
	}

	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_display_file("test.txt");

	return (0);
}
