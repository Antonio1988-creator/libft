/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:44:58 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/20 14:24:23 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest_ptr;
	const char	*src_ptr;

	dest_ptr = dst;
	src_ptr = src;
	if (dst == NULL && src == NULL & len > 0)
		return (NULL);
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
/*
int main(void)
{
    char source[] = "Hello, World!";
    char destination[15];
    size_t length = sizeof(source);
    ft_memmove(destination, source, length);
    int error = 0;
    size_t i = 0;
    while (i < length)
    {
        if (source[i] != destination[i])
        {
            error = 1;
            break;
        }
        i++;
    }

    if (error)
    {
        write(1, "Error en el movimiento de memoria.\n", 35);
    }
    else
    {
        write(1, "El movimiento de memoria se realizó correctamente.\n", 51);
    }

    return 0;
}*/
