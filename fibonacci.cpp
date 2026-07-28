#include <iostream>

using namespace std;

int main (){
     // f_n = f_n1 + f_n2
     
   int n,f_n,f_n1,f_n2;
     
     cout << "ini adlah program fibonacci\n";
     cout <<"masukan nilai ke -n :";
     cin >> n;
    
    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n1 + f_n2;
    cout << f_n2 << " ";
    cout <<f_n1<<" ";
    for (int i = 1; i < n; i ++){
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        cout <<f_n <<" ";
    }
    
    
    return 0;
}