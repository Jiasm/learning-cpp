//
// Created by 贾顺名 on 2020/7/25.
// the char type and int type contrasted
//

#include <iostream>

int main() {
    using namespace std;

    char ch = 'M';
    int i = ch;

    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout.put(ch);
    cout.put('!');

    cout << endl << "Done" << endl;
    return 0;
}

