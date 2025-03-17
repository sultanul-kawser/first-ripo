#include <iostream>
using namespace std;
int main()
{
    long int a, n, store[1000], temp;
    cin >> n;
    // taking intput for n times
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        store[i] = {a};// storing the input into an array
    }
    // sorting the array from small to big
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            if (store[k] > store[j])
            {
                temp = store[j];
                store[j] = store[k];
                store[k] = temp;
            }
        }
    }
    //printing out the last element of the array 
    cout << store[n - 1] << endl;
    
}