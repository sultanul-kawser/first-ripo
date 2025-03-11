#include <stdio.h>
#include <stdlib.h>

// Function to sort an array in ascending order
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--)
    {
        int N;
        scanf("%d", &N); // Length of the permutation

        int numbers[N], odd[N], even[N];
        int oddCount = 0, evenCount = 0;

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &numbers[i]);
            if (numbers[i] % 2 == 0)
            {
                even[evenCount++] = numbers[i];
            }
            else
            {
                odd[oddCount++] = numbers[i];
            }
        }

        // Sort odd and even arrays separately
        sort(odd, oddCount);
        sort(even, evenCount);

        // Sort the full numbers array
        sort(numbers, N);

        // Output in the specified format for each test case
        printf("0\n");

        // Print sorted odd numbers
        for (int i = 0; i < oddCount; i++)
        {
            printf("%d ", odd[i]);
        }
        if (oddCount > 0)
            printf("\n");

        // Print sorted even numbers
        for (int i = 0; i < evenCount; i++)
        {
            printf("%d ", even[i]);
        }
        if (evenCount > 0)
            printf("\n");

        // Print all numbers sorted
        for (int i = 0; i < N; i++)
        {
            printf("%d ", numbers[i]);
        }
        printf("\n");
    }

    return 0;
}
