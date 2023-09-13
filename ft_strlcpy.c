/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:51:42 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/13 13:52:03 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		j++;
	}
	return (j);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	x;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	x = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && x < size -1 && size > 0)
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	dest[x] = '\0';
	if (dest_len > size)
		dest_len = size;
	return (dest_len + src_len);
}
