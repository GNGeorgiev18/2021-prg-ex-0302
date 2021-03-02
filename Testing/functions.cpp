#include "functions.h"

bool isNumberInRange(int a)
{
    //return a > 10 && a <= 20;
    // (10; 20]
    if (a > 10 && a <= 20)
    {
        return true;
    }

    return false;
}