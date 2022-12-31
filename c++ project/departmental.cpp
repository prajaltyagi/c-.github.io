#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

//creating clas for contaning the inforamation about the deparatmental store:
int main()
{


//CREATING SOME VARIABLES:
int quantity;
int choice;
//varites are:
cout<<"\n\n\t\t\t\t VARITES WE HAVE IN STORE:\n";
cout<<"\t\t\t\t"<<"========================\n";
cout<<"\n\n\t\t 1)salt";
cout<<"\n\t\t 2)sugar";
cout<<"\n\t\t 3)soap";
cout<<"\n\t\t 4)clove";
cout<<"\n";
	
	
	
//variable storing total items present in the store:
int total_salt=1200,total_sugar=3000,total_soap=4000,total_clove=1200;
//variable storing items which has been sold:
int sold_salt=0,sold_sugar=0,sold_soap=0,sold_clove=0;
//variable storing price of the items:
int price_salt=0,price_sugar=0,price_soap=0,price_clove=0;

			//STORE OWNER ORDERING STOCK form THE VENDOR
		//how much order a owner is giving:
		int order_salt=0,order_sugar=0,order_soap=0,order_clove=0;
		//cost of each product:
		int cost_salt=20,cost_sugar=30,cost_soap=40,cost_clove=10;
		//total cost:
		int tc_salt=0,tc_sugar=0,tc_soap=0,tc_clove=0;
	

		

//finding the quantity of the item we have in store:
cout<<"\n\nt\t\t QUANTITY OF THE ITEMS WE HAVE IN STORE:\n";
cout<<"\t\t"<<"========================================\n";
ofstream ofile("dep");
{

	ofile<<"\n\nt\t\t QUANTITY OF THE ITEMS WE HAVE IN STORE:\n";
cout<<"\n packets of salt available:--->1200\n";
//cout<<"RENTER AGAIN FOR CORSS CHECK\n";
ofile<<"\n packets of salt available:--->1200\n";
//ofile<<"RENTER AGAIN FOR CORSS CHECK\n"<<"1200\n";
//cin>>total_salt;
cout<<"\n packets of sugar available:--->3000\n";
//cout<<"RENTER AGAIN FOR CORSS CHECK\n";
ofile<<"\n packets of sugar available:--->1200\n";
//ofile<<"RENTER AGAIN FOR CORSS CHECK\n"<<"3000\n";
//cin>>total_sugar;
cout<<"\n boxex of soap available:--->4000\n";
//cout<<"RENTER AGAIN FOR CORSS CHECK\n";
ofile<<"\n boxex of soap available:--->1200\n";
//ofile<<"RENTER AGAIN FOR CORSS CHECK\n"<<"1200\n";
//cin>>total_soap;
cout<<"\n packets of clove available:--->1200\n";
//cout<<"RENTER AGAIN FOR CORSS CHECK\n";
ofile<<"\n packets of clove available:--->1200\n";
//ofile<<"RENTER AGAIN FOR CORSS CHECK\n"<<"1200\n";
//cin>>total_clove;
cout<<"\n";



//CREATING A LABEL WHICH IS (order):
order:
	
	
//SELECTING THE ITEMS :
cout<<"\n\n\t\t\t\t\t PLEASE SELECT YOUR CHOICE:";
cout<<"\n\t\t\t\t\t"<<"=================================\n";
cout<<"\n\n\t\t 1) salt";
cout<<"\n\t\t 2) sugar";
cout<<"\n\t\t 3) soap";
cout<<"\n\t\t 4) clove";
cout<<"\n\t\t 5) inforamtion regarding sales and collection:";
cout<<"\n\t\t 6) scope of payment in store:";
cout<<"\n\t\t 7) way of purchasing:";
cout<<"\n\t\t 8) feedback:";
cout<<"\n\t\t 9) ordering new stock:";
cout<<"\n\t\t 10) exit:\n";




//ASKING FOR CHOICE BY USING (switch case):
cout<<"\n\n\t\t\t\t PLESE ENTER YOUR CHOICE:";
cout<<"\n\t\t\t\t"<<"==========================\n";
cout<<"---->\t";
cin>>choice;

switch(choice)
{

	
	//case 1 is for salt:
	cout<<"\n\t\t\t FOR SALT\n";
	ofile<<"\n\t\t\t FOR SALT\n";
	cout<<"\n\t\t\t"<<"=========\n";
	case 1:
	cout<<"\n\n\t\t enter the number of salt:";
	cin>>quantity;
	if(total_salt-sold_salt>=quantity)
	{
		sold_salt=sold_salt+quantity;
		price_salt=price_salt+quantity*100;
		cout<<"\n\n\t\t\t\t"<< quantity <<" these much salt has given to you:";
		ofile<<"\n\n\t\t\t\t"<< quantity <<" these much salt has given to you:";
	}
	else
	{
		cout<<"\n\t\t only"<<total_salt-sold_salt<<"salt remaning:\n";
		ofile<<"\n\t\t only"<<total_salt-sold_salt<<"salt remaning:\n";
	}
	break;
	
	
		//case 2 is for sugar:
	cout<<"\n\t\t\t FOR SUGAR\n";
	ofile<<"\n\t\t\t FOR SUGAR\n";
	cout<<"\n\t\t\t"<<"=========\n";
		
		case 2:
	cout<<"\n\n\t\t enter the number of sugar:";
	cin>>quantity;
	if(total_sugar-sold_sugar>=quantity)
	{
		sold_sugar=sold_sugar+quantity;
		price_sugar=price_sugar+quantity*300;
		cout<<"\n\n\t\t\t\t"<< quantity <<" these much sugar has given to you:";
		ofile<<"\n\n\t\t\t\t"<< quantity <<" these much sugar has given to you:";
	}
	else
	{
		cout<<"\n\t\t only"<<total_salt-sold_salt<<"sugar remaning:\n";
		ofile<<"\n\t\t only"<<total_salt-sold_salt<<"sugar remaning:\n";
	}
	break;
		
	
			//case 3 is for soap:
	cout<<"\n\t\t\t FOR SOAP\n";
	ofile<<"\n\t\t\t FOR SOAP\n";
	cout<<"\n\t\t\t"<<"=========\n";
		case 3:
	cout<<"\n\n\t\t enter the number of soap:";
	cin>>quantity;
	if(total_soap-sold_soap>=quantity)
	{
		sold_soap=sold_soap+quantity;
		price_soap=price_soap+quantity*100;
		cout<<"\n\n\t\t\t\t "<< quantity <<" these much soap has given to you:";
		ofile<<"\n\n\t\t\t\t "<< quantity <<" these much soap has given to you:";
	}
	else
	{
		cout<<"\n\t\t only"<<total_soap-sold_soap<<"soap remaning:\n";
		ofile<<"\n\t\t only"<<total_soap-sold_soap<<"soap remaning:\n";
	}
	break;	
		
	
		//case 4 is for clove:
	cout<<"\n\t\t\t FOR CLOVE";
	cout<<"\n\t\t\t FOR CLOVE";
	cout<<"\n\t\t\t"<<"=========\n";
		case 4:
	cout<<"\n\n\t\t enter the number of clove:";
	cin>>quantity;
	if(total_clove-sold_clove>=quantity)
	{
		sold_clove=sold_clove+quantity;
		price_clove=price_clove+quantity*100;
		cout<<"\n\n\t\t\t\t"<< quantity <<" these much clove has given to you:";
		ofile<<"\n\n\t\t\t\t"<< quantity <<" these much clove has given to you:";
	}
	else
	{
		cout<<"\n\t\t only"<<total_clove-sold_clove<<"clove remaning:\n";
		ofile<<"\n\t\t only"<<total_clove-sold_clove<<"clove remaning:\n";
	}
	break;	
	
	
	//case 5 is for collection and sales:
	cout<<"\n\t\t\t FOR COLLECTION AND SALES:";
	cout<<"\n\t\t\t"<<"===============\n";
	case 5:
		//salt
		cout<<"\n\n\t\t SALT:-\n";
		ofile<<"\n\n\t\t SALT:-\n";
		cout<<"\t\t"<<"======\n";
		cout<<"\n\n\t\t number of salt we had:"<<total_salt;
		ofile<<"\n\n\t\t number of salt we had:"<<total_salt;
		cout<<"\n\n\t\t number of salt we sold:"<<sold_salt;
		ofile<<"\n\n\t\t number of salt we sold:"<<sold_salt;
		cout<<"\n\n\t\t remaning salt:"<<total_salt-sold_salt;
		ofile<<"\n\n\t\t remaning salt:"<<total_salt-sold_salt;
		cout<<"\n\n\t\t collection of the day:"<<price_salt;
		ofile<<"\n\n\t\t collection of the day:"<<price_salt;
		cout<<"\n";
		ofile<<"\n";
			
	
		
			//sugar
		cout<<"\n\n\t\t SUGAR:-\n";
		ofile<<"\n\n\t\t SUGAR:-\n";
		cout<<"\t\t"<<"=======\n";
		cout<<"\n\n\t\t number of sugar we had:"<<total_sugar;
		ofile<<"\n\n\t\t number of sugar we had:"<<total_sugar;
		cout<<"\n\n\t\t number of sugar we sold:"<<sold_sugar;
		ofile<<"\n\n\t\t number of sugar we sold:"<<sold_sugar;
		cout<<"\n\n\t\t remaning suagr:"<<total_sugar-sold_sugar;
		ofile<<"\n\n\t\t remaning suagr:"<<total_sugar-sold_sugar;
		cout<<"\n\n\t\t collection of the day:"<<price_sugar;
		ofile<<"\n\n\t\t collection of the day:"<<price_sugar;
		cout<<"\n";
		ofile<<"\n";
			
				//soap
		cout<<"\n\n\t\t SOAP:-\n";
		ofile<<"\n\n\t\t SOAP:-\n";
		cout<<"\t\t"<<"======\n";	
		cout<<"\n\n\t\t number of soap we had:"<<total_soap;
		ofile<<"\n\n\t\t number of soap we had:"<<total_soap;
		cout<<"\n\n\t\t number of soap we sold:"<<sold_soap;
		ofile<<"\n\n\t\t number of soap we sold:"<<sold_soap;
		cout<<"\n\n\t\t remaning soap:"<<total_soap-sold_soap;
		ofile<<"\n\n\t\t remaning soap:"<<total_soap-sold_soap;
		cout<<"\n\n\t\t collection of the day:"<<price_soap;
		ofile<<"\n\n\t\t collection of the day:"<<price_soap;
		cout<<"\n";
		ofile<<"\n";
			

				//clove
		cout<<"\n\n\t\t CLOVE:-\n";
		ofile<<"\n\n\t\t CLOVE:-\n";
		cout<<"\t\t"<<"=======\n";		
		cout<<"\n\n\t\t number of clove we had:"<<total_clove;
		ofile<<"\n\n\t\t number of clove we had:"<<total_clove;
		cout<<"\n\n\t\t number of clove we sold:"<<sold_clove;
		ofile<<"\n\n\t\t number of clove we sold:"<<sold_clove;
		cout<<"\n\n\t\t remaning clove:"<<total_clove-sold_clove;
		ofile<<"\n\n\t\t remaning clove:"<<total_clove-sold_clove;
		cout<<"\n\n\t\t collection of the day:"<<price_clove;
		ofile<<"\n\n\t\t collection of the day:"<<price_clove;
		cout<<"\n";
		ofile<<"\n";
			
		
		//total collection of the day
		cout<<"\n\n\t\t\t total collection of the day:"<<"\n\t\t\t="<<total_salt+total_sugar+total_soap+total_clove;
		cout<<"\n";
    	ofile<<"\n";
	

		
	break;
	//case  scope of the payment
	case 6:
	cout<<"\n\n\t\t\t\t SCOPE OF THE PAYMENTS IN THE STORE:\n";
	ofile<<"\n\n\t\t\t\t SCOPE OF THE PAYMENTS IN THE STORE:\n";
cout<<"\t\t\t\t"<<"====================================\n";
cout<<"\n\n\t\t 1)paytm";
ofile<<"\n\n\t\t 1)paytm";
cout<<"\n\t\t 2)google pay";
ofile<<"\n\t\t 2)google pay";
cout<<"\n\t\t 3)phone pay";
ofile<<"\n\t\t 3)phone pay";
cout<<"\n\t\t 4)cash";
ofile<<"\n\t\t 4)cash";
cout<<"\n\n\t\t\t ENTER YOUR CHOICE FOR PAYMENT:-";
ofile<<"\n\n\t\t\t ENTER YOUR CHOICE FOR PAYMENT:-";
cout<<"\n\t\t\t===============================";
cout<<"\n\t\t\t enter your choice for paymnet"<<endl;
ofile<<"\n\t\t\t enter your choice for paymnet"<<endl;
int payment;
cout<<"---->\t";
cin>>payment;

switch(payment){

cout<<"for payment:--";
ofile<<"for payment:--";
case 1:
	cout<<"---> paytm"<<endl;
	ofile<<"---> paytm"<<endl;
	break;
	case 2:
		cout<<"---> google pay"<<endl;
		ofile<<"---> google pay"<<endl;
		break;
		case 3:
			cout<<"---> phone pay"<<endl;
			ofile<<"---> phone pay"<<endl;
			break;
			case 4:
				cout<<"---> cash"<<endl;
				ofile<<"---> cash"<<endl;
				break;
				default:
					cout<<"---> invaild input"<<endl;
					ofile<<"---> invaild input"<<endl;
					
	}
	
cout<<"\n";
//case 7 for way for purchasing
case 7:
	cout<<"\n\n\t\t\t\t WAY OF PRUCHASING:\n";
	ofile<<"\n\n\t\t\t\t WAY OF PRUCHASING:\n";
	cout<<"\t\t\t\t"<<"====================\n";
	cout<<"\n\n\t\t 1)current purchasing";
	ofile<<"\n\n\t\t 1)current purchasing";
	cout<<"\n\t\t 2) home delivery";
	ofile<<"\n\t\t 2) home delivery";
	cout<<"\n";
	ofile<<"\n";
	cout<<"\n\t\t\t\tENTER YOUR CHOICE FOR PURCHASING:-";
	ofile<<"\n\t\t\t\tENTER YOUR CHOICE FOR PURCHASING:-";
	cout<<"\n\t\t\t\t================================="<<endl;;
	
	int purchase;
	cout<<"---->\t";
	cin>>purchase;
	switch(purchase){
		case 1:
			cout<<"----> current purchasing "<<endl;
			ofile<<"----> current purchasing "<<endl;
			break;
			case 2:
				cout<<"----> home delivery "<<endl;
				ofile<<"----> current purchasing "<<endl;
				default:
					cout<<"----> inavild input"<<endl;
					ofile<<"----> current purchasing "<<endl;
				}
	
	//case 8 for feedback
	case 8:
	cout<<"\n\n\t\t\t\t ENTER EITHER 0 OR 1 FOR FEEDBACK:"<<endl;
		cout<<"\t\t\t==============================================";
	
	cout<<"\n\t\t enter the number--->";
	

	//0--->BAD AND 1--->GOOD
	int fb;
	cin>>fb;
	
	if(fb==1){
		cout<<">>>> products are good!";
	}
		else
		{
			cout<<">>>> products are not good!";
		}
		cout<<"\n";
			
		//ordering an items
	case 9:
			cout<<"\n\t\t\t\t ORDERING NEW STOCK FOR STORE:";
		cout<<"\n\n";
		cout<<"\n\t\t\t\t ORDERING ITEMS ARE:";
		cout<<"\n\t\t\t\t====================";
		cout<<"\n\t\t these much packets of salt----->";
		cin>>order_salt;
		cout<<"\n\t\t these much packets of sugar----->";
		cin>>order_sugar;
		cout<<"\n\t\t these much box of soap----->";
		cin>>order_soap;
		cout<<"\n\t\t these much packets of clove----->";
		cin>>order_clove;
		cout<<"\n";
		
			
		//cost of product:
		cout<<"\n\n\t\t\t\t COST OF EACH PRODUCT:";
		cout<<"\n\t\t\t\t========================";
		cout<<"\n\n\t\t cost of each packet of soap is-------->";
		cout<<cost_salt;
		cout<<"\n\n\t\t cost of each pcket of sugar is-------->";
		cout<<cost_sugar;
		cout<<"\n\n\t\t cost of ech box of soap is------->";
		cout<<cost_soap;
		cout<<"\n\n\t\t cost  of each packets of clove-------->";
		cout<<cost_clove;
		cout<<"\n";
		ofile<<"\n\n\t\t\t\t COST OF EACH PRODUCT:";
		ofile<<"\n\t\t\t\t========================";
		ofile<<"\n\n\t\t cost of each packet of soap is-------->";
		ofile<<cost_salt;
		ofile<<"\n\n\t\t cost of each pcket of sugar is-------->";
		ofile<<cost_sugar;
		ofile<<"\n\n\t\t cost of ech box of soap is------->";
		ofile<<cost_soap;
		ofile<<"\n\n\t\t cost  of each packets of clove-------->";
		ofile<<cost_clove;
		ofile<<"\n";
			
		//totl_cost
		cout<<"\n\n\t\t\t\t TOTAL COST OF EACH PRODUCT:";
		cout<<"\n\t\t\t\t==============================";
		cout<<"\n\n\t\t total cost of the sugar ------->";
		tc_salt=order_salt*cost_salt;
		cout<<tc_salt;
		cout<<"\n\n\t\t total cost of the sugar ------->";
		tc_sugar=order_sugar*cost_sugar;
		cout<<tc_sugar;
		cout<<"\n\n\t\t total cost of the soap------->";
		tc_soap=order_soap*cost_soap;
		cout<<tc_soap;
		cout<<"\n\n\t\t total cost of the clove------->";
		tc_clove=order_clove*cost_clove;
		cout<<tc_clove;
		cout<<"\n";
			
				ofile<<"\n\n\t\t\t\t TOTAL COST OF EACH PRODUCT:";
		ofile<<"\n\t\t\t\t==============================";
		ofile<<"\n\n\t\t total cost of the sugar ------->";
		tc_salt=order_salt*cost_salt;
		ofile<<tc_salt;
		ofile<<"\n\n\t\t total cost of the sugar ------->";
		tc_sugar=order_sugar*cost_sugar;
		ofile<<tc_sugar;
		ofile<<"\n\n\t\t total cost of the soap------->";
		tc_soap=order_soap*cost_soap;
		ofile<<tc_soap;
		ofile<<"\n\n\t\t total cost of the clove------->";
		tc_clove=order_clove*cost_clove;
		ofile<<tc_clove;
		ofile<<"\n";
		
				
	
			//case 10 is for exit from the choice
		case 10:
			exit(0);
			break;
			
			default:
				cout<<"\n\n plese select the number mention above!";
			}
			goto order;
		}
		 ofile.close();
				ifstream ifile("dep");
	{ 

	}
	ifile.close();
	}
			
