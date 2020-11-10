#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

using namespace std;

int main(){

    vector<string> strings;
    char op;
    do{
        cout<<"1.- Agregar al final"<<endl;
        cout<<"2.- Mostrar"<<endl;
        cout<<"3.- Inicializar"<<endl;
        cout<<"4.- Frente"<<endl;
        cout<<"5.- Ultimo"<<endl;
        cout<<"6.- Ordenar"<<endl;
        cout<<"7.- Insertar"<<endl;
        cout<<"8.- Eliminar"<<endl;
        cout<<"9.- Eliminar ultimo"<<endl;
        cout<<"0.- Salir"<<endl;
        cout<<"Ingrese opccion: "; cin>>op;
        
        string str;

        switch(op){
        case '1':
            cout << "Cadena: ";
            fflush(stdin);
            getline(cin,str); //cin.ignore();
            strings.push_back(str);
            
            break;
        
        case '2':
            for (size_t i = 0; i < strings.size(); i++){
                if(i == strings.size()-1){
                    cout<<strings[i];
                    cout<<"."<<endl;;
                }else{
                    cout<<strings[i];
                    cout<<", ";
                }
            }
            system("pause");
            system("cls");
            break;
        
        case '3':
            size_t n;
            cout<<"Tam: "; cin>>n;
            cout<<"str: "; cin>>str; cin.ignore();
            strings = vector<string>(n, str);
                       
            break;
        
        case '4':
            if(strings.empty()){
                cout<<"Esta vacio";
            }else{
                cout<<strings.front()<<endl;
            }
            
            break;

        case '5':
            if(strings.empty()){
                cout<<"Esta vacio";
            }else{
                cout<<strings.back()<<endl;
            }   
                  
            break;

        case '6':
            sort(strings.begin(), strings.end());
            
            break;

        case '7':
            size_t p;
            cout<<"Posicion: "; cin>>p;
            cout<<"cadena: "; cin>>str; cin.ignore();
            if(p>= strings.size()){
                cout<<"Posicion no valida"<<endl;
            }else{
                strings.insert(strings.begin()+p,str);
            }
            
            break;

        case '8':
            cout<<"Posicion: "; cin>>p; cin.ignore();
            if(p>= strings.size()){
                cout<<"Posicion no valida"<<endl;
            }else{
                strings.erase(strings.begin()+p);
            }
            
            break;

        case '9':
            if(strings.empty()){
                cout<<"Vector vacio"<<endl;
            }else{
                strings.pop_back();
            } 
                     
            break;

        case '0':
            cout<<"S";
            Sleep(100);
            cout<<"a";
            Sleep(100);
            cout<<"l";
            Sleep(100);
            cout<<"i";
            Sleep(100);
            cout<<"e";
            Sleep(100);
            cout<<"n";
            Sleep(100);
            cout<<"d";
            Sleep(100);
            cout<<"o";
            Sleep(100);
            cout<<" ";
            Sleep(100);
            cout<<".";
            Sleep(100);
            cout<<" ";
            Sleep(100);
            cout<<".";
            Sleep(100);
            cout<<" ";
            Sleep(100);
            cout<<".";
            Sleep(100);

            Sleep(1000);
            system("cls");            
            break;

        default:
            break;
        }
    }while(op != '0');

    return 0;
}