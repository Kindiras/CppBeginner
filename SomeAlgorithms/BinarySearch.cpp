#include <iostream>
#include <algorithm>

using namespace std;
int BinarySearch(int array[], int size, int key);
int  main()
{
  int n;
  int result;
  int A[] = {1,5,7,2,8,9,10,3};
  //n = sizeof(A)/sizeof(A[0]);
  n=sizeof(A)/sizeof(A[0]);
  result = BinarySearch(A, n, 11);
  if (result==-1){cout <<"The number could not found in array"<<endl;}
  else { cout <<"the array position is;"<< result<<endl;}
  return 0;
}

int BinarySearch(int array[], int size, int key)
{
  int l = 0;
  int r  = size-1;
  int mid;
  sort(array, array+size);

  while(l<=r)
  {
    mid = l + (r-l)/2;
    if(key == array[mid]){return mid;}
    else if (array[mid]< key) { l = mid +1;}
    else { r = mid -1;}

  }
  return -1;
}
