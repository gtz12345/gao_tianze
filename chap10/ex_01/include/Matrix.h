#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

using namespace std;
class Matrix
{


		friend ostream& operator<<(ostream&,const Matrix&);
		friend istream& operator>>(istream&,Matrix&);
    private:
		int a;
		int b;
		int c;
		int d;
};

#endif
