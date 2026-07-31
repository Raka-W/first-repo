#include<iostream>
//program membuat segitiga siku_siku
using namespace std;

int main (){
	int n;
	
	cout<<"masukan angka: ";
	cin>>n;
	
cout<<"pola1"<<endl;
	
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			
		cout <<"*"; 
		}
		 cout<<endl;
	}
	

cout<<"pola2"<<endl;

	for (int i = 1; i <= n; i++){
		for (int j = n; j >= i; j--){
			
		cout <<"*"; 
		}
		 cout<<endl;
	}
	
	cout<<"pola3"<<endl;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j >= i; j++){
			
		cout <<" "; 
		}
		 for (int k = j; k <= i; k++){
		 	cout<<"*";
		 }
		 cout<<endl;
	}
	return 0;
}