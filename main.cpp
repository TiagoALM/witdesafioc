#include <cstdlib>
#include <iostream>
#include <fstream>

#include "Credentials.h"
//#include "User.h"

using namespace std;

int main() {

    string op;
    while(op != "0"){
    
    cout << "Indique a accao pretendida" <<endl;
    cout << "1 - Adicionar novas credenciais" << endl;
    cout << "2 - Procurar Credenciais" << endl;
    cout << "0 - Sair" << endl;
    cin >> op;
    if(op == "1")
    {
        
        string url;
        string username;
        string password;
        string nomeFicheiro;
        system("cls");
        cout << "Indique o url do site:" <<endl;
        cin >> url;
        cout << "Indique o username:" <<endl;
        cin >> username;
        cout << "Indique a password:" <<endl;
        cin >> password;
        cout << "Indique o nome ficheiro para guardar as credenciais" << endl;
        cin >> nomeFicheiro;        

        Credentials credentials;       
        credentials.addSiteCredential(url,username,password,nomeFicheiro);
    }
    else if(op == "2")
    {
        system("cls");
        string url1;
        string username1;
        string nomeFicheiro1;
        cout << "Indique o url do site:" <<endl;
        cin >> url1;
        cout << "Indique o username:" <<endl;
        cin >> username1;
        cout << "indique onde estao guardas as credencias"<<endl;
        cin >> nomeFicheiro1;  
        Credentials credentials1; 
        credentials1.getSiteCredential(url1,username1,nomeFicheiro1);
    }
    else if(op == "0")
    {
        return 0;
    }
    else
    {
        cout << "Escolha uma opção valida" << endl;
    }
    }
   
    
}


