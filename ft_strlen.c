#include <libft.h>

void	ft_strlen(const char *s)
{
	size_t	len = 0;

	while (s[len])
		len++;
	return (len);
}
