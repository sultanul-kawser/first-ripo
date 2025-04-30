#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string sent;
    cin >> sent;
    int count = 0;
    vector<char> store;
    bool noPaligram = true;
    if (n < 26)
    {
        cout << "NO\n";
        noPaligram = false;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            bool notSame = true;

            for (char val : store)
            {
                if ((int)sent[i]<=90 && (int)sent[i]>=65){
                    if(val == sent[i] || val == (char)(sent[i]+32)){
                        notSame = false;
                        continue;
                    }else{
                        if(val == sent[i] || val == (char)(sent[i]-32)){
                            notSame = false;
                            continue;
                        }
                    }
                }
                
            }
            if (notSame)
            {

                if (((int)sent[i] <= 90 && (int)sent[i] >= 65) || ((int)sent[i] >= 97 && (int)sent[i] <= 122))
                {

                    count++;
                    store.push_back(sent[i]);
                    
                }
            }

            if (count == 26)
            {
                cout << "YES\n";
                noPaligram = false;
                break;
            }
        }
    }
    if (noPaligram)
    {
        cout << "NO";
    }
    cout<<count;
    for (char val : store)
    {
        cout << val;
    }
}
