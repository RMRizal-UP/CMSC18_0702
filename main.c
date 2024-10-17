#include <stdio.h>

int main() {
    int i, j, m, A[m][m], operation;
    printf("Enter an odd number for m:");
    scanf("%d", &m);

    while  (m % 2 == 0) {
        printf("Even number detected. Please try again. \n");
        printf("Enter an odd number for m:");
        scanf("%d", &m);
    }
    while(operation != 5) {
        printf("Matrix Options: \n");
        printf("[1] Element Input to Matrix\n");
        printf("[2] Matrix Display\n");
        printf("[3] Display Reversed Matrix\n");
        printf("[4] Display Lower Triangle\n");
        printf("[5] Exit\n");
        scanf("%d", &operation);

        switch (operation) {
            case 1:
                printf("Enter Matrix Elements\n");
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < m; j++) {
                    printf("[%d][%d] =", i, j);
                    scanf("%d", &A[i][j]);
                }
            }
            continue;
            case 2:
                printf("Matrix: \n");
            for(i = 0; i < m; i++) {
                for(j = 0; j < m; j++) {
                    printf("%d ", A[i][j]);
                }
                printf("\n");
            }
            continue;
            case 3:
                printf("Reverse Matrix: \n");
            for(i = m - 1; i > -1; i--) {
                for(j = m - 1; j > -1; j--) {
                    printf("%d ", A[i][j]);
                }
                printf("\n");
            }
            continue;
            case 4:
                for (i = 0; i < m; i++)
                {
                    for (j = 0; j < m; j++)
                    {
                        if (i < j)
                        {
                            A[i][j] = 0;
                        }
                    }
                }
            printf("Lower Traingular Matrix: \n");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < m; j++)
                {
                    printf("%d ", A[i][j]);
                }
                printf("\n");
            }
                continue;
            case 5:
                printf("Thank you for using our program!");
            break;
            default:
                printf("Enter Valid Option\n");
            continue;
        }
    }
    return 0;
}
