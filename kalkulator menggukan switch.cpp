#include<iostream>

using namespace std;



int main (){

   float a,b,hasil;
   char  aritmatika;
   
   cout <<"selamat datang di kalkulator\n\n";
   
   //masukan nilai dari user 
   cout << "masukan nilai pertama = ";
   cin >> a;
   cout << "pilih operator ";
   cin >> aritmatika;
   cout<<"masukan nilai kedua =";
   cin >> b;
   
   cout <<"hasil perhitungan: ";
   cout << a << aritmatika <<b;
   
   switch(aritmatika){
    case'+':
        hasil = a + b;
         break;
    case'-':
        hasil = a - b;
         break;
    case'*':
        hasil = a * b;
        break;
    case'/':
        hasil = a / b;
        break;
    default:
      cout<<"operator yg anda masukan salah\n";
   }
   
   cout << "="<<hasil << endl;
   
   
   
 
    
    
    
    return 0;
}