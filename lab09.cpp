/**
 * The date June l0, 1960 is special because when we write it in the following format,
 * the month times the day equals
 * the year.
 *
 * 6/10/60
 *
 * Write a program that asks the user to enter a month (in numeric form), a day, and a
 * two-digit year. The program should then determine whether the month times the day is
 * equal to the year.
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
    // TODO: Write a program that asks the user to enter a month (in numeric form), a day,
    // and a two-digit year.
    std::cout << "enter a date like this: dd/mm/yy pls & ty <3 ";
    std::string ogDate{};
    std::getline(std::cin, ogDate);
    std::cout << "is the date " << ogDate << "magic???? ";
    if(isMagic(ogDate) == true)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "no, sry" << std::endl;

}

bool isMagic(std::string date) {
    return false;
}