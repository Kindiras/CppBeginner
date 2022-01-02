/This gives the basic idea of operator overlodding. 
#include <iostream>

class Operationmath{
public:
int a;
Operationmath(){
    a=11;
}
 Operationmath operator ++ ()
{
   Operationmath m;
   m.a = a++;
    return m;
}
void printout(){std::cout<<a<<std::endl;}
 int operator -- ()
{
    a--;
    return 0;
}
};

int main()
{
    Operationmath val;
    ++val;
    val.printout();
    --val;
    val.printout();
    //val++;
    return 0;

}