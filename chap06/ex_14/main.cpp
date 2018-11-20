#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double y,number;
    cout<<"Enter a number";
    cin>>number;
    cout<<"原始数值"<<number;

        int roundToInteger(number);
    {
        y=floor(number+0.5);
        cout<<"舍入最近整数后的值"<<y<<endl;
        }
        int roundToTenths(number);
        {
         y=floor(number*10+0.5)/10;
         cout<<"舍入到最近十分位后的值" <<y<<endl;
        }
        int roundToHundredths(number);
        {
         y=floor(number*100+0.5)/100;
         cout<<"舍入到最近百分位后的值" <<y<<endl;
        }
        int roundToThousandths(number);
        {
         y=floor(number*1000+0.5)/1000;
         cout<<"舍入到最近千分位后的值" <<y<<endl;
        }
}
