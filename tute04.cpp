/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

/*#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}*/

//Ans4:

#include<iostream>

int fact(int n)
{
  int factorial=1;
  for(int i=2;i<=n;++i)
    {
      factorial*=i;
    }
  return factorial;
}

int main()
{
  int n, r;

  std::cout<<"Enter value of n:";
  std::cin>>n;

  std::cout<<"Enter value of r:";
  std::cin>>r;

  int ans=fact(n)/(fact(n-r)*fact(r));
  std::cout<<"nCr:"<<ans<<std::endl;
}


