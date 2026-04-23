/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosimon <mosimon@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:31:48 by mosimon           #+#    #+#             */
/*   Updated: 2026/04/23 12:42:25 by mosimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

#include <stdio.h.>
#include <stdlib.h>
#include <unistd.h>

size_t  ft_strlen(const char *s);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strdup(const char *s1);
char *ft_substr(const char *s, unsigned int start, size_t len);
char *ft_strchr(const char *s, int c);


