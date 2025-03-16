#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2, t1, t2, first, second;
    bool result = true,output = true;
    getline(cin,s1);
    getline(cin,s2);
    first = s1;
    second =s2;
    // cout<<first<<" "<<second;
    string store1[100] = {"AB", "BC", "CD", "DE", "EA", "AE", "ED", "DC", "CB", "BA"};
    string store2[100] = {"AC", "BD", "CE", "DA", "EB", "CA", "DB", "EC", "AD", "BE"};
    for(int i = 0; i<10; i++){
        if(store1[i] == first){
            for(int j = 0; j<10; j++ ){
                if(store1[j] == second){
                    cout<<"Yes\n";
                    result = false;
                    output = false;
                }
            }
        }

    }
    if(result){
        for(int k = 0; k<10; k++){
            if(store2[k] == first){
                for(int l = 0; l<10; l++ ){
                    if(store2[l] == second){
                        cout<<"Yes\n";
                        output = false;
                    }
                }
            }
    
        }

    }
    if(output)
    {
        cout<<"No\n";
    }

    return 0;
}