/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:35:44 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/10 21:13:42 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class   Harl
{
public:
    Harl    ();
    ~Harl(void);
    void    complain( std::string level );
    void    *funcs[4];

private:
    void    _debug( void );
    void    _info( void );
    void    _warning( void );
    void    _error( void );
};

#endif