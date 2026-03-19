//Chiedi all’utente quanti numeri vuole inserire (n) e calcola la loro media usando un array 

#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout<<"dammi la lungheza del vettore"<<endl;
    cin>>n;
    double media;
    double numeri[n];
    double somma=0.0;
    
    for(int i=0; i<n;  i++){

cout<<"inserisci il numero"<<endl;
cin>>numeri[i];
somma+=numeri[i];

    } 

media=somma/n;
cout<<"la media dei numeri è" << media << endl;
return 0;
} 

