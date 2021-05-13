// Reference
#include <iostream>

using namespace std;

int main ()
{
   int    i;
   double d;

   int&    r = i;
   double& s = d;

   i = 5;
   cout << "Value of i : " << i << endl;   // 5
   cout << "Value of i reference : " << r  << endl; // 5

   d = 11.7;
   cout << "Value of d : " << d << endl;  // 11.7
   cout << "Value of d reference : " << s  << endl; //11.7

   return 0;
}
