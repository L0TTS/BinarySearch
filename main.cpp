#include <iostream>

int binarySearch(const int arr[], int findN);

int n;
using namespace std;

int main() {
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int key;
    cin >> key;
    cout << binarySearch(arr,key);
}

int binarySearch(const int arr[n], int key) {
    int left = -1;
    int right = n;
    while (left < right - 1) {
        int mid = (left + right) / 2;
        if (arr[mid] < key) {
            left = mid;
        } else {
            right = mid;
        }
    }
    return right;
}
