#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int  n,k;
	cin>>n>>k;
	
	
	if(n%2 == 0){

		if(k<=ceil(n/2.0)){
			cout<<(k*2)-1;
		}else if(k>n/2){
			cout<<(k-(n/2))*2;
		}
	}else{
		if(k<=ceil(n/2.0)){
			cout<<(k*2)-1;
		}else if(k>n/2){
			cout<<((k-(n/2))*2)-2;
		}

	}

	
}
// #include<bits/stdc++.h>
// using namespace std;
// #define  ll long long
// #define ja cout
// #define ay cin

// int main()
// {
//     // F.IO
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     ll n, k;
//     ay >> n >> k;
//     if (k <= (n + 1) / 2) ja << k * 2 - 1 << endl;
//     else ja << (k - (n + 1) / 2) * 2 << endl;

//     return 0;
// }
