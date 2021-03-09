/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int caculateAvrEven(long long left, long long right)
{ if (left>right) return 0;
else if (left==right)
{ if (left%2==0) return left;
else return 0;
};
  if (right%2==1) right--;
  if (left%2==1) left++;
 long long t=0;
  t=(left/2) + (right/2);
return t;
}
int main()
{
int n = caculateAvrEven(110000000000,211111111111);
cout<<n;
}
