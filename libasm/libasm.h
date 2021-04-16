/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamirjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 01:27:33 by gamirjan          #+#    #+#             */
/*   Updated: 2021/04/16 01:27:36 by gamirjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>

int				ft_strlen(char *str);
char			*ft_strcpy(char *dest, const char *src);
int				ft_strcmp(const char *str1, const char *str2);
ssize_t			ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t			ft_read(int fildes, void *buf, size_t nbyte);
char			*ft_strdup(const char *str);

void			strlen_s(char *str);
void			strcpy_s(char *src);
void			strcmp_s(char *str1, char *str2);

#endif
