
#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int		x;
	size_t	count;

	x = 0;
	count = 0;
	while (str[x] != '\0')
	{
		count = x + 1;
		x++;
	}
	return (count);
}

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && (i < (size - 1)))
		{
		dest[i] = src[i];
		i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (dest[len] && len < size)
	{
		len++;
	}
	i = len;
	while (src[len - i] && (len + 1) < size)
	{
		dest[len] = src[len - i];
		len++;
	}
	if (i < size)
	{
		dest[len] = '\0';
	}
	return (i + ft_strlen(src));
}

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			last = ((char *)s);
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (last);
}
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
