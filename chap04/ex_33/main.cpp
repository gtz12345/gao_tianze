#include <iostream>

using namespace std;

int main()
{
  double a,b,c;
  cin>>a>>b>>c;
  if(a+b>c){
    if((a*a+b*b)!=c*c)
  cout<< "三条边不可以表示直角三角形";
  else
    cout<<"三条边可以表示直角三角形";}
    else
        cout<<"三条边不可以表示三角形";
}
