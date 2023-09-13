/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:57:44 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/13 13:58:12 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	j;

	j = 0;
	if (size > 0)
	{
		while (src[j] != '\0' && (j + 1) < size)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (ft_strlen(src));
}
