#include<iostream>

using namespace std;

int main()
{
  int s[2];
  cout <<"please enter two numbers"<<"\n";
  for(int i=0;i<2;i++)
      cin>>s[i];

  cout <<"before swapping numbers:"<<s[0]<<" " <<s[1] <<"\n";
s[0] = s[0]+s[1];
s[1] = s[0]-s[1];
s[0] = s[0] - s[1];
  cout <<"After swapping numbers:" <<s[0] <<" " <<s[1]<<"\n";
  return 0;
}
