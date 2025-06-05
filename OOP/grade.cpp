// (7) -> Grade calculation
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter your number :\n";
    
    long long number;
    cin >> number;
    if(number >= 90){
        cout << "A";
    }else if(number >= 80 && number <= 89){
        cout << "B";
    }else if(number >= 70 && number <= 79){
        cout << "C";
    }else if(number >= 60 && number <= 69){
        cout << "D";
    }else if(number < 60){
        cout << "F";
    }
    
    return 0;
}
// End--