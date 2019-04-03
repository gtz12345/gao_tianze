#ifndef OVERNIGHT_H
#define OVERNIGHT_H
#include"Package.h"
#include<string>

class OvernightPackage:public Package
{
    public:
    OvernightPackage(const string &,const string &,const string &,const string &,int,const string &,const string &,const string &,const string &,int,double,double,double);
     void setExtracost(double);
     double getExtracost()const;
     double calculateCost()const;



    private:
        double extracost;
};

#endif









