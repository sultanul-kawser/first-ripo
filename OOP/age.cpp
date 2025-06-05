// (8) -> Age group classifier
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter your age:\n";
    
    int age;
    cin >> age;
    if(age < 13 && age >= 0){
        cout << "Your are a child.";
    }else if(age >= 13 && age <= 19){
        cout << "Your are a teenager.";
    }else if(age >= 20 && age <= 59){
        cout << "Your are an adult.";
    }else{
        cout << "Your are a senior";
    }
    
    return 0;
}
// End--