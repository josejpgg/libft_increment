/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:03:23 by jgamarra          #+#    #+#             */
/*   Updated: 2025/01/04 18:53:54 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The strstr() function locates the first occurrence of the null-terminated
* return a pointer to the located string, or NULL if the string is not found.
*/
char	*strstr(const char *haystack, const char *needle)
{
	char	*find;
	char	*string;
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (*haystack)
	{
		find = (char *)needle;
		string = (char *)haystack;
		j = i;
		while (*string && *string == *find)
		{
			string++;
			find++;
			j++;
			if (*find == '\0')
				return ((char *) haystack);
		}
		haystack++;
		i++;
	}
	return (NULL);
}
