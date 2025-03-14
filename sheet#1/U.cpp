#include<iostream>
using namespace std;
int main()
{
    double n;
    cin>>n;
    if(n>(int)n)
    {
        cout<<"float "<<(int)n<<" "<<(n-(int)n);

    }
    else 
    {
        cout<<"int "<<(int)n;
    }


}