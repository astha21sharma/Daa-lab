#include <iostream>
using namespace std;

int mcm(int a[],int i,int j)
{
  if (i==j)
        return 0;

  int k;
  int let=INT_MAX;
  int count;

  for(k=i;k<j;k++)
  {
     count = mcm( a,i,k)+mcm(a,k+1,j)+a[i-1]*a[k]*a[j] ;

       let=min(count,let);
  }

return let;
}



 int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"the result of matrix multiplication"<<" " <<mcm(arr,1,n-1);

    return 0;
}
