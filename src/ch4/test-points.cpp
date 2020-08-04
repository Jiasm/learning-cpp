//
// Created by 贾顺名 on 2020/8/4.
//

#include <iostream>

using namespace std;

int main() {
    double wages[3] = { 1000.0, 2000.0, 3000.0 };
    short stacks[3] = { 3, 2, 1 };

    double* pw = wages;
    short* ps = &stacks[0];

    cout << sizeof(pw) << endl;
    cout << *pw << "|" << pw << endl;
    pw += 1;
    cout << sizeof(wages) << endl;
    cout << *pw << "|" << pw << endl;

    cout << sizeof(ps) << endl;
    cout << *ps << "|" << ps << endl;
    ps += 1;
    cout << sizeof(pw) << endl;
    cout << *ps << "|" << ps << endl;

    return 0;
}