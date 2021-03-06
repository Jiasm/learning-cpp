//
// Created by 贾顺名 on 2020/7/23.
//

#include <iostream>
#include <climits>

#define END " bytes."

int main() {
    using namespace std;

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int is " << sizeof (int) << END << endl;
    cout << "short is " << sizeof n_short << END << endl;
    cout << "long is " << sizeof n_long << END << endl;
    cout << "long long is " << sizeof n_llong << END << endl;
    cout << endl;

    cout << "Maximum values: " << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;

    cout << (sizeof (uint32_t)) << endl;
    cout << ((sizeof (uint32_t)) * 8) << endl;
    cout << (((sizeof (uint32_t)) * 8) + 2) << endl;
    cout << (((sizeof (uint32_t)) * 8) + 2) / 3 << endl;
    cout << (((sizeof (uint32_t)) * 8) + 2) / 3 + 2 << endl;

    return 0;
}