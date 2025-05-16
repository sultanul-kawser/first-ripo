#include <bits/stdc++.h>
using namespace std;


int main() {
	// #ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
	// #endif
	
	// F.IO
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
	cin.tie(nullptr);
	
	// Code
    int t;
    cin >> t;
    string n;
    cin >> n;
    vector<char> newLine; 
  
    for(int i = 0; i < t; i++){
    	if(n[i] == '1' && n[i+1] == '1'){
    		newLine.push_back('2');
            i++;
    	}else if(n[i] == '2' && n[i+1] == '2'){
    		newLine.push_back('1');
            i++;
    	}else{
            newLine.push_back(n[i]);
        }
    }
    for(auto val : newLine){
    	cout << val;
    }

    return 0;
}