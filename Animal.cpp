#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string line1, line2, line3;
    cin >> line1 >> line2 >> line3;
    if(line1 == "vertebrado"){
        if(line2 == "ave"){
            if(line3 == "carnivoro"){
                cout << "aguia\n";
            }else if(line3 == "onivoro"){
                cout << "pomba\n";
            }
        }else if(line2 == "mamifero"){
            if(line3 == "onivoro"){
                cout << "homem\n";
            }else if(line3 == "herbivoro"){
                cout << "vaca\n";
            }
        }
    }else if(line1 == "invertebrado"){
        if(line2 == "inseto"){
            if(line3 == "hematofago"){
                cout << "pulga\n";
            }else if(line3 == "herbivoro"){
                cout << "lagarta\n";
            }
        }else if(line2 == "anelideo"){
            if(line3 == "hematofago"){
                cout << "sanguessuga\n";
            }else if(line3 == "onivoro"){
                cout << "minhoca\n";
            }
        }
    }
    
    return 0;
}