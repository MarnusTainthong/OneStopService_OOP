// File name : PromotionTypeImp.cpp

#include "PromotionType.h"

PromotionType::PromotionType()
{
	Month = 0;
}
//fn_PromotionType DF

PromotionType::PromotionType(string Fname,string Lname,string custN):CustomerInfoType(Fname,Lname,custN)
{
	
}
//fn_PromotionType DF PR

void PromotionType::setMonth(int month)
{
  Month = month;
}
//fn_setMonth

int PromotionType::getMonth()
{
  return Month;
}
//fn_getMonth

double PromotionType::Pro_1(double price,int M_input)
{
	double discount=0,full=0,total=0;
	int M_cal=0;
	
	if(getMonth()==12 || M_input==12)
	{
		total = ((price * (1+VAT))/2) * M_input;
		return total;
	}
	else
	{
		M_cal = getMonth() - M_input;
	
		discount = ((price * (1+VAT))/2) * M_input;
		full = (price * (1+VAT)) * M_cal;
		total = discount + full;
		return total;
	}
	
}
//fn_Pro_1

double PromotionType::sumTotal()
{
	double sum1=(CustomerInfoType::PhoneSV.getPrice()*(1+VAT))*getMonth();
	double sum2=(CustomerInfoType::InternetSV.getPrice()*(1+VAT))*getMonth();
	double sum3=(CustomerInfoType::TelevisionSV.getPrice()*(1+VAT))*getMonth();
	return sum1+sum2+sum3;
}

void PromotionType::print()
{
  cout << "||=============================================" << endl;
  cout << "||Customer: " << endl;
  cout << "||Name : "<< CustomerInfoType::getFullname() << endl;
  cout << "||Customer ID : "<< CustomerInfoType::getCustomerNo() << endl;
  cout << "||=============================================" << endl;
  cout << "||Your service:" << endl;
  if(CustomerInfoType::PhoneSV.getStatus()==1)
  {
	  cout << "||Phone service : Active" << endl;
  }
  else if(CustomerInfoType::PhoneSV.getStatus()==0)
  {
	  cout << "||Phone service : Non - active" << endl;
  }
  //Phone
  if(CustomerInfoType::InternetSV.getStatus()==1)
  {
	  cout << "||Internet service : Active" << endl;
  }
  else if(CustomerInfoType::InternetSV.getStatus()==0)
  {
	  cout << "||Internet service : Non - active" << endl;
  }
  //Internet
  if(CustomerInfoType::TelevisionSV.getStatus()==1)
  {
	  cout << "||Television service : Active" << endl;
  }
  else if(CustomerInfoType::TelevisionSV.getStatus()==0)
  {
	  cout << "||Television service : Non - active" << endl;
  }
  //Television
  
  cout << "||---------------------------------------------" << endl;
  cout << "||Cost:" << endl;
  cout << "||Phone service package : " << CustomerInfoType::PhoneSV.getPrice() << " Baht." << endl;
  cout << "||Internet service package : " << CustomerInfoType::InternetSV.getPrice() << " Baht." << endl;
  cout << "||Television service package : " << CustomerInfoType::TelevisionSV.getPrice() << " Baht." << endl;
  cout << "||Month of use : " << getMonth() << endl;
  cout << "||---------------------------------------------" << endl;
  cout << "||SUM:" << endl;
  cout << "||Phone service : " << (CustomerInfoType::PhoneSV.getPrice()*(1+VAT))*getMonth() << " Baht." << endl;
  cout << "||Internet service : " << (CustomerInfoType::InternetSV.getPrice()*(1+VAT))*getMonth() << " Baht." << endl;
  cout << "||Television service : " << (CustomerInfoType::TelevisionSV.getPrice()*(1+VAT))*getMonth() << " Baht." << endl;
  cout << "||Total cost : " << sumTotal() << " Baht." << endl;
  cout << "||=============================================" << endl;
  
}
//fn_print




