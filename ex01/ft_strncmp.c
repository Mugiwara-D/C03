/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 17:14:58 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/22 17:30:27 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n <= 1)
	       return (0);	
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return(0);
}
#include <stdio.h>
int main()
{
	char s1[] = "123456";
	char s2[] = "1634";

	printf("%d\n",ft_strncmp(s1, s2,2));
	return 0;
}
