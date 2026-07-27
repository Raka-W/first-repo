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
   
   if(aritmatika == '+'){
     hasil = a + b ;
   }else if (aritmatika == '-'){
       hasil = a - b;
   }else if (aritmatika == '/'){
       hasil = a / b;
   }else if (aritmatika =='*'){
       hasil = a * b;
   }else {
       cout <<"operator anda salah";
   }
   
   cout << "="<<hasil << endl;
   
   
   
 
    
    
    
    return 0;
}