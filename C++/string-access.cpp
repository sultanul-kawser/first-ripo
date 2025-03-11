#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name = "Niaz";

    cout << name[1];
    cout << name[name.length() - 1];
    name[0] = 'R';
    cout << name << endl;

    string anime = "bleach";

    cout << anime.at(3) << endl;                  // output a
    cout << anime.at(anime.length() - 1) << endl; // output h
    anime.at(2) = 'w';
    cout << anime; // output blwach
    return 0;
}