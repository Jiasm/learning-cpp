//
// Created by 贾顺名 on 2020/7/24.
//

#include <iostream>
#include <ctime>

int* getNum() {
    static int nums[3] = { 123, 233, 666 };

    return nums;
}

int main() {
    int* nums = getNum();

    std::cout << clock() << std::endl;
    std::cout << std::to_string(*(nums + 0)) << std::endl;
    std::cout << std::to_string(*(nums + 1)) << std::endl;
    std::cout << std::to_string(*(nums + 2)) << std::endl;
    for (int index = 100000000; index > 0; index--) {

    }
    std::cout << clock() << std::endl;
}