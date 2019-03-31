#include <iostream>
#include <iomanip>
#include "Polynomial.h"
using namespace std;

Polynomial::Polynomial()
{
   for ( int t = 0; t < number; t++ )
   {
      xi[ t ] = 0;
      zhi[ t ] = 0;
   }

   numberOfTerms = 0;
}

void Polynomial::printPolynomial() const
{
   int start;
   bool zero = false;

   if ( xi[ 0 ] )
   {
      cout << xi[ 0 ];
      start = 1;
      zero = true;
   }
   else
   {
      if ( xi[ 1 ] )
      {
         cout << xi[ 1 ] << 'x';
         if ( ( zhi[ 1 ] != 0 ) && ( zhi[ 1 ] != 1 ) )
            cout << '^' << zhi[ 1 ];

         zero = true;
      }

      start = 2;
   }
   for ( int i = start; i < number; i++ )
   {
      if ( xi[ i ] != 0 )
      {
         cout << showpos << xi[ i ] << noshowpos << 'x';

         if ( ( zhi[ i ] != 0 ) && ( zhi[ i ] != 1 ) )
            cout << '^' << zhi[ i ];

         zero = true;
      }
   }

   if ( !zero )
      cout << '0';

   cout << endl;
}

Polynomial &Polynomial::operator=( const Polynomial &r )
{
  zhi[ 0 ] = r.zhi[ 0 ];
   xi[ 0 ] = r.xi[ 0 ];

   for ( int s = 1; s < number; s++ )
   {
       if ( r.zhi[ s ] != 0 )
       {
          zhi[ s ] = r.zhi[ s ];
          xi[ s ] = r.xi[ s ];
       }
       else
       {
          if ( zhi[ s ] == 0 )
             break;

          zhi[ s ] = 0;
          xi[ s ] = 0;
      }
   }

   return *this;
}

Polynomial Polynomial::operator+( const Polynomial &r ) const
{
   Polynomial temp;
   bool exponentExists;
   int s;


   temp.xi[ 0 ] = xi[ 0 ] + r.xi[ 0 ];


   for ( s = 1; ( s < number ) && ( r.zhi[ s ] != 0 ); s++ )
   {
      temp.xi[ s ] = r.xi[ s ];
      temp.zhi[ s ] = r.zhi[ s ];
   }

   for ( int x = 1; x < number; x++ )
   {
      exponentExists = false;

      for ( int t = 1; ( t < number ) && ( !exponentExists ); t++ )
         if ( zhi[ x ] == temp.zhi[ t ] )
         {
            temp.xi[ t ] += xi[ x ];
            exponentExists = true;
         }


      if ( !exponentExists )
      {
         temp.zhi[ s ] = zhi[ x ];
         temp.xi[ s ] += xi[ x ];
         s++;
      }
   }

   return temp;
}


