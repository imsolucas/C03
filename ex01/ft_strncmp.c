/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:41:12 by djin              #+#    #+#             */
/*   Updated: 2023/04/07 13:28:44 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int 	ft_strncmp(char	*s1, char	*s2, unsigned int	n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
				i++;
			}
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

int main()
{
	char	str1[] = "Hello";
	char	str2[] = "World";

	int n = 3;
	ft_strncmp(str2, str1, n);
	printf("Max string is:%d\n", ft_strncmp(str2, str1, n));
}
