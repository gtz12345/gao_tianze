#include <iostream>
#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"
using namespace std;

int main()
{
Package p1("A","q","d","s",12345,"B","a","b","c",23456,3,4);

    cout<<p1.getSenderName()<<"\n"<<p1.getSenderAddress()<<"\n"<<p1.getSenderCity()<<"\n"<<p1.getSenderState()<<"\n"<<p1.getSenderYouzheng()
    <<"\n"<<p1.getReceiverName()<<"\n"<<p1.getReceiverAddress()<<"\n"<<p1.getReceiverCity()<<"\n"<<p1.getReceiverState()<<"\n"<<p1.getReceiverYouzheng()
    <<"\n"<<p1.calculateCost()<<endl;
    TwoDayPackage p2("A","q","d","s",12345,"B","a","b","c",23456,3,4,2);
     cout<<p2.getSenderName()<<"\n"<<p2.getSenderAddress()<<"\n"<<p2.getSenderCity()<<"\n"<<p2.getSenderState()<<"\n"<<p2.getSenderYouzheng()
    <<"\n"<<p2.getReceiverName()<<"\n"<<p2.getReceiverAddress()<<"\n"<<p2.getReceiverCity()<<"\n"<<p2.getReceiverState()<<"\n"<<p2.getReceiverYouzheng()
    <<"\n"<<p2.calculateCost()<<endl;
    OvernightPackage p3("A","q","d","s",12345,"B","a","b","c",23456,3,4,7);
     cout<<p3.getSenderName()<<"\n"<<p3.getSenderAddress()<<"\n"<<p3.getSenderCity()<<"\n"<<p3.getSenderState()<<"\n"<<p3.getSenderYouzheng()
    <<"\n"<<p3.getReceiverName()<<"\n"<<p3.getReceiverAddress()<<"\n"<<p3.getReceiverCity()<<"\n"<<p3.getReceiverState()<<"\n"<<p3.getReceiverYouzheng()
    <<"\n"<<p3.calculateCost();
}

