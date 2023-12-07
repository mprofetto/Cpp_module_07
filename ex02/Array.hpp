/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:37:22 by mprofett          #+#    #+#             */
/*   Updated: 2023/12/07 17:26:54 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>

template<typename T>
class	Array
{
	public:

		class InvalidIndexException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Index too high");
				}
		};

		Array(void) : _size(1)
		{
			this->_array = new T();
		}

		~Array()
		{
			delete[] _array;
		}

		Array(unsigned int n) : _size(n)
		{
			this->_array = new  T[this->_size];
		}

		Array(const Array &copy) : _size(copy.getSize())
		{
			this->_array = new  T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = copy[i];
		}

		unsigned int getSize() const
		{
			return this->_size;
		}

		Array	&operator=(const Array &copy)
		{
			std::cout << "copy.size " << copy.getSize() << std::endl;
			if (this->_array)
				delete[] _array;
			this->_size = copy.getSize();
			this->_array = new  T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
			{
				this->_array[i] = copy[i];
			    std::cout << "copy[" << i << "] " << copy[i] << " _array[" << i << "] " << this->_array[i] <<std::endl;
			}
			return (*this);
		}

		T	&operator[](const unsigned int index)
		{
			if (index < this->getSize() && this->_array)
				return (this->_array[index]);
			else
				throw InvalidIndexException();
		}

		const T	&operator[](const unsigned int index) const
		{
			if (index < this->getSize() && this->_array)
				return (this->_array[index]);
			else
				throw InvalidIndexException();
		}

	private:
		unsigned int	_size;
		T				*_array;
};

#endif
