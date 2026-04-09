//Crea due array di N elementi ciascuno. Crea un terzo array che contenga tutti i valori dei due array.
 #include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    int z[2*n];
    int x[n];
    int y[n];
    cout<<"dammi la lunghezza dei vettori"<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"inserisci il numero del primo array"<<endl;
        cin>> x[i];
    }
 for(int i=0; i<n; i++){
    cout<<"inserisci il numero del secondo array"<<endl;
    cin>>y[i];
 }

 for(int i=0; i<n*2; i++){
    if(i<n){
        z[i]= x[i];
    } else { 
        z[i]= y[i];

    }
 }
 for(int i=0; i<2*n; i++){
    cout<<"il terzo array che contiene glie elementi dei due array è:"<<z[i]<<endl;
 }
}
