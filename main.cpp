//#include "main.cpp"

#include "PromotionType.h"
#include <iostream>
#include <cstdlib>
#include <string>

void clear_scr()
{
	system ("clear");
}
//fn_clear_scr

int main()
{
	clear_scr();
	cout << "||===========================" << endl;
	cout << "||   SE One Stop Services    " << endl;
	cout << "||===========================" << endl;

    cout << "Press enter to continute.." ;
    cin.get();

    clear_scr();
	
	string Fname="",Lname="",CustID="";
	
	cout << "Plese enter Firstname , Lastname , CustomerID(5 digits) : ";
	cin >> Fname >> Lname >> CustID;
	PromotionType Customer(Fname,Lname,CustID);
	Customer.showCusInfo();
	
	int select=0;
	do{
		clear_scr();
		cout << "||============== MENU ==============" << endl;
		cout << "|| 1) Phone service" << endl;
		cout << "|| 2) Internet service" << endl;
		cout << "|| 3) Television service" << endl;
		cout << "|| 4) Exit" << endl;
		cout << "||==================================" << endl;
		cout << "Please select your service (1-4): ";
		cin >> select;
	
		char check;
		double cost=0;
				
		switch(select)
		{
		case 1:
		{
			cout << "Are you select Phone service? (y/n) : ";
			cin >> check;
			
			if(check=='y'){
				Customer.setStatusActive(select);
				cout << "Insert your package : ";
				cin >> cost;
				Customer.setPrice(cost,select);
			}
			else{
				break;
			}
			cout << "Services status : ";
			if(Customer.getStatus(select))
			{
				cout << "Active" << endl;
			}
			else
			{
				cout << "Non Active" << endl;
			}
			cout << "Set Package SUCCESS." << endl;
			cout << "Press enter to continute.." << endl;
			system("read");
		}
		break;
		// break case1
		case 2:
		{
			cout << "Are you select Internet service? (y/n) : ";
			cin >> check;
			if(check=='y'){
				Customer.setStatusActive(select);
				cout << "Insert your package : ";
				cin >> cost;
				Customer.setPrice(cost,select);
			}
			else{
				break;
			}
			cout << "Services status : ";
			if(Customer.getStatus(select))
			{
				cout << "Active" << endl;
			}
			else
			{
				cout << "Non Active" << endl;
			}
			cout << "Set Package SUCCESS." << endl;
			cout << "Press enter to continute.." << endl;
			system("read");
		}
		break;
		// break case2
		case 3:
		{
			cout << "Are you select Television service? (y/n) : ";
			cin >> check;
			if(check=='y'){
				Customer.setStatusActive(select);
				cout << "Insert your package : ";
				cin >> cost;
				Customer.setPrice(cost,select);
			}
			else{
				break;
			}
			cout << "Services status : ";
			if(Customer.getStatus(select))
			{
				cout << "Active" << endl;
			}
			else
			{
				cout << "Non Active" << endl;
			}
			cout << "Set Package SUCCESS." << endl;
			cout << "Press enter to continute.." << endl;
			system("read");
		}
		break;
		// break case3
		case 4:
		{
			cout << "Exit complete" << endl;
			clear_scr();
		}
		break;
		// break case4
		}
	
	}//do
	while(select!=4);
	
	int month=0;
	do
	{
		cout << "Insert months (1-12) : ";
		cin >> month;
		if(month>=1 && month<=12)
		{
			Customer.setMonth(month);
			cout << "Set month SUCCESS." << endl;
		}
		else
		{
			cout << "Can't set month." << endl;
		}
//		cout << "Press enter to continute.." << endl;
//		system("read");
		clear_scr();
	}
	while(month<1 || month >12); 
	//while

	int M_input=0;
	do
	{
		clear_scr();
		cout << "||================ MENU ===================" << endl;
		cout << "|| 1) Calculate each service (Discount 50%)" << endl;
		cout << "|| 2) SUM of all service" <<endl;
		cout << "|| 3) Print" << endl;
		cout << "|| 4) Exit program" << endl;
		cout << "||=========================================" << endl;
		cout << "Please select menu : ";
		cin >> select;
		
		
		if(select==1)
		{
			cout << "Select service : ";
			cin >> select;
			cout << "Inser months you want to calculate : ";
			cin >> M_input;
			if(month>=1 && month<=12)
			{
				cout << Customer.Pro_1(Customer.getPrice(select),M_input) << " Baht." << endl;
				cout << "Press enter to continute.." << endl;
				system("read");
			}
			else
			{
				cout << "Month more than 12 months." << endl;
				cout << "Press enter to continute.." << endl;
				system("read");
			}	
		}//if
		else if(select==2)
		{
			cout << "SUM of total cost of servics is : " << Customer.sumTotal() << " Baht." << endl;
			cout << "Press enter to continute.." << endl;
			system("read");
		}//else if
		else if(select==3)
		{
			Customer.print();
			cout << "Press enter to continute.." << endl;
			system("read");
		}//else if
		else if(select==4)
		{
			clear_scr();
			cout << "Exit" << endl;;
			system("read");
		}
		else
		{
			cout << "Error! Can't calculate." << endl;
			cout << "Press enter to continute.." << endl;
			system("read");
		}
	}
	while(select!=4);
	
}
//main
