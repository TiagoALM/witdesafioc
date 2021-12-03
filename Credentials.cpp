
#include "Credentials.h"
#include "Constants.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>


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
    string Credentials::getFileName() const
    {
        return fileName;
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
    void Credentials::setFileName(string fileName) 
    {
        this->fileName = fileName;
    }
    
    void Credentials::addSiteCredential(Credentials  &credential)
                                  
    {    
        ofstream ofs;

        //open in append mode
        ofs.open( credential.getFileName() + TXT, ios::app);          

        if (!ofs)
        {
            cout << ERROR3 << endl;
        }
        else
        {
        ofs << ENTER;
        ofs << credential.getUrl();
        ofs << SPACE;
        ofs << credential.getUrlUsername();
        ofs << SPACE;
        ofs << credential.getUrlPassword();
        cout << ADDED << endl;        
        ofs.close();   
        }
       
    }
    string Credentials::getSiteCredential (Credentials  &credential) const 
    {
        ifstream ifs;
        ifs.open(credential.getFileName() + TXT, ios::in);

        if (!ifs)
        {
            cout << ERROR3 << endl;
            return NULL;
        }
        else
        {
            string urlTemp;
            string userTemp;
            string passTemp = MINUSONE;
            bool control = false;
            while ( ifs >>urlTemp >> userTemp >> passTemp)
            {
                if(urlTemp == credential.getUrl() && 
                   userTemp == credential.getUrlUsername())
                {                    
                    control = true;
                    return passTemp;   
                }
            }
            if(!control)
            {
              return passTemp;          
            }
        }
    }
    
//    string Credentials::updateSiteCredential(string site, string username,
//                              string novaPassaword, string nomeFich)
//    {
//        vector<Credentials> credentials;
//         ifstream ifs;
//        ifs.open(nomeFich + ".txt", ios::in);
//
//        if (!ifs)
//        {
//            cout << "Erro a abrir o ficheiro" << endl;
//            return NULL;
//        }
//        else
//        {
//            string urlTemp;
//            string userTemp;
//            string passTemp = "-1";
//            
//            bool control = false;
//            while ( ifs >>urlTemp >> userTemp >> passTemp)
//            {
//                if(urlTemp == site && userTemp == username)
//                {                    
//                    control = true;
//                    Credentials cred;
//                    cred.setUrl(urlTemp),
//                    cred.setUrlPassword(novaPassaword);
//                    cred.setUrlUsername(userTemp);
//                    credentials.push_back(cred);
//                }else{
//                    Credentials cred;
//                    cred.setUrl(urlTemp),
//                    cred.setUrlPassword(passTemp);
//                    cred.setUrlUsername(userTemp);
//                    credentials.push_back(cred);
//                }
//                }
//        
//            if(!control)
//            {
//              return "-1";          
//            }
//            else
//            {
//                for(auto i = credentials.begin(); i != credentials.end(); i++)
//                {
//                   
//                }
//            }
//        
//        }
//    }
    
    

