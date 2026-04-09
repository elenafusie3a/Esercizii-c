 //Leggi numeri finché 0. Stampa l’ultimo numero pari inserito
 #include <iostream>
#include <string>
using namespace std;
int main(){
    int x; 
    int ultimo;

    do{

        cout<<"inserisci un numero"<<endl;
        cin>>x;


        if(x!=0){
            if(x%2==0){
                ultimo=x;
            }
        }
    }
    while(x!=0);
    if(x>0);

        cout<<"l'ultimo numero inserito pari è:"<<ultimo<<endl;
    
}