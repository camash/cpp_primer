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

    int i, start, end, sum = 0;
    if (num_begin <= num_end) {
        i = num_begin;
        end = num_end;
    }
    else {
        i = num_end;
        end = num_begin;
    }

    while (i <= end) {
        sum += i;
        ++i;
    }
    std::cout << "Sum up from " << num_begin << " to " << num_end
              << " is: " << sum << std::endl;
}
