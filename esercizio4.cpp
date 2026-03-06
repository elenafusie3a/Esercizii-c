// Chiedi all’utente un numero n e calcola n! Esempio: 5!=5*4*3*2*1=120
#include <iostream>
#include <string>
using namespace std;
int main(){
    int q=1;
    int n;
    cin>>n;
    cout<<"inserisci i numeri"<<endl;
    while(n>1){
  q =q * n;
 n--;
 cout<<q<<endl;
    }
    return 0;
} 