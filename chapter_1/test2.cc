#include <iostream>
int main() {
    int x = 3, y, z;
    y = x++;
    z = ++x;
    std::cout << x << ", " << y << ", " << z;
    return 0;
}

