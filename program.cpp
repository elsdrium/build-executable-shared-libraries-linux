#include <iostream>

#include "libexe.h"

int main(int argc, char *argv[])
{
    // required for mixing use of printf and std::cout
    std::ios::sync_with_stdio(false);

    std::cout << "program: main" << std::endl;
    foo();

    std::cout << "Command line: ";
    for (int i=0; i<argc; ++i) {
        std::cout << argv[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}

