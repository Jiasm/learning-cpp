//
// Created by 贾顺名 on 2020/8/5.
//

#include <iostream>

using namespace std;

int main() {
    char chars[20] = "Hello World";

    char* p_c = chars;

    cout << &p_c << endl;
    cout << p_c << endl;

    return 0;
}

