#include <iostream>

class Complexnumber {
private:
int real_, imaginary_;
public:
Complexnumber(int r, int i);
Complexnumber operator + (Complexnumber const &a); 
void ShowSum();

};
void Complexnumber::ShowSum()
{
    std::cout<<real_<<"+i"<<imaginary_<<std::endl;
}
Complexnumber::Complexnumber(int r, int i)
{
    real_ = r;
    imaginary_ = i; 
}

Complexnumber Complexnumber:: operator + (Complexnumber const &a)
{
    Complexnumber b(0,0);
    b.real_ = real_ + a.real_;
    b.imaginary_ = imaginary_+ a.imaginary_;
    return b;
}

int main()
{
    Complexnumber c1(2,3),c2(5,6);
    Complexnumber c3 = c1+c2;
    c3.ShowSum();
}