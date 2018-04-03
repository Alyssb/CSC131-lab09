/**
 * CSC131 - Computational Thinking
 * Missouri State University, Spring 2018
 *
 * @file: lab09.cpp
 * @author: Alyssa Slayton <ajs41@missouristate.edu>
 */

#include <cstdlib>
#include <iostream>
#include <string>

bool isMagic(std::string someDate);

int main()
{
    std::cout << "enter a date like this: dd/mm/yy pls & ty <3 ";
    std::string ogDate{};
    std::getline(std::cin, ogDate);
    std::cout << "is the date " << ogDate << " magic???? ";
    if(isMagic(ogDate) == true)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "no, sry" << std::endl;

}

bool isMagic(std::string someDate) {
    std::cout << someDate << std::endl;
    int month{};
    int day{};
    int year{};

    month = std::stoi(someDate.substr(0,2));
    day = std::stoi(someDate.substr(3,4));
    year = std::stoi(someDate.substr(6.7));

    std::cout << month << " " << day << " " << year << std::endl;

    return false;
}