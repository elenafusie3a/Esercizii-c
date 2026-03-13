// Chiedi numeri finché l’utente non inserisce 0, poi calcola somma, media, massimo e minimo.
#include <iostream>
#include <string>
using namespace std;
int main(){
    int i;
    int somma=0;
    double media=1;
    int max =0;
    int min=99999;
    int x=0;
    do{

     cout<<"inserisci un numero"<<endl;
     cin>>i;
if(i!=0){
    somma=somma+i;
   x++;

    if(i>max){
        max=i;

    }
    if(i<min){
        min=i;
    }
   
}
    }
    while(i!=0);
    if(x>0);
     media=somma/x;
      cout<<somma<<endl;
    cout<<media<<endl;
    cout<<max<<endl;
    cout<<min<<endl;
    
}
    
