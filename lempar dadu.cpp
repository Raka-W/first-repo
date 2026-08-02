#include <iostream>
#include <cstdlib>//mengandung  funsi random

using namespace std;

int main (){
    char lanjut;
 
   while(true){
    cout<<"lempar dadu?(y/n): ";
    cin>>lanjut;
    
    if(lanjut == 'y'){
      cout<< 1 + rand() % 6 <<endl;
      
    }else if(lanjut == 'n'){
      cout <<"selesai";
      break;
    }else{
      cout<<"warning!! ketik Y atau n\n";
  }
} 
    return 0;
}