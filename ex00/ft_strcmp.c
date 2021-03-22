/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:30:30 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/22 16:11:36 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int r;

	i = 0;
	r = 0;
	while(s1[i])
		i++;
	while (s2[r])
		r++;
	return (i - r);	
}
#include <stdio.h>
int main()
{
	char s1[] = "1235446";
	char s2[] = "1234"; 
	printf("%d\n",ft_strcmp(s1, s2));
	return 0;
}
