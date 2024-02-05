/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkendir <dkendir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:23:02 by dkendir           #+#    #+#             */
/*   Updated: 2024/02/05 18:06:57 by dkendir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}

/*int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(tab)/sizeof(tab[0]);

	ft_rev_int_tab(tab, size);
	
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);

		i++;
	}


	return (0);
}*/