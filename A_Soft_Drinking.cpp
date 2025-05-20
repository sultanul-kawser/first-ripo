#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num_frnd, num_drinks, ml_drinks, num_lime, num_slice, gm_salt, drinks_perPerson, salt_perPerson;
    cin >> num_frnd >> num_drinks >> ml_drinks >> num_lime >> num_slice >> gm_salt >> drinks_perPerson >> salt_perPerson;
    long long  toast_drinks = ((num_drinks * ml_drinks) / drinks_perPerson) / num_frnd;
    long long toast_lime = (num_lime * num_slice) / num_frnd;
    long long toast_salt = (gm_salt / salt_perPerson) / num_frnd;

    cout << min(min(toast_drinks, toast_lime), toast_salt);

    
    return 0;
}