/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:54:16 by creyt             #+#    #+#             */
/*   Updated: 2022/01/04 13:21:27 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	while (str && str != (char)c)
	{
		if (str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	s3 = malloc(sizeof(char) *(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (0);
	while (s1[i])
		s3[j++] = s1[i++];
	i = 0;
	while (s2[i])
		s3[j++] = s2[i++];
	s3[j] = '\0';
	return (s3);
}

char	*ft_strdup(const char *s)
{
	char	*s2;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	s2 = malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (0);
	else
	{
		while (s[i])
		{
			s2[i] = s[i];
			i++;
		}
		s2[i] = '\0';
		return (s2);
	}
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	size;
	size_t	i;

	if (!s)
		return (0);
	size = ft_strlen(s);
	if (size < len)
		len = size;
	s2 = malloc(sizeof(char) *(len + 1));
	if (!s2)
		return (0);
	while (i < len && start < size)
	{
		s2[i] = ((char)s[start]);
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}
