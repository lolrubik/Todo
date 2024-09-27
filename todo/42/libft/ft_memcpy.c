/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:48:13 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/27 18:31:12 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	int					i;

	i = 0;
	d = dest;
	s = src;
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	d[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
    char dest[20];
    const char src[] = "hola mundo";
    ft_memcpy(dest, src, 21);
    printf("%s", dest);
    return (0);
}*/