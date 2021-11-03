#include <iostream>

int firstBadVersion(int n) {
        int mid = n;
        while(mid > 0)
        {
            mid = n / 2;
            if(isBadVersion(mid))
                n = mid - 1;
            else
                break;
        }
        while(!isBadVersion(mid))
            mid++;
        return mid;

    }