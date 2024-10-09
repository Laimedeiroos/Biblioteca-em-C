#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle)
		return ((char *)haystack);

	while (*haystack && len)
	{
		size_t	i = 0;
		while (haystack[i] == needle[i] && i < len)
		{
			if (!needle[i + 1])
				return ((char *)haystack);
			i++;
		}
		haystack++;
		len--;
	}
	return (NULL);
}
