#include <iostream>
#include <vector>


void diagonalDifference(std::vector<std::vector<int> > arr) {
    for (size_t i = 0; i < arr.size(); i++)
    {
        for (size_t j = 0; j < arr[i].size(); j++)
        {
            
        }
        
    }
    
}

int main()
{
    std::vector<std::vector<int> > arr(3);
    for (size_t i = 0; i < arr.size(); i++)
    {
        arr[i] = std::vector<int>(3);
        for (size_t j = 0; j < arr[i].size(); j++)
        {
            arr[i][j] = i + 1;
        }
        
    }
    diagonalDifference(arr);
}