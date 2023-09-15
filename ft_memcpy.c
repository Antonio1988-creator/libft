/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcopy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:33:38 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/15 15:57:15 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;
	size_t		i;

	dest_ptr = dst;
	src_ptr = src;
	i = 0;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dst);
}
