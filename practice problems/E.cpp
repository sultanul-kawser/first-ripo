#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double R, pi = 3.141592653,area;
    cin>>R;
    area = ((R*R)*pi);
    cout<<fixed<<setprecision(9)<<area<<endl;
}