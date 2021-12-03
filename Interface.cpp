
#include "Interface.h"
#include "Constants.h"
#include <iostream>


using namespace std;
Interface::Interface() 
{
    lanchInterface();
}

Interface::Interface(const Interface& orig) 
{
}

Interface::~Interface() 
{
}
void Interface::lanchInterface()
{
    Credentials credentials; 
    string op;
    while(op != ZERO){
    
    cout << TITLE <<endl;
    cout << OPTION1 << endl;
    cout << OPTION2 << endl;
    cout << EXIT << endl;
    cin >> op;
    if(op == ONE)
    {   
        string temp;
        system("cls");
        cout << URL <<endl;
        cin >> temp;
        credential.setUrl(temp);
        cout << USERNAME <<endl;
        cin >> temp;
        credential.setUrlUsername(temp);
        cout << PASSWORD <<endl;
        cin >> temp;
        credential.setUrlPassword(temp);
        cout << FILENAME << endl;
        cin >> temp;
        credential.setFileName(temp);        
      
        credentials.addSiteCredential(credential);
    }
    else if(op == TWO)
    {
        string temp;
        system("cls");
        cout << URL <<endl;
        cin >> temp;
        credential.setUrl(temp);
        cout << USERNAME <<endl;
        cin >> temp;
        credential.setUrlUsername(temp);
        cout << FILENAME << endl;
        cin >> temp;
        credential.setFileName(temp);
        string password1 = credentials.getSiteCredential(credential);
        if(password1 != MINUSONE)
            cout << password1 << endl;
        else
        {
            cout << ERROR1 << endl;
        }
    }
   
    else
    {
        cout << ERROR2 << endl;
    }
    }
}
