//
// Created by 贾顺名 on 2020/8/3.
// test pointer
//

#include <iostream>

using namespace std;

void func1(int i) {
    cout << "func1: " << i << "|" << &i << endl;
    i += 1;
    cout << "func1: " << i << "|" << &i << endl;
}

void func2(int* p_i) {
    cout << "func2: " << *p_i << "|" << p_i << endl;
    *p_i += 1;
    cout << "func2: " << *p_i << "|" << p_i << endl;
    int temp = 20;
    p_i = &temp;
    cout << "func2: " << *p_i << "|" << p_i << endl;
}

void func3(int& i) {
    cout << "func3: " << i << "|" << &i << endl;
    i += 1;
    cout << "func3: " << i << "|" << &i << endl;
    int temp = 20;
    i = temp;
    cout << "func3: " << i << "|" << &i << endl;
}

int main() {
    int i = 10;
    cout << "main: " << i << "|" << &i << endl;
    func1(i);
    cout << "main: " << i << "|" << &i << endl;
    func2(&i);
    cout << "main: " << i << "|" << &i << endl;
    func3(i);
    cout << "main: " << i << "|" << &i << endl;
}