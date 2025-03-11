#include <iostream>
#include <string>
using namespace std;

int search(int array[], int size, int mynum);

int main()
{
    int array[] = {3, 5, 4, 1, 8, 9, 2, 6, 7, 10};
    int size = sizeof(array) / sizeof(array[0]);
    int index;
    int mynum;

    cout << "Enter a element from 1 to 10 to search: " << endl;
    cin>>mynum;

    index = search(array, size, mynum);

    if (index != -1)
    {
        cout << "\nyour " << mynum << " is in " << index << " index.";
    }
    else
    {
        cout << "your " << mynum << " is not in the index.";
    }
}

int search(int element[], int size, int mynum)
{
    for (int i = 0; i < size; i++)
    {
        if (element[i]==mynum)
        {
            return i;
        }

       
    }
    return -1;
}