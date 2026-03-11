/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 21:31:52 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/10 21:48:21 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);
        void set_name(std::string name);
        void announce( void );

    private:
        std::string _name;
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif