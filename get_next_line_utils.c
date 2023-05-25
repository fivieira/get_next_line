/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:06:29 by fivieira          #+#    #+#             */
/*   Updated: 2023/05/25 16:38:46 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j++];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
	{
		return ((char *)(s + i));
	}
	return (NULL);
}

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	count;
	unsigned char	*memory;

	count = 0;
	memory = str;
	while (count < n)
	{
		memory[count] = c;
		count++;
	}
	return (memory);
}

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	*tam;
	size_t	total_size;

	total_size = nitems * size;
	tam = malloc(total_size);
	if (!tam)
	{
		return (NULL);
	}
	ft_memset(tam, 0, total_size);
	return ((void *)tam);
}

size_t	ft_strlen(const char *theString)
{
	int	i;

	i = 0;
	while (theString[i])
		i++;
	return (i);
}
