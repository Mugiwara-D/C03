/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 09:47:36 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/23 11:19:56 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a])
		a++;
	while (src[b])
	{
		dest[a + b] = src[b];
		b++;
		if (src[b] == 0)
			dest[a + b] = '\0';
	}
	return (dest);
}
#include <stdio.h>
int main()
{
	char src[100] =  "testsiiiii";
	char dest[100] = "testdest";
	printf("dest is %s\n", ft_strcat(dest,src));
	return 0;
}
