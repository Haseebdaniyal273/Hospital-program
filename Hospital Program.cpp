#include<iostream>
#include<string.h>
using namespace std;
class Hospital
{
private:
string name;
string parent;
int id;
int age;
public:
	void get()
	{
		cout<<"Enter Patince Name "<<endl;
		cin>>name; 
		cout<<"Enter Age "<<endl;
		cin>>age;
		cout<<"Enter Parent Name "<<endl;
		cin>>parent;
		cout<<"Enter id no "<<endl;
		cin>>id;
	}
	void show()
	{
		cout<<"=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-="<<endl;
		cout<<"=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-="<<endl;
		cout<<"=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-="<<endl;
		cout<<"Patince Name is "<<name<<endl; 
		cout<<"Patince id is "<<id<<endl;
		cout<<"Age "<<age<<endl;
		cout<<"Parent Name "<<parent<<endl;
		cout<<"=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-="<<endl;
		cout<<"=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-="<<endl;
		cout<<"=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-="<<endl;
	}

};

int main()
{
	Hospital h;
	char key;
	char N,n,C,c,P,p;
		
while(true)
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
	cout<<"------HOSPITAL-----"<<endl;
	cout<<"////////////////////////"<<endl;
	cout<<"ENTER KEY N/n FOR NEW SLIP "<<endl;
	cout<<"ENTER KEY P/p FOR PRINT SLIP "<<endl;
	cout<<"ENTER KEY C/c FOR CALLING DOCTORS "<<endl;
	cout<<endl;	
	cin>>key;
	
	if(key =='N' || key =='n')
	{
	h.get();
	}
	else if(key=='P'||key=='p')
	{
	h.show();
	}
	else if(key=='C'||key=='c')
	{
		cout<<"Calling Doctors "<<endl;
	}
	else
	{
		cout<<"INVALID ENTRY "<<endl;
		cout<<endl;
	}	

}	
	return 0;
}
