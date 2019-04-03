#include "OvernightPackage.h"
#include<iostream>
OvernightPackage::OvernightPackage(const string&sName,const string&sAddress,const string&sCity,const string&sState,int sYouzheng,
                             const string&rName,const string&rAddress,const string&rCity,const string&rState,int rYouzheng,
                             double z,double cost,double ecost )
                             :Package(sName,sAddress,sCity,sState,sYouzheng,rName,rAddress,rCity,rState,rYouzheng,z,cost)
{
   setExtracost(ecost);
}
void OvernightPackage::setExtracost(double ecost)
{
    if(ecost>0.0)
        extracost=ecost;
}
double OvernightPackage::getExtracost()const
{
   return extracost;
}
double OvernightPackage::calculateCost()const
{
    return extracost+(zhong*percost);
}


