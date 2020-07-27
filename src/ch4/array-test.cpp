//
// Created by 贾顺名 on 2020/7/27.
// test for array initial
//

#include <iostream>

using namespace std;

int main() {
    int arr1[10];

    int arr2[10] = {0};

    char test[] = "Hello, World"; // 长度会额外的包含一个 \0 如果长度写 12 就会编译出错

    cout << arr1[1] << endl;
    cout << arr2[1] << endl;
    cout << test << endl;
    cout << sizeof test << endl;
}