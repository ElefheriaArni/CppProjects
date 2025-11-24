#include "iostream"
using namespace std;

int main(){

int values[5];
int i,j,min;


for(i=0;i<5;i++){
cin >> values[i] ;
}

for(i=0;i<5;i++){
	for(j=0;j<5;j++){
	
	
	if(values[i]<values[j]){
		min=values[i];
		values[i]=values[j];
		values[j]=min;
		
		}
}
}
	
 cout<< "ta stoixeia  me auksousa seira: " <<endl ;
 
	for(i=0;i<5 ;i++){
	 cout << "stoixeio " << i+1 <<" : "  << values[i] <<endl;
	 	} 


return 0; 
} 
