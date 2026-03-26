//Costruisci un vettore di N dimensione , moltiplica solo gli elementi con indice dispari.
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout<<"dammi la lungheza del vettore"<<endl;
    cin>>n;
    double numeri[n];
    double x=1;

    for(int i=0; i<n; i++){
        cout<<"inserisci i numeri"<<endl;
        cin>>numeri[i];

        if(i%2!=0){
            x=x*numeri[i];
        }
      
    }
      cout<<"posizione dispari è"<<x<<endl;
}
    