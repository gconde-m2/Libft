/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:28:55 by gconde-m          #+#    #+#             */
/*   Updated: 2019/11/18 11:42:29 by gconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t cont;

	len = 0;
	cont = 0;
	while (dst[cont] && cont < dstsize)
		cont++;
	len = cont;
	while (src[cont - len] && cont + 1 < dstsize)
	{
		dst[cont] = src[cont - len];
		cont++;
	}
	if (len < dstsize)
		dst[cont] = '\0';
	return (len + ft_strlen(src));
}
