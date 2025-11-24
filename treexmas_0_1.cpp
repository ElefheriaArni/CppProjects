#include "iostream"
using namespace std;
int main()
{
	int i,zero,one;

	for(i=1;i<=3;i++)
{
for(zero=1;zero<=3-i;zero++)
 {
 cout<<"0";
 }
for(one=1 ;one<=(2*i-1);one++)
  {
  	cout<<"1";
  }
  for(zero=1;zero<=3-i;zero++)
 {
 cout<<"0";
 }

cout<<"\n";
}

return 0;
}
