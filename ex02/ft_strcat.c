/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:45:10 by taeheeki          #+#    #+#             */
/*   Updated: 2021/03/14 18:13:56 by taeheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int id;
	int is;

	id = 0;
	while (dest[id])
		id++;
	if (dest[id] == '\0')
	{
		is = 0;
		while (src[is])
		{
			dest[id] = src[is];
			id++;
			is++;
		}
		dest[id] = '\0';
	}
	return (dest);
}
