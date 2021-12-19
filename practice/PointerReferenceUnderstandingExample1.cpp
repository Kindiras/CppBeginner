#include <iostream>

using namespace std;

int main()
{
  int *p;
  int A1[]={2,3,4};
  p=A1;
  cout<<"You can print Elements:"<<(p[2])<<endl;
  for(int i=0;i<3;i++)
  { cout<<*p<<endl;p++;}


  return 0;

}
