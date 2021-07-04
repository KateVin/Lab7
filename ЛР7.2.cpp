/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void adr (double *a, double *b, double *c)
{
  double min;
  double max;
  double sr;
  max = *a;
  min = *a;
  if (*b > max)
    {
      max = *b;
    }
  if (*c > max)
    {
      max = *c;
    }
  if (*b < min)
    {
      min = *b;
    }
  if (*c < min)
    {
      min = *c;
    }
  sr = (*a + *b + *c) - (min + max);
  *a = min;
  *b = sr;
  *c = max;
}

int main ()
{
  double a, b, c;
  cout<<"a = ";
  cin>>a;
  cout<<"b = ";
  cin>>b;
  cout<<"c = ";
  cin>>c;
  adr (&a, &b, &c);
  cout<<"a = "<<a<<" b = "<<b<<" c = "<<c;

  return 0;
}
