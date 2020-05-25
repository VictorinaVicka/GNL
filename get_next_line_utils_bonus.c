/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 18:27:27 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/24 18:02:15 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char	*ft_strdup(const char *str)
{
	int		index;
	char	*dst;

	index = 0;
	while (str[index] != '\0')
		index++;
	dst = (char*)malloc(sizeof(char) * (index + 1));
	if (dst == NULL)
		return (NULL);
	index = 0;
	while (str[index] != '\0')
	{
		dst[index] = str[index];
		index++;
	}
	dst[index] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	index1;
	size_t	index2;
	size_t	len_s1;
	size_t	len_s2;
	char	*str;

	index1 = 0;
	index2 = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	if (!(str = malloc(sizeof(char) * (len_s1 + len_s2 + 1))))
		return (NULL);
	while (s1[index1])
		str[index1++] = s1[index2++];
	index2 = 0;
	while (s2[index2])
		str[index1++] = s2[index2++];
	str[index1] = '\0';
	free((char *)s1);
	return (str);
}
