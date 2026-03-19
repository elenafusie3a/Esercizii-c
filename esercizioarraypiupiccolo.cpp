//Chiedi all’utente di inserire n numeri in un array e trova il più piccolo

#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout<<"dammi la lungheza del vettore"<<endl;
    cin>>n;
    double numeri[n];
    double min=99999;

    for(int i=0; i<n; i++){
        cout<<"inserisci il numero"<<endl;
        cin>>numeri[i];

        if(numeri[i]<min){
            min=numeri[i];

        }
        cout<<"il numero più piccolo è"  << min << endl;
    }
}