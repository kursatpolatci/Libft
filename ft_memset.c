/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpolatci <kpolatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:49:57 by kpolatci          #+#    #+#             */
/*   Updated: 2023/07/11 16:49:57 by kpolatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
int main() {

	char k[] = "Kursat";
	printf("%s\n", ft_memset(k, 43, sizeof(char) * 3));

    printf("---------------\n");

    int dizi[3] = {1,2,3};
    int *new_array = ft_memset(dizi,'.',sizeof(int)*3);

    printf("%c %c %c\n",new_array[0],new_array[1],new_array[2]);

    printf("---------------\n");


    int dizi2[3] = {1,2,3};
    int *new_array2 = ft_memset(dizi2,'.',3);

    printf("%c %d %d\n",new_array2[0],new_array2[1],new_array2[2]);
    
	return 0;
}*/