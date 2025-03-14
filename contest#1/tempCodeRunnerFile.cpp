#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long double disprice,dis;
    long double price;
    cin>>dis>>disprice;
    dis = (100-dis)/100;
    price = disprice/dis;
    cout<<setprecision(4)<<price;
}