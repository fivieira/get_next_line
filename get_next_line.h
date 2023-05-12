#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>



size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, unsigned int size);
char	*ft_strrchr(const char *s, int c);


#endif