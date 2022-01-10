#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Veuillez inserer un nombre entre 0 et 100"<<"\n";
    cin>>n;
    int i=0;
    srand (time(NULL));
    int v;
    v= rand() % 100;
    string session="";
    cout<<v<<"\n";
    while(session!="non"){
        cout<<"Veuillez inserer un nombre entre 0 et 100"<<"\n";
        cin>>n;
        while (n!=v){

            if (v<n){
                cout<<"Le nombre choisi est trop grand, veuillez réessayer. \n";
                cin>>n;
                i++;
            }
            else{
                cout<<"Le nombre choisi est trop petit, veuillez réessayer. \n";
                cin>>n;
                i++;
            }

        }
    cout<<"Bravo vous avez trouvé le chiffre en "<<i<<" tentatives\n";
    cout<<"Voulez vous rejouer? Répondez par oui ou non\n";
    cin>>session;
    v= rand() % 100;
    }     
}