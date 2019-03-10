#ifndef MATRIXJIA_H
#define MATRIXJIA_H


#include <iostream>
using namespace std;
class Matrixjia
{

		friend Matrixjia operator+(Matrixjia&Matrix1,Matrixjia&Matrix2);
		friend ostream& operator<<(ostream&,Matrixjia&);
		friend istream& operator>>(istream&,Matrixjia&);

    private:
		int a[4][3];

};

#endif
