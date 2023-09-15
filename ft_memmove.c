/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:44:58 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/15 13:42:41 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest_ptr;
	const char	*src_ptr;

	dest_ptr = dst;
	src_ptr = src;
	if (dest_ptr < src_ptr)
	{
		while (len--)
			*dest_ptr++ = *src_ptr++;
	}
	else
	{
		dest_ptr += len;
		src_ptr += len;
		while (len--)
			*(--dest_ptr) = *(--src_ptr);
	}
	return (dst);
}
