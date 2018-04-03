/**
 * CSC131 - Computational Thinking
 * Missouri State University, Spring 2018
 *
 * @file: lab09.cpp
 * @author: Alyssa Slayton <ajs41@missouristate.edu>
 */

#include <cstdlib>
#include <iostream>

/**
 * takes an inputted date and calculates whether or not the date is magic (month * day = year)
 * @param someDate date as inputted by user in format mm/dd/yy
 * @return boolean value whether date meets requirements
 */
bool isMagic(std::string someDate);

/**
 * entry point of this application
 * @return EXIT_SUCCESS is returned upon successful execution of this application
 */
int main()
{
    std::cout << "enter a date like this: dd/mm/yy pls & ty ";
    std::string ogDate{};
    getline(std::cin, ogDate);
    std::cout << "is the date "
              << ogDate
              << " magic???? ";
    if (isMagic(ogDate))
        std::cout << "yeah dude!"
                  << std::endl;
    else
        std::cout << "no, sry"
                  << std::endl;

    return EXIT_SUCCESS;
}

bool isMagic(std::string someDate)
{
    bool magic = false;
    int month{};
    int day{};
    int year{};

    month = std::stoi(someDate.substr(0, 2));
    day = std::stoi(someDate.substr(3, 4));
    year = std::stoi(someDate.substr(6, 7));

    if (month*day==year) {
        magic = true;
    }

    return magic;
}