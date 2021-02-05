#include <iostream>
#include "Sales_item.h"
#include <map>

int main()
{
    Sales_item item;
    std::map<std::string, int> map_order;
    // iterate order inptu
    while (std::cin >> item) {
        if (item.isbn()[0] != 0) {
            if (map_order.find(item.isbn()) != map_order.end())
                map_order[item.isbn()] += 1;
            else
                map_order[item.isbn()] = 1;
        }
    }

    for (auto elem : map_order) {
        std::cout << elem.first << " has " << elem.second << " records."<<std::endl;
    }
    return 0;

}
