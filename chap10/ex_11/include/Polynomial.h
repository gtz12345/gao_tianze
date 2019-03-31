
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

class Polynomial
{
public:
   static const int number = 100;

   Polynomial operator+( const Polynomial & ) const;
   Polynomial operator-( const Polynomial & ) const;
   Polynomial operator*( const Polynomial & ) const;
   Polynomial &operator=( const Polynomial & );

   Polynomial();
   void enterTerms();
   void printPolynomial() const;
   int getNumberOfTerms() const;
   int getTermZhi( int ) const;
   int getTermXi( int ) const;
   void setXi( int, int );
   ~Polynomial();
private:
   int numberOfTerms;
   int zhi[ number ];
   int xi[number ];
   static void polynomialCombine( Polynomial & );
};

#endif
