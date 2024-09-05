#include "Test.h"

namespace LE
{
    __declspec(dllimport) void Print();
}

int main()
{
    LE::Print();
    return 0;
}