#include <iostream>
#include <cmath>

long flippingBits(long n) {
    int bitNum[32] = {0};
    long rsl = 0;
    int i = 0;
    while (n > 0)
    {
        bitNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (size_t i = 0; i < 32; i++)
    {
        if (bitNum[i] == 1)
            bitNum[i] = 0;
        else
        {
            bitNum[i] = 1;
            rsl += pow(2, i);
        }
    }
    return rsl;
}
