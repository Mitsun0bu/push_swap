/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:33:55 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/08 14:53:11 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		substr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	else
		substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
	{
		substr[i] = '\0';
		return (substr);
	}
	while (s[start] && i < len)
	{
		substr[i] = s[start];
		start ++;
		i ++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char const		s[18] = "SALUT LES COPAINS";
	unsigned int	start = 20;
	size_t			len = 3;

	printf("src : %s\n", s);
	//	My function
	printf("Result of ft_substr : %s\n", ft_substr(s, start, len));
	return (0);
}

// === END OF MY TEST ===
*/
