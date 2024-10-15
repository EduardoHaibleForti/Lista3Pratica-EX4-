#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;


    for (i = 0; i < n - 1; i++) {

        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }


        if (min_idx != i) {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

int main() {
    int n;


    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int arr[n];


    printf("Digite os elementos do array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    selectionSort(arr, n);


    printf("Array após a ordenação:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

