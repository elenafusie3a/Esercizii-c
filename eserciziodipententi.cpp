// Sono dati N dipendenti. Per ogni dipendente: stipendio base, tipo contratto. Se: Tempo pieno +15% ,
// Part-time  +10% , Stage → +5%. Stampare stipendio finale, totale stipendi.
#include <iostream>
#include <string>
using namespace std;
int main(){

    int n;
    int stipendio=1500;
    int dipendente;
    int tipocontratto;
    int aumento;
    double totstipendi=0.0;

    cin>>n;
    cin>>dipendente;
  
 for(int i=0; i<n; i++){

 
cout<<"inserisciil tipo di contratto 1 tempo pieni, 2 part-time, 3 stage"<<endl;
cin>>tipocontratto;
    switch(tipocontratto){
    //tempo pieno
    case 1:
   aumento=stipendio-(stipendio*0.15);
   break;
   //part-time
   case 2:
   aumento=stipendio-(stipendio*0.10);
   break;
   //stage
   case 3:
   aumento=stipendio-(stipendio*0.05);
   break;

    }

totstipendi += aumento;
cout<<totstipendi<<endl;

}
}
