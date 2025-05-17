#include <iostream>
using namespace std;

void findSmallestIntegers(int arr[], int size) {
    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    cout << "The smallest integer is: " << smallest << endl;
}

void mergeSort(int arr[], int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
        arr[k++] = L[i++];

    while (j < n2)
        arr[k++] = R[j++];
}

void selectSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void quickSort(int arr[], int left, int right) {
    if (left >= right)
        return;

    int pivot = partition(arr, left, right);
    quickSort(arr, left, pivot - 1);
    quickSort(arr, pivot + 1, right);
}

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 1) {
        cout << "The array is: " << endl;
        for (int i : arr)
            cout << i << " ";
        return 0;
    }

    cout << "\nThe array before sorting:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    if (n % 2 == 1) {
        cout << "\nThe smallest integer is: " << arr[0];
    } else {
        int smallest = arr[n / 2];
        mergeSort(arr, 0, n - 1);
        cout << "\nThe smallest integer is: " << smallest;
    }

    selectSort(arr, n);

    if (n % 2 == 1) {
        cout << "\nAfter selection sort:\n";
        for (int i = 0; i < n / 2; i++)
            cout << arr[i] << " ";
    } else {
        int smallest = arr[n / 2];
        mergeSort(arr, 0, n - 1);
        quickSort(arr, 0, n - 1);
        cout << "\nAfter quick sort:\n";
        for (int i = 0; i < n / 2; i++)
            cout << arr[i] << " ";
    }

    return 0;
}
