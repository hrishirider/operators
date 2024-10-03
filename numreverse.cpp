//Labdhi mandovara
//23070123078
#include <iostream>
using namespace std;
int main() {
  int a,b;
  cout<<"Enter  a number to reverse: "<<endl;
  cin>>a;
  while(a>0)
  {
      b=a%10;
      cout<<b<<endl;
      a=a/10;
  }
    return 0;
}
//OUTPUT
/* Enter  a number to reverse: 
23454
4
5
4
3
2
*/
