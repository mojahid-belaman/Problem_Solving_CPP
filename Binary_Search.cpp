#include <iostream>
#include <vector>

class Solution {

public:
    int search(std::vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                std::cout << target << " exists in nums and its index is " << i << std::endl;
                return i;
            }
        }
        std::cout << target << "exists in nums and its index is " << -1 << std::endl;
        return -1;
    }
};