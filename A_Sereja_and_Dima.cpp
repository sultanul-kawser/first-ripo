#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    cin >> n; 
    int points[n];
    for(auto i = 0; i < n; i++){
        cin >> points[i];
    }
    long long serejaSum = 0;
    long long dimaSum = 0;
    int i = 0; 
    int j = n - 1;

   for(auto k = 0; k < n; k++){
    if(k % 2 == 0){
        if(points[i] > points[j]){
            serejaSum = serejaSum + points[i];
            i++;
        }else{
            serejaSum += points[j];
            j--;
        }
    }else{
             if(points[i] > points[j]){
            dimaSum = dimaSum + points[i];
            i++;
        }else{
            dimaSum += points[j];
            j--;
        }
    }
   }
   cout << serejaSum << " " << dimaSum;
    
    return 0;
}