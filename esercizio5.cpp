//Chiedi all’utente di inserire una parola e conta quante vocali (a, e, i, o, u) ci sono. 
#include <iostream>
#include <string>
using namespace std;
int main(){

string parola;
//string lettera;
int conta=0;

cout<<"inserisci una parola"<<endl;
cin>>parola;
for (int i=0; i<parola.length();i++){
    char c=parola[i];
if(c =='a'|| c=='e' || c=='i' || c=='o' || c=='u'){
    conta++;
   
}

}
 cout<<"nella parola"<<parola<<"ci sono"<<conta<<"vocali";
}
