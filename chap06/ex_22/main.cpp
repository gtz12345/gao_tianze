#include <iostream>

using namespace std;
int i=0;
int side(int x)
{

 for(x;x!=0;x--)
cout<<"*";


}
int side2(int x)
{

          for(x;i<x;i++)


            cout<<side(x)<<endl;
}
int main()
{
    int x;
    cin>>x;
    cout<<side2(x);

}




