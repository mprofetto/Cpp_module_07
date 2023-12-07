/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:07:59 by mprofett          #+#    #+#             */
/*   Updated: 2023/12/07 15:32:38 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename A, typename L, typename F, typename P>
void	iter(const A *address, const L &length, F (*function)(P parameter))
{
	L	i = -1;

	while (++i < length)
		function(*(address + i));
}

#endif
