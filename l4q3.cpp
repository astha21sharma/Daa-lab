#include <bits/stdc++.h>

using namespace std;

void mergeofarrays(int a[], int low, int mid, int high) {
  int i = low, j = mid + 1, index = low, temp[100], k;

  while ((i <= mid) && (j <= high)) {
    if (a[i] < a[j]) {
      temp[index] = a[i];
      i++;
    } else {
      temp[index] = a[j];
      j++;
    }
    index++;
  }


  if (i > mid) {
    while (j <= high) {
      temp[index] = a[j];
      j++;
      index++;
    }
  } else
  {
    while (i <= mid) {
      temp[index] = a[i];
      i++;
      index++;
    }
  }
  for (k = low; k < index; k++)
  {
    a[k] = temp[k];
  }

}

void mergesort(int a[], int low, int high) {
  if (low < high) {
    int middle = (low + high) / 2;

    mergesort(a, low, middle);
    mergesort(a, middle + 1, high);

    mergeofarrays(a, low, middle, high);
  }
}

int main() {
  int n = 7;
  int a[100] = {54,34,21,10,9,2,3};
  mergesort(a, 0, 6);

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}
