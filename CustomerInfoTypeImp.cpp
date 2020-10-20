// File name : CustomerInfoTypeImp.cpp

#include "CustomerInfoType.h"

CustomerInfoType::CustomerInfoType()
{
  Firstname = "";
  Lastname = "";
  Fullname = "";
  CustomerNo = "";
}
//fn_CustomerInfoType DF 

CustomerInfoType::CustomerInfoType(string Fname,string Lname,string custN)
{
  setFirstname(Fname);
  setLastname(Lname);
  setCustomerNo(custN);
  setFullname(Fname,Lname);
}
//fn_CustomerInfoType DF PR

void CustomerInfoType::setFirstname(string Fname)
{
  Firstname = Fname;
}
//fn_setFirstname

void CustomerInfoType::setLastname(string Lname)
{
  Lastname = Lname;
}
//fn_setLastname

void CustomerInfoType::setFullname(string Fname,string Lname)
{
	Fullname = Fname + " " + Lname;
}
//fn_setFullname

void CustomerInfoType::setCustomerNo(string custN)
{
  CustomerNo = custN;
}
//fn_setCustomerNo

void CustomerInfoType::setStatusActive(int select)
{
	// STATUS 0 = non active , 1 = active
	if(select == 1)
	{
		PhoneSV.setStatus(1);
	}
	else if(select == 2)
	{
		InternetSV.setStatus(1);
	}
	else if(select == 3)
	{
		TelevisionSV.setStatus(1);
	}
}
//fn_setStatusActive

void CustomerInfoType::setStatusNonActive(int select)
{
	// STATUS 0 = non active , 1 = active
	if(select == 1)
	{
		PhoneSV.setStatus(0);
	}
	else if(select == 2)
	{
		InternetSV.setStatus(0);
	}
	else if(select == 3)
	{
		TelevisionSV.setStatus(0);
	}
}
//fn_setStatusNonActive

void CustomerInfoType::setPrice(double price,int select)
{
	if(select==1)
	{
		PhoneSV.setPrice(price);
	}
	//phone
	else if(select==2)
	{
		InternetSV.setPrice(price);
	}
	//internet
	else if(select==3)
	{
		TelevisionSV.setPrice(price);
	}
	//television
	else
	{
		cout << "Can't set price." << endl;
	}
}

string CustomerInfoType::getFirstname()
{
  return Firstname;
}
//fn_getFirstname

string CustomerInfoType::getLastname()
{
  return Lastname;
}
//fn_getLastname

string CustomerInfoType::getFullname()
{
	return Fullname;
}
//fn_getFullname

string CustomerInfoType::getCustomerNo()
{
  return CustomerNo;
}
//fn_getCustomerNo

bool CustomerInfoType::getStatus(int select)
{
	if(select==1)
	{
		if(PhoneSV.getStatus()==0)
		{
			return false;
		}
		else if(PhoneSV.getStatus()==1)
		{
			return true;
		}
	}
	//phone
	else if(select==2)
	{
		if(InternetSV.getStatus()==0)
		{
			return false;
		}
		else if(InternetSV.getStatus()==1)
		{
			return true;
		}
	}
	//internet
	else if(select==3)
	{
		if(TelevisionSV.getStatus()==0)
		{
			return false;
		}
		else if(TelevisionSV.getStatus()==1)
		{
			return true;
		}
	}
	//television
}
//fn_getStatus

double CustomerInfoType::getPrice(int select)
{
	if(select==1)
	{
		if(PhoneSV.getPrice()==0)
		{
			return false;
		}
		else if(PhoneSV.getPrice()==1)
		{
			return true;
		}
	}
	//phone
	else if(select==2)
	{
		if(InternetSV.getPrice()==0)
		{
			return false;
		}
		else if(InternetSV.getPrice()==1)
		{
			return true;
		}
	}
	//internet
	else if(select==3)
	{
		if(TelevisionSV.getPrice()==0)
		{
			return false;
		}
		else if(TelevisionSV.getPrice()==1)
		{
			return true;
		}
	}
	//television
}
//fn_getPrice

void CustomerInfoType::showCusInfo()
{
	cout << "Name = " << getFullname() << endl;
	cout << "Cust No: " << getCustomerNo() << endl;
}
//fn_showCusInfo