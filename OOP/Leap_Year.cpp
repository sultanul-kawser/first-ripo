// (4) -> check leap year
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter your year :\n";
    
    int year;
    cin >> year;
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        cout << year << " is a leap year.";
    }else{
        cout << year << " is not a leap year.";
    }
    
    return 0;
}
// End--