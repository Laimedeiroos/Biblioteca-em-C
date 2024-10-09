#include <libft.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*dst = s1;

	while (*dst)
		dst++;
	while (n-- && *s2)
		*dst++ = *s2++;
	*dst = '\0';
	return (s1);
}
