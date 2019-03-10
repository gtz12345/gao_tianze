#include "Matrixjia.h"
#include <iomanip>

Matrixjia operator+(Matrixjia&Matrix1,Matrixjia&Matrix2)
{
   Matrixjia Matrix;
	for(int i=0;i<4;i++)
     for(int j=0;j<3;j++)
      Matrix.a[i][j]=Matrix1.a[i][j]+Matrix2.a[i][j];
	return Matrix;

}

ostream & operator << (ostream &output,Matrixjia &Matrix)
{


  cout<<"new matrix"<<endl;
  for(int i=0;i<4;i++)
  {
   for(int j=0;j<3;j++)
    output<<Matrix.a[i][j]<<" ";
   cout<<endl;
	}
}

istream & operator >> (istream &input,Matrixjia &Matrix)
{
    cout<<"Enter two Matrix"<<endl;
  for(int i=0;i<4;i++)
   for(int j=0;j<3;j++)
    input>>Matrix.a[i][j];
  return input;
}



