 #include <iostream>
using namespace std;

void Minheap(int arr[], int N, int i) {
int smallest = i;
int left = 2 * i + 1;
int right = 2 * i + 2;

if (left < N && arr[left] < arr[smallest])
smallest = left;

if (right < N && arr[right] < arr[smallest])
smallest = right;

if (smallest != i) {
swap(arr[i], arr[smallest]);
Minheap(arr, N, smallest);
}
}

void buildArray(int arr[], int N) {
int startIdx = (N / 2) - 1;
for (int i = startIdx; i >= 0; i--) {
Minheap(arr, N, i);
}
}

void printArray(int arr[], int N) {
cout << "Array representation of MinHeap is: " << endl;
for (int i = 0; i < N; ++i) {
cout << arr[i] << " ";
}
cout << endl;
}

int main() {
int arr[] = {7, 22, 46, 88, 32, 59, 39, 40};
int N = sizeof(arr) / sizeof(arr[0]);

buildArray(arr, N);
printArray(arr, N);

return 0;
}