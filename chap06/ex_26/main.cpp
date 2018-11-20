#include <iostream>

using namespace std;

 int celsius(int x)
 {
     cout<<"C:"<<(x-32)/1.8;
 }



int main()
{
    int x;
    cin>>x;
    celsius(x);
}
