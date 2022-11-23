/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:15:00 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/23 15:41:09 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include <exception>


template <typename T>
class Array 
{
private:
	T	*array;
	int	size_;
public:
	Array<T>();
	Array<T>(unsigned int n);
	Array<T>(const Array& other);
	Array<T>&	operator=(const Array& rhs);
	T &operator[](int index);
	int	size() const;
	~Array<T>();
    class OutOfBound: public std::exception {
		virtual const char* what() const throw();
	};
};

template<typename T>
Array<T>::Array()
{
    std::cout << "Array Default constructor called" << std::endl;
    array = NULL;
	size_ = 0;
}

template<typename T>
Array<T>::Array(unsigned int n) 
{
    std::cout << "Array constructor with parameters called" << std::endl;
    array = new T[n];
	size_ = n;
}


template<typename T>
T &Array<T>::operator[](int index)
{
	if (index >= size_ || index < 0)
        throw Array::OutOfBound();
    else
        return (array[index]);
}

template<typename T>
Array<T>::Array(const Array& other)
{
    std::cout << "Array copy constructor called" << std::endl;
    size_ = other.size();
    if (size_ > 0)
    {
	    array = new T[size_];
        for (int i = 0; i < size_; i++)
            array[i] = other.array[i];
    }
    else
        array = NULL;
}

template<typename T>
Array<T>&	Array<T>::operator=(const Array& rhs)
{
    if (this == &rhs)
        return (*this);
	size_ = rhs.size_;
    if (size_ > 0)
    {
        array = new T[size_];
        int i = -1;
        while (++i < size_)
            array[i] = rhs.array[i];
    }
    else
        array = NULL;
    return (*this);
}

template<typename T>
int    Array<T>::size() const
{
    return (size_);
}

template<typename T>
Array<T>::~Array()
{
    std::cout << "Array Destructor called" << std::endl;
	delete [] array;
}

template<typename T>
const char* Array<T>::OutOfBound::what() const throw()
{
	return "out of bounds";
}