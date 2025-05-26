#include<iostream>
using namespace std;

int *p;

void function()
{
    *p = 100;

    cout <<"Function" << *p << endl;


    return;
}


int main()
{
    int x =10;
    // int *p = new int; // new(for dynamic variable)  int(data type)  new int(returns variable address)  

    // *p = 120;

    cout << *p << endl;

    return 0;
}