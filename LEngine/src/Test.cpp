#include "Test.h"
#include <iostream>

namespace LE
{
    __declspec(dllexport) void Print()
    {
        std::cout << "Hello to Lerning Engine!" << std::endl;
    }
}