/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 13:29:32 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/19 04:28:58 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "Brain variable address: " << &brain << "\n";
    std::cout << "Brain pointer: " << stringPTR << "\n";
    std::cout << "Brain variable reference: " << &stringREF << "\n";
    
    std::cout << "Brain variable value: " << brain << "\n";
    std::cout << "Brain pointer value: " << *stringPTR << "\n";
    std::cout << "Brain reference value: " << stringREF << "\n";
    
    return 0;
}