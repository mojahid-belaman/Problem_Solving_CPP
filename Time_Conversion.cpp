#include <iostream>
#include <vector>

std::string timeConversion(std::string s) {
    std::string s1;
    int hour;
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'P' && s[i + 1] == 'M')
        {
            std::string str = s.substr(0, 2);
            if (str == "12")
                hour = std::atoi(str.c_str()) ;
            else
                hour = 12 + std::atoi(str.c_str()) ;
        }
        else if (s[i] == 'A' && s[i + 1] == 'M')
        {
            std::string str = s.substr(0, 2);
            if (str == "12")
                hour = 12 - std::atoi(str.c_str()) ;
            else
                hour = std::atoi(str.c_str()) ;
        }
    }
    if (hour == 0 || hour < 10)
        s1 = "0" + std::to_string(hour) + s.substr(2, s.length() - 4);
    else

        s1 = std::to_string(hour) + s.substr(2, s.length() - 4);
    return s1;
}
