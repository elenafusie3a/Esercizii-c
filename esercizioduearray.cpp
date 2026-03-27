// Crea due array di 4 elementi ciascuno. Somma elemento per elemento e stampa il risultato in un terzo array.

#include <iostream>
#include <string>
using namespace std;
int main(){

    int n=4;
    int x[n];
    int y[n];
    int somma[n];
    

    for(int i=0; i<n; i++){
        cout<<"inserisci i numeri del primo array"<<endl;
         cin>> x[i];
    }

    for(int i=0; i<n; i++){
        cout<<"inserisci i numeri del secondo array"<<endl;
        cin>> y[i];
    }
    

    for(int i=0; i<n; i++){
    somma[i]=x[i]+y[i];
    }


    for(int i=0; i<n; i++){
        cout<<"la somma dei due array è"<<somma[i]<<endl;
    }
         

}