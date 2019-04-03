#ifndef Package_H
#define Package_H
#include<string>
using namespace std;
class Package
{
public:
    Package(const string &,const string &,const string &,const string &,int,
            const string &,const string &,const string &,const string &,int,
            double,double);
    void setSenderName(const string &);
    string getSenderName()const;
    void setSenderAddress(const string &);
    string getSenderAddress()const;
    void setSenderCity(const string &);
    string getSenderCity()const;
    void setSenderState(const string &);
    string getSenderState()const;
    void setSenderYouzheng(int);
    int getSenderYouzheng()const;
    void setReceiverName(const string &);
    string getReceiverName()const;
    void setReceiverAddress(const string &);
    string getReceiverAddress()const;
    void setReceiverCity(const string &);
    string getReceiverCity()const;
    void setReceiverState(const string &);
    string getReceiverState()const;
    void setReceiverYouzheng(int);
    int getReceiverYouzheng()const;
    void setZhong (double);
    double getZhong()const;
    void setPercost(double);
    double getPercost()const;
    double calculateCost()const;
    double zhong;
    double percost;
private:
    string senderName;
    string senderAddress;
    string senderCity;
    string senderState;
    int senderYouzheng;
    string receiverName;
    string receiverAddress;
    string receiverCity;
    string receiverState;
    int receiverYouzheng;




};
#endif
