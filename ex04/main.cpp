/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 21:22:41 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/10 08:26:05 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/File.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Usage: ./replace-file <filename> <s1> <s2>";
        return 1;
    }
    if (!File::validate_file(argv[1]))
    {
        std::cout << "Error: invalid file.";
        return 1;
    }

    File file(argv[1]);

    file.replace_instances(argv[2], argv[3]);

    return 0;
}