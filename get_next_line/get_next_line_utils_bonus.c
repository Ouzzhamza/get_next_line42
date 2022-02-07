/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 23:06:12 by houazzan          #+#    #+#             */
/*   Updated: 2021/12/01 23:06:17 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"get_next_line_bonus.h"

/* *********************************** */
/*		    ft_strlen.c			       */
/* *********************************** */

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (str)
		while (str[i])
			i++;
	return (i);
}

/* *********************************** */
/*		    ft_strchr.c				   */
/* *********************************** */

char	*ft_strchr(char *str, char c)
{
	int		i;

	i = 0;
	if (str)
	{
		if (c == 0)
			return (str + ft_strlen(str));
		while (str[i])
		{
			if (str[i] == c)
				return (&str[i]);
			i++;
		}
	}
	return (NULL);
}

/* *********************************** */
/*		    ft_strdup.c				   */
/* *********************************** */

char	*ft_strdup(const char *src)
{
	const int	len = ft_strlen(src);
	int			i;
	char		*ptr;

	ptr = NULL;
	if (src)
		ptr = malloc((len + 1) * sizeof(char));
	if (ptr)
	{
		i = 0;
		while (src[i] != '\0')
		{
			ptr[i] = src[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}

/* *********************************** */
/*		    ft_strjoin.c			   */
/* *********************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	const int	l_s1 = ft_strlen(s1);
	const int	l_s2 = ft_strlen(s2);
	int			i;
	char		*ptr;

	ptr = NULL;
	if (s1 == NULL && s2 != NULL)
		return (ft_strdup(s2));
	if (s1 && s2)
		ptr = (char *) malloc((l_s1 + l_s2 + 1) * sizeof(char));
	if (ptr)
	{
		i = 0;
		while (*s1)
			ptr[i++] = *s1++;
		while (*s2)
			ptr[i++] = *s2++;
		ptr[i] = '\0';
	}
	return (ptr);
}
