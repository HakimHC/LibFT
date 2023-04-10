/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:44:28 by hakahmed          #+#    #+#             */
/*   Updated: 2023/03/08 13:34:15 by hakahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*d;
	int		i;

	d = (char *) s;
	i = 0;
	while (d[i])
	{
		if (d[i] == (unsigned char) c)
			return (d + i);
		i++;
	}
	if (c == '\0')
		return (d + i);
	return (0);
}
