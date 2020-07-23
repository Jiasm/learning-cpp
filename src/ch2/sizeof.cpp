//
// Created by 贾顺名 on 2020/7/23.
//

#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    bool a = true;

    printf("sizeof(int)=%d\n",sizeof(static_cast<int>(a)));
    printf("sizeof(long)=%d\n",sizeof(static_cast<long>(a)));
    printf("sizeof(short)=%d\n",sizeof(static_cast<short>(a)));

    cout << std::to_string(static_cast<int>(a)) << endl;
    cout << std::to_string(static_cast<long>(a)) << endl;
    cout << std::to_string(static_cast<short>(a)) << endl;

    return 0;
}