/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:38:28 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/18 11:01:03 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*arr;

	arr = malloc(num_elements * element_size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, num_elements * element_size);
	return (arr);
}
