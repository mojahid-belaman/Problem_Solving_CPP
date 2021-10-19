#include <iostream>
#include <vector>

int lonelyinteger(std::vector<int> a) {

    int val = 0;
    int num = 0;
    for (size_t i = 0; i < a.size(); i++)
    {
        val = 0;
        for (size_t j = 0; j < a.size(); j++)
        {
            if (a[i] == a[j])
                val++;
        }
        if (val == 1)
            num = a[i];
    }
    return num;
}