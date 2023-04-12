#include <iostream>
using namespace std;


int main() {
	string option, old_pin,new_pin,receipient_num;
	bool pin_out;
	int pin_count, pin_limit,amount,total_amount;
	total_amount=1000.00;
	pin_limit=2;
	pin_count=0;
	pin_out=false;
	while(true){
		cout<<"Welcome to Dessy Mobile Money Service \n";
	    cout<<"\n";
	    cout<<"1. Authentication \n";
	    cout<<"2. Reset pin \n";
    	cout<<"3. Check balance \n";
    	cout<<"4. Send money \n";
    	cout<<"5. Exit \n";
	    cout<<"";
	    cout<<"Enter option: \n";
	    cin>>option;
    	if (option=="1"){
    		while(old_pin != "0000" and not(pin_out)){
    			if (pin_count<=pin_limit){
    				cout<<"enter your pin to accept withdrawal of GHC 500.00: ";
				    cin>>old_pin;
				    pin_count+=1;}	
				
			    else{pin_out=true;}
		     	}
		if (pin_out==true){
			cout<<"your account has been blocked for too many atempts \n";
			break;}
		else{
			cout<<"You have successfully withdrawn GHC 500.00 from your , your remaining balance is GHC 495.00.";
			cout<<" A fee of GHC 5.00 has been subtracted from your mobile money wallet\n";
		}
		
		
	}
	else if (option=="2"){
		while(old_pin != "0000" and not(pin_out)){
			if (pin_count<=pin_limit){
				cout<<"enter old pin: ";
				cin>>old_pin;
				pin_count+=1;}	
				
			else{pin_out=true;}
			}
			
			
		if (pin_out==true){
			cout<<"your account has been blocked for too many atempts";
			break;}   
		else{
		cout<<"enter new pin: ";
		
		cin>>new_pin;
		if (new_pin==old_pin){
			cout<<"pin already exists \n";
			cout<<"\n";
		}
		else{
		
		cout<<"your pin has been reset successfully \n";
		cout<<"\n";
		}}}
	
	else if (option=="3"){
		while(old_pin != "0000" and not(pin_out)){
			
			if (pin_count<=pin_limit){
				cout<<"enter pin: ";
				cin>>old_pin;
				pin_count+=1;}	
				
			else{pin_out=true;}
			}
		if (pin_out==true){
		cout<<"your account has blocked for too many attempts \n";
		break;
		
		}
		else{
			cout<<"Your account balance is GHC 1000.00 \n";
			cout<<"\n";
			
		}
		
	}
	else if (option=="4"){
		cout<<"enter receipient number: ";
		cin>>receipient_num;
		cout<<"enter amount to be sent: ";
		cin>>amount;
		
		while(old_pin != "0000" and not(pin_out)){
			if (pin_count<=pin_limit){
				cout<<"enter pin: ";
				cin>>old_pin;
				pin_count+=1;}	
				
			else{pin_out=true;}
			}
		if (pin_out==true){
			cout<<"your account has been blocked for too many attempts";
			break;
		}
		else{
			cout<<"You have successfully sent an amount of GHC "<<amount<<".00 to "<<receipient_num<<", your remaining balance is GHC "<<total_amount-amount<<".00"<<endl;
			cout<<"\n";
		}
	}
	else if(option=="5"){
		cout<<"Thank you for your service with us \n ";
		break;
	}
	}
		
		
	
	
		return 0;
}