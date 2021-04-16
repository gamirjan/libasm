/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamirjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 05:32:06 by gamirjan          #+#    #+#             */
/*   Updated: 2021/04/16 05:32:10 by gamirjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	strlen_s(char *str)
{
	printf("strlen: %lu\n", strlen(str));
	printf("ft_strlen: %d\n", ft_strlen(str));
}

void	strcpy_s(char *src)
{
	char *dest;

	dest = (char *)malloc(sizeof(char) * (strlen(src) + 1));
	printf("strcpy: %s\n", strcpy(dest, src));
	printf("ft_strcpy: %s\n", ft_strcpy(dest, src));
}

void	strcmp_s(char *str1, char *str2)
{
	printf("strcmp: %d\n", strcmp(str1, str2));
	printf("ft_strcmp: %d\n", ft_strcmp(str1, str2));
}
