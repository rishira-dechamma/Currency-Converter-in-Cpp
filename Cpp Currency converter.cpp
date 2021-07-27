#include<iostream>
using namespace std;
int main()
{
	int value;
	float amount,result;

	cout<<"-------------------------------------------------"<<endl;
	cout<<"CURRENCY CONVERTER SYSTEM"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	
	while(true)
	{

	cout<<"Press 1: To convert US dollars to INR"<<endl;
	cout<<"Press 2: To convert US dollars to British Pounds"<<endl;
	cout<<"Press 3: To convert US dollars to Euros"<<endl;
	cout<<"Press 4: To convert INR to US dollars"<<endl;
	cout<<"Press 5: To convert INR to British Pounds"<<endl;
	cout<<"Press 6: To convert INR to Euros"<<endl;
	cout<<"Press 7: To convert Euros to US dollars"<<endl;
	cout<<"Press 8: To convert Euros to British Pounds"<<endl;
	cout<<"Press 9: To convert Euros to INR"<<endl;
	cout<<"Press 0: To exit"<<endl;
	
	cout<<"-------------------------------------------------"<<endl;
	cin>>value;
	
	switch(value)
	{
		case 0:
			exit(0);
			
		case 1:
			cout<<"Enter US dollars"<<endl;
			cin>>amount;
			result=amount*74.48;
			cout<<"US dollars = $"<<amount<<"   "<<"INR = Rs "<<result<<endl;
			break;
		
		case 2:
			cout<<"Enter US dollars"<<endl;
			cin>>amount;
			result=amount*0.72;
			cout<<"US dollars = $"<<amount<<"   "<<"British Pounds = "<<result<<endl;
			break;
		
		case 3:
			cout<<"Enter US dollars"<<endl;
			cin>>amount;
			result=amount*0.85;
			cout<<"US dollars = $"<<amount<<"   "<<"Euros = "<<result<<endl;
			break;
		
		case 4:
			cout<<"Enter INR"<<endl;
			cin>>amount;
			result=amount/74.48;
			cout<<"INR = Rs "<<amount<<"   "<<"US dollars = $"<<result<<endl;
			break;
		
		case 5:
			cout<<"Enter INR"<<endl;
			cin>>amount;
			result=amount/102.92;
			cout<<"INR = Rs "<<amount<<"   "<<"British Pounds = "<<result<<endl;
			break;
		
		case 6:
			cout<<"INR"<<endl;
			cin>>amount;
			result=amount/87.94;
			cout<<"INR = Rs "<<amount<<"   "<<"Euros = "<<result<<endl;
			break;
		
		case 7:
			cout<<"Enter Euros"<<endl;
			cin>>amount;
			result=amount*1.18;
			cout<<"Euros = "<<amount<<"   "<<"US dollars = $"<<result<<endl;
			break;
		
		case 8:
			cout<<"Enter Euros"<<endl;
			cin>>amount;
			result=amount*0.85;
			cout<<"Euros = "<<amount<<"   "<<"British Pounds = "<<result<<endl;
			break;
		
		case 9:
			cout<<"Euros"<<endl;
			cin>>amount;
			result=amount*87.99;
			cout<<"Euros = "<<amount<<"   "<<"INR = Rs "<<result<<endl;
			break;
		
		default:
			cout<<"Invalid entry"<<endl;
			break;
			
	}
	cout<<"--------------------------------------------"<<endl;
    }
	
	return 0;
}

