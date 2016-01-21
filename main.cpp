#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int nPiso, A, B, tonioNpiso = 0;
    
    cout << "Cuantos pisos tiene el edificio: ";
    cin >> nPiso;
    cout << "Cuantos pisos subira tonito: ";
    cin >> A;
    cout << "Cuantos pisos bajara tonito: ";
    cin >> B;
    
    do{
        tonioNpiso += A;
        
        if(tonioNpiso <= nPiso){
            if(tonioNpiso == nPiso){
                cout << "SI" << endl;
            }else{
                cout << "Tonito dejo bandera en el piso " << tonioNpiso << endl;
                tonioNpiso -= B;
            }
        }else{
            cout << "NO" << endl;
        }   
    }while(tonioNpiso < nPiso);
    
    system("pause");
    return 0;
}

