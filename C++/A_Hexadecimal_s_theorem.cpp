#include<bits/stdc++.h>
using namespace std;

#define ay cin
#define ja cout
#define nam '\n'
#define ll long long
#define push push_back

// Main function 
int main()
{
    // F.IO
    ios_base::sync_with_stdio(false);
    ay.tie(nullptr);
    ja.tie(nullptr);

    // Code 
    int n; ay >> n;
    if(n == 0 ){ 
        ja << "0 0 0";
    }else if(n == 1){
        ja<<"0 0 1";
    }else if(n ==  2){
        ja << "0 1 1";
    }
    else if(n == 3) ja<< "1 1 1";
    else{

        vector<int> a;
        a.push(1);
        a.push(1);
        int x = 0, y = 1, z = x+y;
            while(z<=n){
                a.push(z);
                x = y;
                y = z; 
                z = x + y;
            }
        int q = a.size();
        ja<< a[q-5] <<" "<< a[q-4] << " " << a[q-2];
    }
    return 0;
}