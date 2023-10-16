#include <iostream>
using namespace std;
void heapify(int a[],int n,int i)
{
    int smallest=i;
   int l=2*i;
   int r=2*i+1;

   if(l<n && a[l]<a[smallest])
    smallest=l;

    if(r<n && a[r]<a[smallest])
        smallest=r;
    if (smallest != i) {
		swap(a[i], a[smallest]);


		heapify(a, n,smallest);
	}
}

void heapsort(int arr[],int n)

    {
	for (int i = n/2; i>= 0; i--)
		heapify(arr, n, i);


	for (int i=n- 1; i > 0; i--) {
	//	swap(arr[0], arr[i]);

		heapify(arr, i, 0);
	}

    }

int main()
{
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++)
{
    cin>>a[i];
}

heapsort(a,n);
  cout<<"sorted array is ";
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";

}
cout<<endl;
return 0;

}
