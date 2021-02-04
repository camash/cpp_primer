#include <iostream>
int main()
{
    int sum = 0, value = 0;
    std::cout << "Please input the numbers to sum up (seperate by blank or enter, press control+D to stop input): " << std::endl;
    while (std::cin >> value)
        sum += value;
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
