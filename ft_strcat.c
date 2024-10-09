#include <libft.h>

char	*ft_strcat(char *s1, consta char *s2)
{
	char	*dst =s1;

	while (*dst)
		dst++;
	while(*s2)
		*dst++ = *s2++;
	*dst = '\0';
	return (s1);
}
