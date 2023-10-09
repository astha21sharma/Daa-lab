#include <iostream>
using namespace std;

int partition(int arr[], int n)
{
    int start=0;
	int p= arr[0];
	int end=n-1;


	while(start<end)
	{
		if (arr[start] <= p)
			start++;

        else if(arr[end]>=p)
            end--;

   if(start<end)
        {
            swap(arr[start],arr[end]);
        }

	}
	swap(p,arr[end]);
	return p;
}

void quickSort(int arr[], int start, int end)
{
	if (start >= end)
		return;
	int p = partition(arr, sizeof(arr) );

	quickSort(arr, start, p - 1);
	quickSort(arr, p + 1, end);
}

int main()
{

	int arr[] = { 9, 3, 4, 2, 1, 8 };
	int n = 6;

	quickSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}

