#include<iostream>
using namespace std;

int main()
{
    int num[]={2,7,11,15};
    int target;
    cin>>target;

    for(int i =0; i<4; i++)
    {
        if((num[i]+num[i+1])==target)
        {
            int a =i;
            int b=i+1;
            cout<<"["<<a<<","<<b<<"]"<<endl;
        }
    }
}