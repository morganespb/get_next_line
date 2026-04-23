/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosimon <mosimon@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:27:39 by mosimon           #+#    #+#             */
/*   Updated: 2026/04/23 12:31:32 by mosimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    int len;
    int i;
    int j;

    i = 0;
    j = 0;
    len = ft_strlen(s1) + ft_strlen(s2);
    res = malloc((len + 1) * sizeof(char));
    if (!res)
        return (NULL);
    while (s1[i])
    {
        res[i] = s1[i];
        i++;
    }
    while (s2[j])
        res[i++] = s2[j++];
    res[i] = '\0';
    return (res);
}


char *ft_strdup(const char *s1)
{
    int i;
    int len;
    char *dst;
    
    i = 0;

    if (!s1)
        return (NULL);
    len = ft_strlen(s1);
    dst = malloc((len + 1) * sizeof(char));
    if (!dst)
        return (NULL);
    while (s1[i])
    {
        dst[i] = s1[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    char *arr;
    size_t i;
    size_t slen;

    if (!s)
        return (NULL);

    slen = ft_strlen(s);

    if (start >= slen)
        return (ft_strdup(""));
    if (len > slen - start)
        len = slen - start;
    arr = malloc((len + 1) * sizeof(char));
    if (!arr)
        return (NULL);
    i = 0;
    while (i < len)
    {
        arr[i] = s[start + i];
        i++;
    }
    arr[i] = '\0';
    return (arr);
}


char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
