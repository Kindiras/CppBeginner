#include <iostream>

using namespace std;

class Myinfo
 {
 public:
   Myinfo(string s, int a)
   {
     nam=s;
     age = a;
    }
   string getname()
   {return nam;}
   int getage()
   {return age;}
 private:
    string nam;
    int age;

};
 int main()
 {
   Myinfo mi("Indiras",36);
   Myinfo *miptr = &mi;
   //m -> age = 36;

   cout<< mi.getname()<< endl;
   cout<<(*miptr).getage()<<endl;
   //cout<<age<<endl;
   return 0;
 }
