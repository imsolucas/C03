/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:50:59 by djin              #+#    #+#             */
/*   Updated: 2023/04/06 14:30:09 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int length(char *name)
{
	int counter;

	counter = 0;

	while (name[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

void print(char *c)
{
	int i;

	i = 0;
	while(i < length(c))
	{
		write(1, &c[i], 1);
		i++;
	}
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int i;
	
	i = 0;
	while (s1[i] && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			print("Invalid\n");
			return (s1[i] - s2[i]);
		}
		else
		{
			 print("Welcome ");
			 print(s1);
			 print("\n");
			 return (0);
		}
	}
	return (1);
}

int main()
{
	char	name1[] = "Lucas";
	char	name2[20];
	
	printf("Enter your name:");
	scanf(" %s", name2);
	ft_strcmp(name1, name2);
	return (0);
}
