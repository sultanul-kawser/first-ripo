#include <iostream>
using namespace std;
int main()
{
    int num[2][3][2] = {
        {{1, 2},
         {3, 4},
         {5, 6}},
        {{1, 2},
         {3, 4},
         {5, 6}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int z = 0; z < 2; z++)
                cout << num[i][j][z] << endl;
        }
    }

    return 0;
}