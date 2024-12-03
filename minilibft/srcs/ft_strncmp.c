/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:49:54 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/06 14:32:20 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1 && s2 && s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (((unsigned char) s1[i] - (unsigned char) s2[i]));
}
