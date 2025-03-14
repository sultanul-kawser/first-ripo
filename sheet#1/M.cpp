#include<iostream>
using namespace std;
int main()
{
    char x;
    int i = 48;
    cin>>x;
    int ascii = (int)x;// ascii = 48
    for(i; i<=57; i++)//48
    {
        if(ascii == i)// 48 == 48
        {
            cout<<"IS DIGIT";
        }
    }
    for (i = 65; i<=90; i++)
    {
        if(ascii == i)
        {
            cout<<"ALPHA"<<endl<<"IS CAPITAL";
           
        }
    }
    for(i=97; i<=122; i++)
    {
        if(ascii == i)
        {
            cout<<"ALPHA"<<endl<<"IS SMALL";
        }
    }
    
}