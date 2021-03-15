/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:45:10 by taeheeki          #+#    #+#             */
/*   Updated: 2021/03/15 17:45:35 by taeheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
