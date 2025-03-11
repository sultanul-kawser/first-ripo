#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string food = "Pizza";

    // cout << &food << endl;

    // string *ptr = &food;

    // *ptr = "Burger";

    // cout << *ptr << endl;

    // cout << food << endl;

    // cout << ptr;

    int arr[4]={1,3,4,3,};
    cout<<*(arr+3);
    return 0;
}