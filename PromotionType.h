// File name :PromotionType.h 

#include "CustomerInfoType.h"
#ifndef PromotionType_Class
#define PromotionType_Class
#define VAT 0.07

class PromotionType:public CustomerInfoType
{
  protected:
    int Month;
  public:
    PromotionType();
	PromotionType(string Fname,string Lname,string custN);
    void setMonth(int month);
    int getMonth();
    double Pro_1(double price,int M_input);
	double sumTotal();
    void print();
};

#endif