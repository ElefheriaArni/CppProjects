#include "iostream "
#include "cmath"
using namespace std;
int main(){
	
	int a=0,b=0 ,c=0 ,D=0 ;
	float x=0,x1=0,x2=0 ;
	cout<<"Eisagete  akeraious arithmous a,b,c : " ;
	cin >> a >> b >> c ;
	if(a==0){
	
	if(b!=0 && c!= 0) { 
	 x1 = (float) -b/c ;
	 cout <<"1ou vathmou exiswsi me lysh " << x1 ;
			} 
			
			else if ( b!= 0 && c==0) { cout<<"Lysi  monadiki x=0" <<endl;
			
			}
			else if(b==0 && c!=0){cout<<"kamia lysi"<<endl;
			
			}
			else {cout<<"apeires lyseis"<<endl;
			}
			}
			
		else {
		
		D=b*b-4*a*c ;
		if(D<0){ cout<<"oi lyseis periexoun migadiko meros!";
		
		}
		else if (D>0){ 
		 x1= (float) (-b+ sqrt(D))/(2*a); 
		 x2= (float) (-b- sqrt(D))/(2*a) ;
		cout<<"Dyo pragmatikes diaforetikes lyseis x1=" <<x1 ; cout<<"\t x2=" <<x2 << endl;
		}
		else {
			x= (float)-b/(2*a); cout<<"Mia diplh lysi x1=x2= " <<x <<endl;
		}
		
		
		
		}
	return 0;
}                         
