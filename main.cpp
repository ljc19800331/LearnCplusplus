#include <iostream>
using namespace std;

int main()
{
    int a = 54;
    int * testpointer = &a;

    cout << testpointer << endl;
    cout << * testpointer << endl;
    cout << a << endl;
    cout << &a << endl;

    // Learning the pointer



    return 0;
}