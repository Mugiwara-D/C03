/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 17:14:58 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/24 14:34:28 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
<<<<<<< HEAD
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
=======
	while (s1[i] && s2[i] && s1[i] == s2[i] && i <= n)
		i++;
	return (s1[i] - s2[i]);
>>>>>>> d43e2917d83c8c74c8885acb4c8db6fa1a90f94a
}
