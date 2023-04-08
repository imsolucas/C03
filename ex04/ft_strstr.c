/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 19:20:58 by djin              #+#    #+#             */
/*   Updated: 2023/04/08 22:21:20 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int o;

	i = 0;
	o = 0;
	while (str[i] != '\0')
	{
		while (str[i] == to_find[o])
		{
			return (&str[i]);
			i++;
			o++;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main()
{
	char	string[] = "This is the way";
	char	locate[] = "the";

	char	*cmb = ft_strstr(string, locate);

	printf("the: %s\n", cmb);
}
