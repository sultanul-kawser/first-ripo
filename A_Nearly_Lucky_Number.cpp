#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin>>n; 
    string num = to_string(n);
    long long sevCount=0, fourCount=0;
    for(int i = 0; i<num.size(); i++){
        if('7' == num[i]){
            sevCount ++;
        }else if('4' == num[i]){
            fourCount ++;
        }
    }
    long long counter = sevCount + fourCount;
    
    bool isLucky = true;
    long long countLucky = 0;
    while(counter > 0){
        if(counter%10 == 7 || counter%10 == 4){
           countLucky ++;
        }
        counter /= 10;
    }
    string luckyNum = to_string(counter);
    long long len = luckyNum.size();
    if(len == countLucky){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}