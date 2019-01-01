#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int array[1000];
   for (int a= 0;a<1000;a++)
      array[a]=1;
   for (int x=1;x<1000;x++)
   {
    if (array[x]==1&&x!=1&&x!=0)
    {
    for (int y=x;y<1000;y++)
    {
    if (y%x==0&&y!=x)
      array[y]=0;
    }
    }
   }
   for ( int z=2;z<1000;z++ )
   {
      if (array[z]==1)
      {
         cout<<setw(2)<<z<<"shi zhi shu"<<endl;
      }
   }
}
