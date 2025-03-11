#include <iostream>
#include <string>

using namespace std;

// void cars()
// {
//     string name[2] = {"BMW", "Audi"}, model[2] = {"Me", "Mo"};

//     for (int i = 0; i < 2; i++)
//     {
//         cout << name[i] << " " << model[i] << endl;
//     }
// }

// int main()
// {
//     cars();
// }

void cars();

int main()
{
    cars();
}

void cars()
{
    string name[2] = {"BMW", "Audi"}, model[2] = {"Me", "Mo"};

    for (int i = 0; i < 2; i++)
    {
        cout << name[i] << " " << model[i] << endl;
    }
}