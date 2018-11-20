#include <iostream>

using namespace std;

 int celsius(int x)
 {

     cout<<"F:"<<x<<"C:"<<(x-32)/1.8<<"\t";
 }
int main()
{
int x,k;
   for ( x=1,k=0;x<100;x++ )
   {
       celsius(x);
       k++;
       if(k%7==0)
        cout<<endl;
   }

}
