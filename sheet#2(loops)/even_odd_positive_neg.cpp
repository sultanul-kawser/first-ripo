#include<iostream>
using namespace std;
int main()
{
    long int a,n,store[1000],evenCount=0,oddCount=0,posiCount=0,negCount=0;
    cin>>a;
    for(long int i = 0; i<a;i++){
        cin>>n;
        store[i] = {n};
        if(store[i]%2==0){
            evenCount +=1;
        }else {
            oddCount += 1;
        } if(store[i]>0){
            posiCount += 1;
        }else if(store[i]<0){
            negCount += 1;
        }
    }

    cout<<"Even: "<<evenCount<<endl
        <<"Odd: "<<oddCount<<endl
        <<"Positive: "<<posiCount<<endl
        <<"Negative: "<<negCount<<endl;

}