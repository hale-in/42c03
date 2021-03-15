/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:45:35 by taeheeki          #+#    #+#             */
/*   Updated: 2021/03/14 18:36:27 by taeheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int id;
	unsigned int is;

	id = 0;
	while (dest[id])
		id++;
	if (dest[id] == '\0')
	{
		is = 0;
		while (src[is] && (is < n))
		{
			dest[id] = src[is];
			id++;
			is++;
		}
		dest[id] = '\0';
	}
	return (dest);
}
