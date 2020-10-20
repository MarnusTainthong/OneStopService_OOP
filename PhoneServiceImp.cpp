// File name : PhoneServiceImp.cpp

#include "PhoneService.h"

PhoneService::PhoneService()
{
  Status = 0;
  Price = 0;
}
//fn_PhoneService DF 

void PhoneService::setPrice(double price)
{
  Price = price;
}
//fn_setPrice

void PhoneService::setStatus(int status)
{
  Status = status;
}
//fn_setStatus

double PhoneService::getPrice()
{
  return Price;
}
//fn_getPrice

int PhoneService::getStatus()
{
  return Status;
}
//fn_getPackage

