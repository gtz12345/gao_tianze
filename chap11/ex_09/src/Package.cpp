#include "Package.h"

Package::Package(const string&sName,const string&sAddress,const string&sCity,const string&sState,int sYouzheng,
                 const string&rName,const string&rAddress,const string&rCity,const string&rState,int rYouzheng,double z,double cost)

{
    senderName=sName;
    senderAddress=sAddress;
    senderCity=sCity;
    senderState=sState;
    senderYouzheng=sYouzheng;
    receiverName=rName;
    receiverAddress=rAddress;
    receiverCity=rCity;
    receiverState=rState;
    receiverYouzheng=rYouzheng;
    zhong=z;
    percost=cost;

}
void Package::setSenderName(const string&sname)
{
    senderName=sname;
}
string Package::getSenderName()const
{
    return senderName;
}
void Package::setSenderAddress(const string&saddress)
{
    senderAddress=saddress;
}
string Package::getSenderAddress()const
{
    return senderAddress;
}
void Package::setSenderCity(const string&scity)
{
    senderCity=scity;
}
string Package::getSenderCity()const
{
    return senderCity;
}
void Package::setSenderState(const string&sstate)
{
    senderState=sstate;
}
string Package::getSenderState()const
{
    return senderState;
}
void Package::setSenderYouzheng(int syouzheng)
{
    senderYouzheng=syouzheng;
}
int Package::getSenderYouzheng()const
{
    return senderYouzheng;
}
void Package::setReceiverName(const string&rname)
{
    receiverName=rname;
}
string Package::getReceiverName()const
{
    return receiverName;
}
void Package::setReceiverAddress(const string&raddress)
{
    receiverAddress=raddress;
}
string Package::getReceiverAddress()const
{
    return receiverAddress;
}
void Package::setReceiverCity(const string&rcity)
{
    receiverCity=rcity;
}
string Package::getReceiverCity()const
{
    return receiverCity;
}
void Package::setReceiverState(const string&rstate)
{
   receiverState=rstate;
}
string Package::getReceiverState()const
{
    return receiverState;
}
void Package::setReceiverYouzheng(int ryouzheng)
{
    receiverYouzheng=ryouzheng;
}
int Package::getReceiverYouzheng()const
{
    return receiverYouzheng;
}
void Package::setZhong(double z)
{
    if(zhong>0.0)
        zhong=z;
}
double Package::getZhong()const
{
    return zhong;
}
void Package::setPercost(double cost)
{
    if(percost>0.0)
        percost=cost;
}
double Package::getPercost()const
{
    return percost;
}
double Package::calculateCost()const
{
    return zhong*percost;
}




