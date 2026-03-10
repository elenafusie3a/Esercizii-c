//Chiedi un numero n e stampa tutti i numeri pari da 2 fino a n 
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    int i=2;
    cout<<"inserisci il numero n"<<endl;
    cin>>n;
    while(i<=n){
        if(i%2==0){
            cout<<i<<endl;

        }
i++;
}  
  }
