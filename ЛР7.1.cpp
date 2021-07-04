/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void srgar (double a, double b)
{
  double a1 = 1 / a;
  double b1 = 1 / b;
  double c = 2 / (a1 + b1);
  cout<<"Среднее гармоническое 2х чисел = "<<c<<endl;
}

int main ()
{
  double a, b;
  cout<<"a = ";
  cin>>a;
  cout<<"b = ";
  cin>>b;
  srgar (a, b);

  return 0;
}


