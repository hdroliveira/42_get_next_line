/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@42student.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:44:31 by huda-roc          #+#    #+#             */
/*   Updated: 2025/11/17 14:44:33 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# define MAX_FD 10240

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(char const *str);

size_t	ft_strlen(const char *str);

void	ft_strncat(char *dest, const char *src, size_t n);
#endif
