
#ifndef CREDENTIALS_H
#define CREDENTIALS_H

#include <string>

using namespace std;
//class User;
class Credentials {
private:
    string url;
    string urlUsername;
    string urlPassword;
    string fileName;
    //User * user;    
    
public:
    Credentials();
    Credentials(const Credentials& orig);
    virtual ~Credentials();
    void addSiteCredential(Credentials &credential);
    
    string getSiteCredential(Credentials &credential) const;
    //string updateSiteCredential(string site, string username,
    //                            string novaPassaword, string nomeFich);
    string getUrlUsername() const;
    string getUrl() const;
    string getUrlPassword() const;
    string getFileName() const;
    //User * getUser();
    
    void setUrlUsername(string urlUsername);
    void setUrl(string url);
    void setUrlPassword(string urlPassword);
    void setFileName(string fileName);
    
    //void setUser(User * user);
};

#endif /* CREDENTIALS_H */

