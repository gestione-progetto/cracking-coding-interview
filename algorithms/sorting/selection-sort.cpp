#include <iostream>

using namespace std;

void selectionSort (int a[], int n) {

    for (int i = 0; i < n - 1; i++) {

        int iMin = i;

        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[iMin]) {
                iMin = j;
            }
        }

        int temp = a[i];

        a[i] = a[iMin];
        a[iMin] = temp;
    }
}

int main () {

    int a[] = {3, 4, 8, 6, 2, 1};

    selectionSort(a, 6);
    for (int i = 0; i < 6; i++) {
        cout << a[i] << " ";
    }
}