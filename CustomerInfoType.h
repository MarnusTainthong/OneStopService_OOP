// File name : CustomerInfoType.h

#include "InternetService.h"
#include "PhoneService.h"
#include "TelevisionService.h"

#ifndef CustomerInfoType_Class
#define CustomerInfoType_Class

class CustomerInfoType: public InternetService,PhoneService,TelevisionService
{
  protected:
    string Firstname;
    string Lastname;
	string Fullname;
    string CustomerNo;
	
	PhoneService PhoneSV;
    InternetService InternetSV;
    TelevisionService TelevisionSV;
	
  public:
    CustomerInfoType();
    CustomerInfoType(string Fname,string Lname,string custN);
    void setFirstname(string Fname);
    void setLastname(string Lname);
	void setFullname(string Fname,string Lname);
    void setCustomerNo(string custN);
	void setStatusActive(int select);
	void setStatusNonActive(int select);
	void setPrice(double price,int select);
    string getFirstname();
    string getLastname();
	string getFullname();
    string getCustomerNo();
	double getPrice(int select);
	bool getStatus(int select);
	void showCusInfo();
};

#endif
