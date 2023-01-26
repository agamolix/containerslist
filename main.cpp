/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2023/01/26 16:16:45 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "main.hpp"
#include <vector>
#include "vector.hpp"


template <class T>
void display(ft::vector<T> v)
{
	for (ft::v_iter<T> itt = v.begin(); itt != v.end(); itt++)
		std::cout << *itt << ' ';
	std::cout << "/end" << std::endl;
}
template <class T>
void display(std::vector<T> v)
{
	for (typename std::vector<T>::iterator itt = v.begin(); itt != v.end(); itt++)
		std::cout << *itt << ' ';
	std::cout << "/end" << std::endl;
}

int main()
{
	std::cout << "\t-------------------------------------" << std::endl;

	const int size = 5;
	ft::vector<int> vct(size);
	ft::vector<int>::iterator it(vct.begin());
	ft::vector<int>::const_iterator ite(vct.end());

	for (int i = 1; it != ite; ++i)
		*it++ = i;
	//printSize(vct, 1);

	it = vct.begin();
	ite = vct.begin();

	std::cout << *(++ite) << std::endl;
	std::cout << *(ite++) << std::endl;
	std::cout << *ite++ << std::endl;
	std::cout << *++ite << std::endl;

	it->m();
	ite->m();

	std::cout << *(++it) << std::endl;
	std::cout << *(it++) << std::endl;
	std::cout << *it++ << std::endl;
	std::cout << *++it << std::endl;

	std::cout << *(--ite) << std::endl;
	std::cout << *(ite--) << std::endl;
	std::cout << *--ite << std::endl;
	std::cout << *ite-- << std::endl;

	(*it).m();
	(*ite).m();

	std::cout << *(--it) << std::endl;
	std::cout << *(it--) << std::endl;
	std::cout << *it-- << std::endl;
	std::cout << *--it << std::endl;


	std::cout << "\t-------------------------------------" << std::endl;




/*	std::cout << "Enter a command: vi (vector int), vc (vector char), mi (map int, int), mc (map char, char): ";  
	std::string command;
	std::cin >> command;
	if (command.compare("vi") == 0)
	{
		test_vector_int();
		return 0;
	}
	else if (command.compare("vc") == 0)
	{
		test_vector_char();
		return 0;
	}
	else if (command.compare("mi") == 0)
	{
		test_map_int();
		return 0;
	}
	else if (command.compare("mc") == 0)
	{
		test_map_char();
		return(0);
	}
	else
	{
		std::cout << "Invalid command" << std::endl;
		return 0;
	}*/

	return 0;
}