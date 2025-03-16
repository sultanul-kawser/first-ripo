#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int first,second,small , big,temp;
    first = a/10;
    second = a%10;
    small = min(first,second);
    big = max(first, second);
    if(small == 0)
    {
        temp = small;
        small = big;
        big = temp;

    }
    if(big%small == 0){
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
}