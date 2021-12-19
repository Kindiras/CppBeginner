#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

double* makeArray(int size);
double* addDelta(double *d,int size);
double sum(double *sArray,int size);
void checkMakeArray(double* cArray,int size);

int main()
{
  int size;
  cout <<"Plese enter the size of array "<<endl;
  cin>>size;
  double *Arr = makeArray(size);
  cout<<"adding Delta value 0.5 to each element of array:"<<endl;
  double *ArrDelta = addDelta(Arr,size);
  cout<<"The sum is:"<<sum(ArrDelta,size)<<endl;
  cout<<"See B array also changes:"<<endl;
  checkMakeArray(Arr,size);
}

double* makeArray(int size)

{
  srand(time(NULL));
  double* B; //This is a pointer
  B = new double [size]; //pointer to the array of size size.
for(int i=0;i<size;i++)
{
  B[i]=size*(double (rand())/RAND_MAX);
  cout<<"B:"<<B[i]<<endl;
}
return B;
}


double *addDelta(double* A,int size)
{
  double delta=0.5;
  for(int i=0;i<size;i++)
  {
    cout<<"Before adding delta A:"<<A[i]<<endl;
    A[i]=A[i]+delta;
    cout<<"After adding Delta A:"<<A[i]<<endl;
  }
  return A;
}

double sum(double * sArray,int size)
{
  double s=0;
  for(int i=0;i<size;i++)
  {
    s=sArray[i]+s;
  }
  return s;
}

void checkMakeArray(double *Arr,int size)
{
  for(int i=0;i<size;i++)
  cout<<"the old array B:"<<Arr[i]<<endl;
}
