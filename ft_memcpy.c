#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *dest;
	const char *source;
	int i;

	i = 0;
	dest = dst;
	source = src;
	while (n > 0)
	{
		dest[i] = source[i];
		i++;
		n--;
	}
	dest[i] = '\0';
	return ((void *)dest);
}
