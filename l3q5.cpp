#include <iostream>
using namespace std;
int temp,sum=0;
int sumnu(int n)
{
    if(n){
    temp=n%10;
    sum+=temp;
    sumnu(n/10);

    return sum;
}
}
int main(){

int n;
cin>>n;
cout<<sumnu(n)<<endl;
return 0;
}
