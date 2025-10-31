#include "iostream"
#define PAGIO 5
using namespace std;
int main(){
	
	double kwh=0,poso=0;
	cout<<"Eisagete arithmo kwh: " ;
	cin >> kwh;
	double Poso_A= 0.5 ,
	Poso_B=Poso_A*1.08,
	Poso_C=Poso_B*1.12,
	Poso_D=Poso_C*1.2 ;
	
	if(kwh>4000){
		cout<<"mh egkiri timi" ;
		exit(0);
	}
else if (kwh<=500){
	poso=PAGIO+500*Poso_A;

}
else if (kwh>500 && kwh<=900)
poso=(kwh-500)*Poso_B+500*Poso_A+PAGIO;
else if(kwh>900 && kwh<=1100){
poso=(kwh-900)*Poso_C+500*Poso_A+PAGIO+ 400*Poso_B;}
else if(kwh>1100&&kwh<=4000){
	poso=(kwh-1100)*Poso_D+PAGIO+500*Poso_A+400*Poso_B+200*Poso_C ;
}


cout<<"Poso pliromis : "<<poso  <<endl ;


	
	return 0;
}                             
