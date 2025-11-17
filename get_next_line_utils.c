/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@42student.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:44:45 by huda-roc          #+#    #+#             */
/*   Updated: 2025/11/17 14:44:46 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	dest = malloc(ft_strlen((const char *)(s1))
			+ ft_strlen((const char *)(s2)) + 1);
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	ft_strncat(dest, s1, ft_strlen((const char *)(s1)));
	ft_strncat(dest, s2, ft_strlen((const char *)(s2)));
	return (dest);
}

char	*ft_strdup(char const *str)
{
	int		count;
	char	*dest;

	count = ft_strlen(str);
	dest = malloc((count + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	count = 0;
	while (str[count])
	{
		dest[count] = str[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

char	*ft_strchr(const char *str, int c)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (*ptr)
	{
		if (*ptr == (unsigned char)c)
			return ((char *)ptr);
		ptr++;
	}
	if (*ptr == (unsigned char)c)
		return ((char *)ptr);
	return (NULL);
}
