// 4.Write a program in C to store n elements in an array and print the elements using a pointer.    

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    int arr[num];
    printf("Enter %d elements:\n", num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    printf("Elements in the array:\n");
    for (int i = 0; i < num; i++) {
        printf("%d ", *(ptr + i));
    }

   
}
