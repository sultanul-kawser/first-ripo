#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool isJaduRow = true;
    bool isJaduDiagonal = true;
    int n, m;
    scanf("%d%d", &n, &m);
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
            if (i != j && j != n - i - 1)
            {
                if (mat[i][j] != 0)
                {
                    isJaduRow = false;
                }
            }
        }
        if (mat[i][i] != 1 || mat[i][n - i - 1] != 1)
        {
            isJaduDiagonal = false;
        }
    }
    if(n!=m){
        printf("NO");
    } else if (isJaduRow && isJaduDiagonal)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

   
}