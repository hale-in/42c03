/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:07:55 by taeheeki          #+#    #+#             */
/*   Updated: 2021/03/15 17:48:29 by taeheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				lenth(char *dest)
{
	unsigned int i;

	i = 0;
	while (dest[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int id;
	unsigned int is;

	id = 0;
	if (size <= (unsigned int)lenth(dest))
		return ((unsigned int)lenth(src) + size);
	while (dest[id])
		id++;
	is = 0;
	while (src[is] && size >= ((unsigned int)lenth(dest) + lenth(src)))
	{
		dest[id] = src[is];
		id++;
		is++;
	}
	dest[id] = '\0';
	return ((unsigned int)lenth(dest));
}
