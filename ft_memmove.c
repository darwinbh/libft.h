#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	unsigned char	*dstt;
	unsigned char	*srcc;

	dstt = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (!dstt && !srcc)
		return (0);
	i = 0;

	if(dstt > srcc && srcc + len >= dstt)
	{
		i = len;
		while (i > 0)
		{
			i--;
			dstt[i] = srcc[i];
		}
	}
	else
	{
		while (i < len)
		{
			dstt[i] = srcc[i];
			i++;
		}
	}
	return (dst);
}
