/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:31:20 by hakahmed          #+#    #+#             */
/*   Updated: 2023/04/10 13:52:19 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup_free(const char *s1)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *) malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = 0;
	free((char *)s1);
	s1 = NULL;
	return (ptr);
}

char	*ft_substr_gnl(char const *s, size_t len)
{
	size_t		i;
	char		*ptr;
	int			j;

	j = 0;
	if (!s)
		return ("");
	if (!s[0])
		len = 0;
	while (s[j] && s[j] != '\n')
		j++;
	if (s[j] == '\n')
		j++;
	ptr = (char *) malloc((ft_strlen(s) - j + 1) * sizeof(char));
	if (!ptr)
		return (0);
	i = 0;
	while (s[j])
		ptr[i++] = s[j++];
	ptr[i] = 0;
	free((char *) s);
	return (ptr);
}

char	*ft_strjoin_free(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	if ((!s1) || (!s2))
	{
		res = ft_strdup("");
		return (res);
	}	
	res = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!res)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
		res[j++] = s1[i++];
	i = 0;
	while (s2[i])
		res[j++] = s2[i++];
	res[j] = 0;
	free((char *)s2);
	free((char *)s1);
	s2 = 0;
	s1 = 0;
	return (res);
}
