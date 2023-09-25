
#include <iostream>
using namespace std;


void ins_sort(int a[], int n)
{

	if (n <= 1)
		return;

   ins_sort(a,n-1);
	int last = a[n-1];
	int j = n-2;


	while (j >= 0 && a[j] > last)
	{
		a[j+1] = a[j];
		j--;
	}
	a[j+1] = last;
}


void printArray(int a[], int n)
{
	for (int i=0; i < n; i++)
		cout << a[i] <<" ";
}

int main()
{
	int a[] = {12, 11, 13, 5, 6};
	int n = sizeof(a)/sizeof(a[0]);

	ins_sort(a, n);
	printArray(a, n);

	return 0;
}





