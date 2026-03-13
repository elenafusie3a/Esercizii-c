// Chiedi all’utente il prezzo originale e la percentuale di sconto. Calcola il prezzo finale e stampalo. Ripeti finché l’utente non inserisce 0 come prezzo.
#include <iostream>
#include <string>
using namespace std;
int main(){
    double prezzo;
    double sconto;
    double prezzoscontato;


    do{
        cout<<"inserisci il prezzo"<<endl;
        cin>>prezzo;
        if(prezzo!=0){
        cout<<"insrisci lo sconto"<<endl;
        cin>>sconto;

            prezzoscontato=prezzo-(prezzo*(sconto/100));
             cout<<prezzoscontato<<endl;
        }
            } 
            while(prezzo!=0);
               return 0;
    }
