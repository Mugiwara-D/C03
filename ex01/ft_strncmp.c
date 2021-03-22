/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 17:14:58 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/22 17:27:13 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int a;
	int b;

	i = 0;
	a = 0;
	b = 0;
	while (i < n)
	{
		if (s1[a])
			a++;
		if (s2[a])
			b++;
		i++;
	}
	return (a - b);
}
#include <stdio.h>
int main()
{
	char s1[] = "123456";
	char s2[] = "1234";

	printf("%d\n",ft_strncmp(s1, s2,2));
	return 0;
}
