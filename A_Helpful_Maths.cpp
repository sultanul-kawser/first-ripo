#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string math;
    cin>>math;
    
    auto newPoint = remove(math.begin(),math.end(),'+');
    math.erase(newPoint,math.end());
    vector<char> ordered;
    for(int i = 0; i<math.size(); i++){
        ordered.push_back(math[i]);
    }
    sort(ordered.begin(),ordered.end());
    for(int i = 0; i<ordered.size(); i++){
        cout<<ordered[i];
        if(i!=ordered.size() - 1){
            cout<<'+';
        }
    }
    
}