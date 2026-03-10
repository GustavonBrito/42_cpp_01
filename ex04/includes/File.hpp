/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 08:07:09 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/10 13:22:17 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

#include <iostream>
#include <fstream>
#include <string>

class File
{
    public:
        File(std::string path);
        ~File(void);
        const std::string& getPath() const;
        void setPath(const std::string &name);

        static bool validate_file(std::string path);

        void replace_instances(std::string s1, std::string s2);
    
    private:
        std::string _path;

};


#endif
