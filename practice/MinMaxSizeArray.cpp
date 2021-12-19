#include <iostream>
#include <algorithm>

using namespace std;
bool comp(int a, int b)
{
  return (a<b);
}

int main()
{
  int A[5] = {2,5,4,6,8};
  cout<<"array elements:" <<A[0]<<" "<<A[1]<<" "<<A[2]<<" "<<A[3]<<" "<<A[4]<<endl;
  cout<<"min:"<<*min_element(A,A+5)<<"\n";
  cout<<"Max:"<<*max_element(A,A+5)<<"\n";
  cout<<"Sizeofarray:"<<sizeof(A)/sizeof(A[1])<<endl;
  return 0;
}
