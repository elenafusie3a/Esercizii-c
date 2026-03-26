// Genera un vettore di 10 elementi di valore casuali e sostituisci i pari con lo 0
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int n=10;
    int numeri[n];
    srand(time(0));
//Funzione principale: rand()  ovvero genera un numero casuale
    for(int i=0; i<n; i++){

     
        numeri[i]= rand() %10 + 1;
      
        if(numeri[i]%2==0){
            numeri[i]=0;


        }
    }
   for(int i=0; i<n; i++){
    cout<<numeri[i]<<endl;
}
}
