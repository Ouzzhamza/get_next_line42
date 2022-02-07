/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 23:05:50 by houazzan          #+#    #+#             */
/*   Updated: 2021/12/01 23:06:00 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H 

# include	<stdlib.h>
# include	<unistd.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *c);
char	*ft_strchr(char *s, char c);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
