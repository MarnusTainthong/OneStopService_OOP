// File name : InternetService.h

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

#ifndef InternetService_Class
#define InternetService_Class

class InternetService
{
  protected:
    // STATUS 0 = non active , 1 = active
    int Status;
    double Price;
  public:
    InternetService();
    void setPrice(double price);
    void setStatus(int status);
    double getPrice();
    int getStatus();
};

#endif