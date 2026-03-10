/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 08:07:07 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/10 19:23:04 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/File.hpp"

File::~File(void) { std::cout << "Object deallocated\n"; };

File::File(std::string path)
{
    this->_path = path;
}

void File::setPath(const std::string &name) { _path = name; }
const std::string& File::getPath() const { return _path; }

bool    File::validate_file(std::string path)
{
    std::ifstream ifs(path.c_str());
    if (!ifs.is_open())
        return false;
    if (ifs.peek() == std::ifstream::traits_type::eof())
    {
        ifs.close();
        return false;
    }
    ifs.close();
    return true;
}

static std::string  ft_replace(std::string line, std::string s1, std::string s2)
{
    std::string result;
    std::size_t pos = 0;
    std::size_t found;

    while ((found = line.find(s1, pos)) != std::string::npos)
    {
        result += line.substr(pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }
    result += line.substr(pos);
    return result;
}

void    File::replace_instances(std::string s1, std::string s2)
{
    if (s1.empty())
        return ;
    std::ifstream ifs(this->getPath().c_str());
    if (!ifs.is_open())
        return ;

    std::string outPath = this->getPath() + ".replace";
    std::ofstream ofs(outPath.c_str());
    if (!ofs.is_open())
    {
        ifs.close();
        return ;
    }

    std::string line;
    bool first = true;
    while (std::getline(ifs, line))
    {
        if (!first)
            ofs << "\n";
        ofs << ft_replace(line, s1, s2);
        first = false;
    }
    ifs.close();
    ofs.close();
}