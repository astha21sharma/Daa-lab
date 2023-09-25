# include <iostream >
using namespace std;
int temp,rev=0;
int reverse(int n)
{

    if(n){
    temp=n%10;
    rev=rev*10+temp;
    reverse(n/10);
}
else
    return rev;

return rev;
}
 int main(){int num,reverse_number;


  cout<<"Enter any number:";
  cin>>num;


  reverse_number=reverse(num);
  cout<<"The reverse of entered number is :"<<reverse_number;
  return 0;

 }
