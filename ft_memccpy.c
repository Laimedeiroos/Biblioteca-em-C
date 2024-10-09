#include <libft.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)

{
	unsigned char *d = (unsigned char *)dst;
	const unsigned char *s = (const unsigned char *)src;

	
	while (n--)
	{
		*d++ = *s;
		if  (*s++ == (unsigned char)c)
			return (d);
	}
	return (NULL);
}	
