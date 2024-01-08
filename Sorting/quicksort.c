#include <stdio.h>

void quicksort(int a[], int left, int right);
void destination(int a[], int left, int right, int *loc);

int main() {
    int a[20], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n-1);
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

void quicksort(int a[], int left, int right) {
    int loc;
    if(left < right) {
        destination(a, left, right, &loc);
        quicksort(a, left, loc-1);
        quicksort(a, loc+1, right);
    }
}

void destination(int a[], int left, int right, int *loc) {
    int t;
    *loc = left;
    while(left < right) {
        while(a[*loc] < a[right] && right != *loc) {
            right--;
        }
        if(a[*loc] > a[right]) {
            t = a[*loc];
            a[*loc] = a[right];
            a[right] = t;
            *loc = right;
            left++;
        }
        if(left < right) {
            while(a[*loc] > a[left] && left != *loc) {
                left++;
            }
            if(a[*loc] < a[left]) {
                t = a[*loc];
                a[*loc] = a[left];
                a[left] = t;
                *loc = left;
                right--;
            }
        }
    }
}