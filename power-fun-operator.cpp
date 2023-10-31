#include<iostream>
using namespace std;
int main()
{
 int  num, power, i,result=1;
 cout<<"Enter the Number:"<<endl;
 cin>>num;
 cout<<"Enter the Power:"<<endl;
 cin>>power;
 for(i=0; i<=num; i++)
 {
  result=result*power;
 }
  cout<<"Power of the Number:"<<num<<"\t""is""\t"<<result<<endl;
  return 0;
}
//By Function Overloading
#include<iostream>
using namespace std;
class Power
{
 public:
 void p_num(int num, int power)
 {
  int result=1;
  for(int i=0;i<=num;i++)
  {
  result=result*power;
  }
  cout<<"Power of the Number:"<<num<<"\t""is""\t"<<result<<endl;
 }
 public:
 void p_num(double num, double power)
 {
  int result=1;
  for (int i=0;i<num;i++)
  {
  result=result*power;
  }
  cout<<"Power of the Number:"<<num<<"\t""is""\t"<<result<<endl;
 }
 };
 int main()
 {
  Power p1;
  p1.p_num(2,2);
  p1.p_num(2.4,3.5);
 }*/
 //By Operator Overloading
#include <iostream>
using namespace std;

int main() 
{
    int exponent;
    float base, result = 1;

    cout << "Enter base and exponent respectively:  ";
    cin >> base >> exponent;

    cout << base << "^" << exponent << " = ";

    while (exponent != 0) 
    {
        result *= base;
        --exponent;
    }

    cout << result;
    
    return 0;
}
