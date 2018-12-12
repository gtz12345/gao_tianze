#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;


void moveH(int &);
void moveT(int &);
void P(int &,int &);
int main()
{
    int time1=0;
    srand(time(0));
    int T=1;
    int H=1;
    cout << "BANG !!!!"<<"\n"<<"AND THEY ARE OFF !!!!"<<endl;

    while (T<70&&H<70)
    {
        moveH(H);
        moveT(T);
        P(H,T);
        time1++;
}

    if (T>=H)
    cout <<"TORTOISE WINS!!!YAY!!!"<<endl;
    else
    cout <<"Hare wins!"<< endl;
    return 0;
}

void moveT( int &moveT)
{
    int i =1+rand()%10;
cout<<i<<endl;
    if((i>= 1)&&( i<=5))
        moveT+= 3;
    else if ((i>=6)&&(i<=7))
        moveT-=6;
    else
        moveT+=1;

if( moveT<1 )
    moveT=1;

}

void moveH(int &moveH)
{
    int j=1+rand()%10;
cout<<j<<endl;
    if((j>=1)&&(j<=2))
        moveH=moveH ;
    else if((j>=3)&&( j<=4 ))
        moveH+=9;
    else if(j==5)
        moveH-=12;
    else if ((j>=6)&&(j<=8))
        moveH+=1;
    else
        moveH+=2;

if( moveH<1)
    moveH=1;

}
void P(int &H, int &T)
{

        if(H==T)
            cout<<setw(H)<<"OUCH!!!"<< endl;
        else if(H >T)
            cout <<setw(T)<<"T"<<setw(H-T)<<"H"<<endl;
        else if(H<T)
            cout<<setw(H)<<"H"<<setw(T-H)<<"T"<<endl;
}
