#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A, B, C;
    cin >> A >> B >> C;
    vector<int> coordinates;
    for(auto i = 0; i < 3; i++){
        if(i == 0){
            int n = A;
            int sum = abs((n - B)) + abs((n - C));
            coordinates.push_back(sum);
        }else if( i == 1){
            int n = B;
            int sum = abs((n - A)) + abs((n - C));
            coordinates.push_back(sum);
        }else if(i == 2){
            int n = C;
            int sum = abs((n - A)) + abs((n - B));
            coordinates.push_back(sum);
        }
    }
    auto it = min_element(coordinates.begin(), coordinates.end());
    cout << coordinates[distance(coordinates.begin(), it)];
    return 0;
}