#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double y,number;
    cout<<"Enter a number";
    cin>>number;
    cout<<"ԭʼ��ֵ"<<number;

        int roundToInteger(number);
    {
        y=floor(number+0.5);
        cout<<"��������������ֵ"<<y<<endl;
        }
        int roundToTenths(number);
        {
         y=floor(number*10+0.5)/10;
         cout<<"���뵽���ʮ��λ���ֵ" <<y<<endl;
        }
        int roundToHundredths(number);
        {
         y=floor(number*100+0.5)/100;
         cout<<"���뵽����ٷ�λ���ֵ" <<y<<endl;
        }
        int roundToThousandths(number);
        {
         y=floor(number*1000+0.5)/1000;
         cout<<"���뵽���ǧ��λ���ֵ" <<y<<endl;
        }
}
