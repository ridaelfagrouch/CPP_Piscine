/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:15:00 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/23 00:54:12 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include <stdexcept>


template <typename T>
class Array 
{
private:
	T	*array;
	int	size;
public:
	Array<T>();
	Array<T>(unsigned int n);
	Array<T>(const Array& other);
	Array<T>&	operator=(const Array& rhs);
	T &operator[](int index);
	int	size() const;
	~Array<T>();
};

template<typename T>
Array<T>::Array()
{
    array = NULL;
	size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n) 
{
    array = new T[n];
	size = n;
}


template<typename T>
T &Array<T>::operator[](int index)
{
	if (index >= size || index < 0)
        throw(std::exception());
    else
        return (array[index]);
}


template<typename T>
Array<T>::Array(const Array& other)
{
	array = new T[other.size()]();
    size = other.size();
    for (int i = 0; i < this->size(); i++)
        array[i] = other.array[i];
}

template<typename T>
Array<T>&	Array<T>::operator=(const Array& rhs)
{
    if (this == rhs)
        return (this);
	size = rhs.size;
    if (size > 0)
    {
        array = new T[size];
        int i = -1;
        while (++i < size)
            array[i] = rhs.array[i];
    }
    else
        array = NULL;

    return (*this);
}

template<typename T>
int    Array<T>::size() const
{
    return (size);
}

template<typename T>
Array<T>::~Array()
{
	delete [] array;
}