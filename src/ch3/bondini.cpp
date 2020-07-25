//
// Created by 贾顺名 on 2020/7/25.
//using escape sequences
//

#include <iostream>

int main() {
    using namespace std;

    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:______\b\b\b\b\b\b";
    long code;

    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";

    return 0;
}
