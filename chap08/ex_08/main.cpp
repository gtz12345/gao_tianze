#include <iostream>

using namespace std;

int main()
{

   unsigned int v[5]={2,4,6,8,10};
   unsigned int *vPtr=v;
   unsigned int vPter=1002500;
for(int i=0;i<5;++i)
    cout<<"v["<<i<<"]="<<v[i]<<endl;
for(int j=0;j<5;++j)
    cout<<"*(v+"<<j<<")="<<*(v+j)<<endl;
for(int k=0;k<5;++k)
    cout<<"vPtr["<<k<<"]="<<vPtr[k]<<endl;

   cout<<vPtr;
}
