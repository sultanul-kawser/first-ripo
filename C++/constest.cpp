#include<iostream>
using namespace std;
int main()
{
    int X,model;
    cin>>X;

    if(X>1972 && X <2000)
    {
       model = X - 1900;
       cout<<"K"<<model<<endl;
    }
    else if(X >1999 && X <2025)
    {
        model = X - 2000;
        if(model == 0)
        {
            cout<<"K00"<<endl;
        }
        else
        {
        cout<<"K"<<model<<endl;
        }
    }


}