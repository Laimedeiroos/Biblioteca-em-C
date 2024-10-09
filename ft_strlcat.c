#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len = 0;
	size_t	s_len = 0;

	while (dst[d_len] && d_len < dstsize)
		d_len++;
	while (src[s_len])
		s_len++;
	if (dstsize <= d_len)
		return (dstsize + s_len);
	dst += d_len;
	dstsize -= d_len;

	while (*src && dstsize-- > 1)
		*dst++ = *src++;
	+dst = '\0';

	return (d_len + s_len);
}
