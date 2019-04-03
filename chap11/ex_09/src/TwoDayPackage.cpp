#include "TwoDayPackage.h"
#include<iostream>

TwoDayPackage::TwoDayPackage(const string&sName,const string&sAddress,const string&sCity,const string&sState,int sYouzheng,
                             const string&rName,const string&rAddress,const string&rCity,const string&rState,int rYouzheng,
                             double z,double cost,double ping )
                             :Package(sName,sAddress,sCity,sState,sYouzheng,rName,rAddress,rCity,rState,rYouzheng,z,cost)
{
   setPingji(ping);
}
void TwoDayPackage::setPingji(double ping)
{
    if(ping>0.0)
        pingji=ping;
}
double TwoDayPackage::getPingji()const
{
   return pingji;
}
double TwoDayPackage::calculateCost()const
{
    return pingji+(zhong*percost);
}

