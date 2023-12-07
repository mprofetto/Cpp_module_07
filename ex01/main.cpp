/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:50:36 by mprofett          #+#    #+#             */
/*   Updated: 2023/12/07 15:32:13 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void	print_int(int	nbr)
{
	std::cout << nbr + 1<< std::endl;
}

void	print_char(char	c)
{
	std::cout << c;
}

int	main(void)
{
	int	array[3];

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;

	iter(array, 3, &print_int);
	iter("coucou", 6, &print_char);
	std::cout << std::endl;
	return (0);
}
