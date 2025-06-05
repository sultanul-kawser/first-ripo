// (10) -> Vowel or Consonant
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter your character :\n";
    char alpha;
    cin >> alpha;
    if(alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u'){
        cout << alpha << " is a vowel.";
    }else{
        cout << alpha << " is a consonant.";
    }
    
    return 0;
}
// End--