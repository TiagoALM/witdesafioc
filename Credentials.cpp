
#include "Credentials.h"
#include <iostream>
#include <fstream>
#include <cstring>


Credentials::Credentials() {
}

Credentials::Credentials(const Credentials& orig) {
}

Credentials::~Credentials() {
}

    string Credentials::getUrlUsername() const
    {
        return urlUsername;
    }
    string Credentials::getUrl() const
    {
        return url;
    }
    string Credentials::getUrlPassword() const
    {
        return urlPassword;
    }
    
    void Credentials::setUrlUsername(string urlUsername)
    {
        this->urlUsername = urlUsername;
    }
    void Credentials::setUrl(string url)
    {
        this->url = url;
    }
    void Credentials::setUrlPassword(string urlPassword)
    {
        this->urlPassword = urlPassword;
    }
    
    void Credentials::addSiteCredential(string site, string user, 
                                        string password, string nomeFich)
    {
        this->setUrl(site);
        this->setUrlPassword(password);
        this->setUrlUsername(user);        
        ofstream ofs;

        //open in append mode
        ofs.open( nomeFich + ".txt", ios::app); 
        if (!ofs)
        {
            cout << "Erro a abrir o ficheiro" << endl;
        }
        else
        {
        ofs << "\n";
        ofs << this->getUrl();
        ofs << " ";
        ofs << this->getUrlUsername();
        ofs << " ";
        ofs << this->getUrlPassword();
        cout << "credencias adicionadas!" << endl;        
        ofs.close();   
        }
       
    }
    void Credentials::getSiteCredential (string site, string username,
                                         string nomeFich) const 
    {
        ifstream ifs;
        ifs.open(nomeFich + ".txt", ios::in);

        if (!ifs)
        {
            cout << "Erro a abrir o ficheiro" << endl;
        }
        else
        {
            string urlTemp;
            string userTemp;
            string passTemp;
            bool control = false;
            while ( ifs >>urlTemp >> userTemp >> passTemp)
            {
                if(urlTemp == site && userTemp == username)
                {
                    cout << passTemp << endl;
                    control = true;
                    break;    
                }
            }
            if(!control)
            {
              cout << "Não foi encontrado o par site/username indicado" << endl;          
            }
        }
    }
    

