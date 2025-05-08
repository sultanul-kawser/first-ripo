#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int ages[10] = {18, 22, 23, 40, 35, 28, 33, 29, 37, 49};
    int sum = 0;

    for (int age : ages)
    {
        sum += age;
    }

    int length = sizeof(ages) / sizeof(ages[0]);

    double avg = sum / length;

    int ravg;
    ravg = round(avg);

    cout << "The average age is " << avg << " years old."<<endl;

    int lowestage = ages[0];

    for (int age : ages)
    {
        if (lowestage > age)
        {
            lowestage = age;
        }
    }

    cout << "The lowest age is " << lowestage << " years old."<<endl;

    int highage = ages[0];

    for (int age : ages)
    {
        if (highage < age)
        {
            highage = age;
        }
    }

    cout << "The highest age is " << highage << " years old."<<endl;

    return 0;
}