//
// Created by 贾顺名 on 2020/7/20.
// input and output
//

#include <iostream>

int main() {
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more.";
    carrots = carrots + 2;

    cout << "Now you have " << carrots << " carrots." << endl;

    return 0;
}