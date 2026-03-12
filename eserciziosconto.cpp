// Sono dati N biglietti. Per ogni biglietto si conoscono: prezzo base, tipo di cliente. Applicare lo sconto:
// Studente → 30% , Adulto → 5% , Over 65 → 40%. Stampare il totale incassato.
#include <iostream>
#include <string>
using namespace std;
int main(){

    int n;

    int prezzo=10;
    int cliente;
    double prezzoscontato;
    double totaleincassi=0.0;
    cout<<"inserisci il numero dei biglietti"<<endl;
    cin>>n;
   
 for(int i=0; i<n; i++){

 
cout<<"inserisci il tipo di cliente: 1 studente, 2 adulto, 3 over"<<endl;
 cin>>cliente;


    switch(cliente){
    //studente
    case 1:
   prezzoscontato=prezzo-(prezzo*0.30);
   break;
   //adulto
   case 2:
   prezzoscontato=prezzo-(prezzo*0.05);
   break;
   //over
   case 3:
   prezzoscontato=prezzo-(prezzo*0.40);
   break;

    }

totaleincassi += prezzoscontato;
cout<<totaleincassi<<endl;
}
}
