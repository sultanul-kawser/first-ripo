#include<iostream>
using namespace std;
int main()
{
    int a ,year, month, day, remain;
    cin>> a ;
    year = a / 365;
    remain = a - (365*year);
    month = remain/ 30; 
    remain = remain - (month * 30);
    day = remain;
    cout<<year<<" years\n"<<month<<" months\n"<<day<<" days";
}