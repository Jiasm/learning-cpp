//
// Created by 贾顺名 on 2020/7/20.
// uses and displays a variable
//

#include <iostream>

int main() {
    using namespace std;

    int carrots;

    carrots = 25;
    cout << "I have";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;
    cout << "Crunch, crunch. Now I have" << carrots << " carrots." << endl;

    return 0;
}
