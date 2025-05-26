#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int *p;

// void fun()
// {
//     int x = 100;

//     p = &x;

//     cout <<"Function " << *p << endl;


//     return;
// }

void fun()
{
    int *x = new int;
    *x = 120;

    p = x;

    cout <<"Function " << *p << endl;


    return;
}


int main()
{

    fun();
    cout <<"Main " << *p << endl;
    // int *p = new int; // new(for dynamic variable)  int(data type)  new int(returns variable address)  

    // *p = 120;

    // cout << *p << endl;

    return 0;
}