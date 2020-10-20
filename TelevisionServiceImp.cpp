// File name : TelevisionServiceImp.cpp

#include "TelevisionService.h"

TelevisionService::TelevisionService()
{
  Status = 0;
  Price = 0;
}
//fn_TelevisionService DF 

void TelevisionService::setPrice(double price)
{
  Price = price;
}
//fn_setPrice

void TelevisionService::setStatus(int status)
{
  Status = status;
}
//fn_setStatus

double TelevisionService::getPrice()
{
  return Price;
}
//fn_getPrice

int TelevisionService::getStatus()
{
  return Status;
}
//fn_getPackage

