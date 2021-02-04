#include <iostream>
int main() {
    int num_begin, num_end;
    // begin number
    std::cout << "Please input an integer for sum begin:";
    std::cin >> num_begin;
    std::cout << std::endl;

    // end number
    std::cout << "Please input an integer for sum finish:";
    std::cin >> num_end;
    std::cout << std::endl;

    int i = num_begin;
    int sum = 0;

    while (i <= num_end) {
        sum += i;
        ++i;
    }
    std::cout << "Sum up from " << num_begin << " to " << num_end
              << " is: " << sum << std::endl;
}
