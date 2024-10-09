#include <libft.h>

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	i = 0;

	dup = (char *)malloc(ft_strlen(s1) + 1);
	if (!dup)
		return (NULL);
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
