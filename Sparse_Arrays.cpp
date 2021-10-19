#include <iostream>
#include <vector>

std::vector<int> matchingStrings(std::vector<std::string> strings, std::vector<std::string> queries) 
{
    std::vector<int> arr;
    int count = 0;
    for (size_t i = 0; i < queries.size(); i++)
    {
        for (size_t j = 0; j < strings.size(); j++)
        {
            if (!queries[i].compare(strings[j]))
                count++;
        }
        arr.push_back(count);
        count = 0;
    }
    return arr;
}