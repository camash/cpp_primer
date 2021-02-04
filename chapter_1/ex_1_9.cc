#include <iostream>
int main() {
    int i = 50;
    int sum = 0;
    while (i <= 100) {
        sum += i;
        ++i;
    }

    std::cout << "Sum from 50 to 100 is: " << sum << std::endl;
}
