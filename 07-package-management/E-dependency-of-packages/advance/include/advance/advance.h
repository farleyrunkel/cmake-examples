#ifndef __SUBLIB_2_H__
#define __SUBLIB_2_H__

#include <iostream>

#include "basic/basic.h"

class Advance
{
public:
    void print()
    {
        Basic b;
        b.print();

        std::cout << "Hello header only sub-library 2!" << std::endl;
    }
};

#endif
