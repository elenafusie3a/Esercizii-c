// Chiedi all’utente un numero n e calcola n! Esempio: 5!=5*4*3*2*1=120
#include <iostream>
#include <string>
using namespace std;
int main(){
    int fattoriale=1;
    int i=1;
    int n;
    cin>>n;
    cout<<"inserisci i numeri"<<endl;
    while(1<=n){
 fattoriale=fattoriale * i;
 i++;
 cout<<fattoriale<<endl;
    }
} 