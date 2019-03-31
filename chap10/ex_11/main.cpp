
#include <iostream>
#include "Polynomial.h"
using namespace std;

int main()
{
   Polynomial a, b, c, t;

   a.enterTerms();
   b.enterTerms();

   cout << "First polynomial :\n";
   a.printPolynomial();
   cout << "Second polynomial :\n";
   b.printPolynomial();
   cout << "\n sum:\n";
   c = a + b;
   c.printPolynomial();


   c = a - b;
   c.printPolynomial();
   cout << "\n cha :\n";

   c = a * b;
   c.printPolynomial();
   cout << "\n ji:\n";

}
