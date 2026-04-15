//Leggere un array di interi di 10 posizioni e stampare il numero che compare più volte all'interno dell'array
#include <iostream>
#include <string>
using namespace std;
int main(){
    int x[10];
    int frequente="";
     int maxconta=0;

for(int i=0; i<10; i++){
    cout<<"inserisci i numeri"<<endl;
    cin>>x[i];
}

for(int i=0; i<10; i++){
    int conta=0;
    for(int j=0; j<10; j++) {
        if(x[i] == x[j]){
            conta++;
        }
    }
   
    if(conta>maxconta){
        maxconta=conta;
        frequente=x[i];
    }
}
cout<<"il numero più frequente è "<<frequente<<endl;
return 0;
}

