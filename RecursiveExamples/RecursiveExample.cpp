#include <iostream>
#include <algorithm>

using namespace std;
int factorial(int n);
int sNatural(int n);
int main()
{
  int n;
  cout<<"enter the number you want to calculate:"<<"\n";
  cin>>n;
cout <<"factor: " <<factorial(n)<<"\n";
cout <<"sumNatural "<<sNatural(n)<<"\n";
}

int factorial(int n)
{
  if(n<1)
  { return 1;}
  else {return(n*factorial(n-1));}
}
 int sNatural(int n)
 {
   if(n==1){return 1;}
   else{ return n+sNatural(n-1);}
 }
