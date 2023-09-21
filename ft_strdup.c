/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:17:55 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/18 11:51:07 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str2;

	str2 = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!str2)
		return (NULL);
	ft_strlcpy(str2, str, ft_strlen(str) + 1);
	return (str2);
}
