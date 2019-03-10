#include "Matrix.h"
#include <iomanip>
using namespace std;

ostream &operator<<(ostream&output,const Matrix &number)
{
    output<<"  "<<number.a<<"  "<<number.b<<"\n"<<"  "<<number.c<<"  "<<number.d;
    return output;
}

istream &operator>>(istream &input,Matrix &number)
{

    input>>number.a;

    input>>number.b;

    input>>number.c;

    input>>number.d;
    return input;
}
