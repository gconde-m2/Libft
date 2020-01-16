/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:30:42 by gconde-m          #+#    #+#             */
/*   Updated: 2019/11/19 12:30:47 by gconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*aux;
	size_t	cont;

	cont = 0;
	aux = (char*)str;
	while (cont < n)
	{
		*aux = (char)c;
		cont++;
		aux++;
	}
	return (str);
}
