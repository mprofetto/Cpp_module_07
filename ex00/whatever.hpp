/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:51:39 by mprofett          #+#    #+#             */
/*   Updated: 2023/12/07 15:00:59 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &x, T &y)
{
	T temp;

	temp = y;
	y = x;
	x = temp;
}

template<typename T>
const T	&min(const T &x,const  T &y)
{
	if (y <= x)
		return (y);
	else
		return (x);
}

template<typename T>
const T	&max(const T &x,const  T &y)
{
	if (y >= x)
		return (y);
	else
		return (x);
}

#endif
