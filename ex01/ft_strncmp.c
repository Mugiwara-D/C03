/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 17:14:58 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/24 10:36:32 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				a;
	int				b;

	i = 0;
	a = 0;
	b = 0;
	while (i < n)
	{
		if (s1[a])
			a++;
		if (s2[b])
			b++;
		i++;
	}
	if ((a - b) < 0)
		return (-1);
	else if ((a - b) > 0)
		return (1);
	else
		return (0);
}
