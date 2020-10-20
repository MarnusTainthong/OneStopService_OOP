// File name : InternetServiceImp.cpp

#include "InternetService.h"

InternetService::InternetService()
{
  Status = 0;
  Price = 0;
}
//fn_InternetService DF 

void InternetService::setPrice(double price)
{
  Price = price;
}
//fn_setPrice

void InternetService::setStatus(int status)
{
  Status = status;
}
//fn_setStatus

double InternetService::getPrice()
{
  return Price;
}
//fn_getPrice

int InternetService::getStatus()
{
  return Status;
}
//fn_getPackage

