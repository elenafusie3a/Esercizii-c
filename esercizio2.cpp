//Chiedi all’utente di inserire base e altezza e calcola l’area del rettangolo solo se i valori sono positivi
#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<< " dammi la base e l'altezza del rettancolo"<< endl;
    int base;
    int altezza;
    cin>>base;
    cin>>altezza;
    if(base>0&&altezza>0){
        int area = base * altezza;
        cout<< "l'area del rettangolo è: " << area<<endl;
    }
}