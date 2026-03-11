/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:35:46 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/10 21:21:02 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl(void){};
Harl::~Harl(void){std::cout << "Object deallocated\n";};

void Harl::_debug(void)
{
    std::cout << "Eu amo ter bacon extra para o meu hambúrguer 7XL-duplo-queijo-triplo-picles-ketchup-especial. Eu realmente amo!\n";
}

void Harl::_info(void)
{
    std::cout << "Eu não acredito que adicionar bacon extra custa mais dinheiro. Voces não colocaram bacon suﬁciente no meu hambúrguer! Se voces tivessem colocado, eu não estaria pedindo por mais!\n";
}

void Harl::_warning(void)
{
    std::cout << "Eu acho que mereço ter bacon extra de graça. Eu venho aqui há anos, enquanto voce começou a trabalhar aqui apenas no mes passado.\n";
}

void Harl::_error(void)
{
    std::cout << "Isto é inaceitável! Eu quero falar com o gerente agora.\n";
}


void Harl::complain(std::string level)
{
    void (Harl::*funcs[4])(void);
    int i = 0; 

    funcs[0] = &Harl::_debug;
    funcs[1] = &Harl::_info;
    funcs[2] = &Harl::_warning;
    funcs[3] = &Harl::_error;

    std::string levels[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    while (1)
    {
        if (levels[i] == level)
        {
            (this->*funcs[i])();
            return;
        }
        i++;
    }
    std::cout << "Unknown level: " << level << std::endl;
}