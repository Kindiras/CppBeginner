#include <iostream>

using namespace std;
void IncHourbyVal(int h);
void IncHourbyRef(int &h);

int  main()
{
  int hour = 18;
  cout<<"Example-pass by References:"<<endl;
  for(int i = 0; i < 10; i++)
  {
    cout << "Hour " << i + 1
         << " of my 8 hour day starts at "
         << hour << ":00" << endl;
    IncHourbyRef(hour);
  }

  //Below shows the function pass by references;
  hour = 18;
  cout<<"\n";
  cout<<"Example-pass by value:"<<endl;
  for(int i = 0; i < 10; i++)
  {
    cout << "Hour " << i + 1
         << " of my 8 hour day starts at "
         << hour << ":00" << endl;
    IncHourbyVal(hour);
  }
}

void IncHourbyRef(int &h)
{
  h++;
  if(h==25)
  h=1;
}

void IncHourbyVal(int h)
{
  h++;
  if(h==25)
  h=1;
}
