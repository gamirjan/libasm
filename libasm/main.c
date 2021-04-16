/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamirjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 01:29:19 by gamirjan          #+#    #+#             */
/*   Updated: 2021/04/16 01:29:22 by gamirjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	write_s(char *str)
{
	int		i;
	int		fd;

	i = 0;
	fd = open("for_write.txt", O_RDWR);
	write(fd, "write: ", 7);
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	ft_write(fd, "\n", 1);
	i = 0;
	write(fd, "ft_write: ", 10);
	while (str[i])
	{
		ft_write(fd, &str[i], 1);
		i++;
	}
	write(fd, "\n", 1);
	close(fd);
}

void	read_s(int buffer_size)
{
	int		fd;
	char	str[buffer_size];

	if (buffer_size < 1)
		return ;
	fd = open("for_read.txt", O_RDONLY);
	read(fd, str, buffer_size);
	printf("read: %s\n", str);
	close(fd);
	fd = open("for_read.txt", O_RDONLY);
	ft_read(fd, str, buffer_size);
	printf("ft_read: %s\n", str);
	close(fd);
}

void	strdup_s(char *str)
{
	printf("strdup: %s\n", strdup(str));
	printf("ft_strdup: %s\n", ft_strdup(str));
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (strcmp("strlen", argv[1]) == 0)
			strlen_s(argv[2]);
		else if (strcmp("strcpy", argv[1]) == 0)
			strcpy_s(argv[2]);
		else if (strcmp("read", argv[1]) == 0)
			read_s(atoi(argv[2]));
		else if (strcmp("write", argv[1]) == 0)
			write_s(argv[2]);
		else if (strcmp("strdup", argv[1]) == 0)
			strdup_s(argv[2]);
		else
			printf("./a.out function argument\n");
	}
	else if (argc == 4)
	{
		if (strcmp("strcmp", argv[1]) == 0)
			strcmp_s(argv[2], argv[3]);
		else
			printf("./a.out function arguments\n");
	}
	else
		printf("./a.out function arguments\n");
	return (0);
}
