#include <iostream>
using namespace std;

class f{

public:
   int max;
  int min;

};
void sort(int a[],int size)
{

int i,j,k;
for(i=0;i<size;i++)
{

	for (i = 0; i < size-1; i++) {
		for (j = 0; j < size - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);

			}
		}


	}
}
	for (k = 0; k < size; k++)
		cout << " " << a[k];
		return ;

}

void get(int a[],int n)
{
    f value;
    sort(a,n);

    value.min=a[0];
    value.max=a[n-1];

    cout<<endl;
    cout<<"minimum"<<value.min<<endl;
    cout<<"maximum"<<value.max<<endl;

};

int main()
{
    int a[] = { 1000, 11, 445, 1, 330, 3000 };
    int a_size = sizeof(a) / sizeof(a[0]);

    get(a,a_size);


    return 0;
}


