/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:14:51 by ncheepan          #+#    #+#             */
/*   Updated: 2023/07/10 17:20:24 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	size_ch;
	int		count;

	count = 0;
	size_ch = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * (size_ch + 1));
	if (!s2)
		return (NULL);
	while (s1[count] != '\0')
	{
		s2[count] = s1[count];
		count++;
	}
	s2[count] = '\0';
	return (s2);
}
