#ifndef TWODAY_H
#define TWODAY_H
#include<string>
#include"Package.h"

class TwoDayPackage:public Package
{
    public:
    TwoDayPackage  (const string &,const string &,const string &,const string &,int,
                    const string &,const string &,const string &,const string &,
                    int,double,double,double);
     void setPingji(double);
     double getPingji()const;
     double calculateCost()const;



    private:
        double pingji;
};

#endif
