#include <iostream>
using namespace std;

void uniqueElement(int arr[], int size)
{
    int uniqueValue = 0;
    bool foundUnique = false;
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            uniqueValue = arr[i];
            foundUnique = true;
            break;
        }
    }
    if (foundUnique) {
        cout << "Unique element is: " << uniqueValue << endl;
    } else {
        cout << "No unique element found." << endl;
    }
}

int main()
{
    int arr[] = {12, 10, 9, 8, 12, 10, 8};
    int size = 7;
    uniqueElement(arr, size);
    return 0;
}
