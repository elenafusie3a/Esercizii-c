// Scrivere un programma che per una classe con 10 alunni per ogni alunno:– chiede quanti voti ha,
// li fa inserire,
//calcola per ogni alunno la media,
//stampa quante insufficienze ha quell’alunno.
//Dopo che sono stati inseriti i voti per tutti gli alunni, il programma dice quanti voti insufficienti in tutto ci sono stati e quanti alunni hanno una media inferiore al 6.

#include <iostream>
#include <string>
using namespace std;
int main(){
    int nalunni=10;
    int totvoti[nalunni];
    int voti[100];
    double media;
    int totinsu;
    int insu;
    int mediainsu=0;
    

    for(int i=0; i<nalunni; i++){

    cout<<"quanti sono i voti"<<endl;
    cin>>totvoti[i];
    int somma=0;
    insu=0;
    for(int j=0; j<totvoti[i]; j++){
           cout<<"inserisic i voti"<<endl;
    cin>>voti[j];
  somma= somma+voti[j];
   if(voti[j]<6){
    insu++;

 }
    }
media= somma/voti[i];
if(media<6){
    mediainsu++;
}
totinsu=totinsu+insu; 
cout<<"la media è"<< media <<endl;
cout<<"le insuff è"<< insu<<endl;
}
cout<<"le insuff totali sono"<< totinsu<<endl;
cout<<"lla media  insuff totali sono"<< mediainsu<<endl;
}


   


