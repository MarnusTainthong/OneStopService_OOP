// File name : PhoneService.h

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

#ifndef PhoneService_Class
#define PhoneService_Class

class PhoneService
{
  protected:
    // STATUS 0 = non active , 1 = active
    int Status;
    double Price;
  public:
    PhoneService();
    void setPrice(double price);
    void setStatus(int status);
    double getPrice();
    int getStatus();
};

#endif