//Scrivi un programma in C++ che gestisce N negozi. Per ogni negozio ci sono M prodotti. 
//Per ogni prodotto inserire il nome, il numero di unità vendute e il prezzo unitario.
// Utilizzare array per memorizzare tutti i dati. Se le unità vendute sono maggiori di 50 applicare uno sconto del 10%, 
//mentre se sono maggiori di 100 applicare uno sconto del 20%. Il programma deve calcolare l’incasso di ogni negozio, 
// trovare il negozio con incasso maggiore e il prodotto più venduto dell’intera catena

#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout<<"dammi il numero dei negozi"<<endl;
    cin>>n;
    int m; 
    string nome;
    int p;
    int q; 
    

    for(int i=0; i<n; i++){
        int tot=0;
    cout<<"inserisci il nome del negozio"<<endl;
    cin>>nome;

    cout<<"quanti prodotti ha?"<<endl;
    cin>>m;
    for(int j=0; j<n; j++){

    cout<<"del primo prodotto quanti ne hai venduti?"<<endl;
    cin>>q;


    cout<<"inserisci il prezzo unitario"<<endl;
    cin>>p;

    if(q>50 && q<100){
        tot=tot+ ((p-p*0.10)*q);

    } else if(q>=100){
             tot=tot+ ((p-p*0.20)*q);
    }
    cout<<"l'incasso totale è"<< tot<< endl;
 cin>> tot; 
    }



 int max=0; 
 if(tot>max){
    max=tot;

 }

 cout<<"il negozio con l'incasso maggiore è"<<max<<endl; 


 if(m>max){
    max=m;

 }
 cout<<"il prodotto piu venduto è"<<max<<endl; 

    }


}