/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:34:03 by hakahmed          #+#    #+#             */
/*   Updated: 2023/04/10 13:52:08 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*get_l(char *buff);
char	*read_buffer(char *s, int i);
char	*ft_substr_gnl(char const *s, size_t len);
char	*ft_strjoin_free(char const *s1, char const *s2);
char	*ft_strdup_free(char const *s1);

#endif
