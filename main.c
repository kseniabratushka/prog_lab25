#include <stdio.h>
#include <limits.h>

void findMinAndAdd(int arr[], int n) 
{
    int min = INT_MAX;
    for (int i = 0; i < n; i += 1) 
    {
        if (arr[i] < min) 
        {
            min = arr[i];
        }
    }
    
    for (int i = 0; i < n; i += 1) 
    {
        arr[i] += min;
    }
}

void printArray(int arr[], int n, const char *name) 
{
    printf("Масив %s: ", name);
    for (int i = 0; i < n; i += 1) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    system("chcp 65001");
    int N;
    printf("Введіть розмір масивів N: ");
    scanf("%d", &N);
    
    int A[N], B[N];

    printf("Введіть елементи масиву A:\n");
    for (int i = 0; i < N; i += 1) 
    {
        scanf("%d", &A[i]);
    }

    printf("Введіть елементи масиву B:\n");
    for (int i = 0; i < N; i += 1) 
    {
        scanf("%d", &B[i]);
    }

    printf("\nВхідні масиви:\n");
    printArray(A, N, "A");
    printArray(B, N, "B");

    findMinAndAdd(A, N);
    findMinAndAdd(B, N);

    printf("\nПеретворені масиви:\n");
    printArray(A, N, "A");
    printArray(B, N, "B");
    
    return 0;
}