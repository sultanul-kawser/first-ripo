#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string line ;
    cin>>line;
    
    transform(line.begin(),line.end(),line.begin(),::tolower);
    auto newPoint1 = remove(line.begin(),line.end(),'a');
    line.erase(newPoint1,line.end());
    auto newPoint2 = remove(line.begin(),line.end(),'e');
    line.erase(newPoint2,line.end());
    auto newPoint3 = remove(line.begin(),line.end(),'i');
    line.erase(newPoint3,line.end());
    auto newPoint4 = remove(line.begin(),line.end(),'o');
    line.erase(newPoint4,line.end());
    auto newPoint5 = remove(line.begin(),line.end(),'u');
    line.erase(newPoint5,line.end());
    auto newPoint6 = remove(line.begin(),line.end(),'y');
    line.erase(newPoint6,line.end());
    
    for(int i = 0; i<line.size(); i++){
        cout<<"."<<line[i];

    }
   
    
}   