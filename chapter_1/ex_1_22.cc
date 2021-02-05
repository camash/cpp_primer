#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, total;
    // 读取数据直到遇到文件尾，计算所有读入的对象的和
    while (std::cin >> item) {
         if (total.isbn()[0] == 0 ) {
             total = item;
         } else if (total.isbn() == item.isbn()) {
             total += item;
         } else {
             std::cerr << "Data must refer to same ISBN"
                       << std::endl;
             return -1; //表示失败
         }
    }
    std::cout << total << std::endl;
    return 0;
}
