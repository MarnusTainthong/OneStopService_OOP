// File name : TelevisionService.h

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

#ifndef TelevisionService_Class
#define TelevisionService_Class

class TelevisionService
{
  protected:
        // STATUS 0 = non active , 1 = active
    int Status;
    double Price;
  public:
    TelevisionService();
    void setPrice(double price);
    void setStatus(int status);
    double getPrice();
    int getStatus();
};

#endif