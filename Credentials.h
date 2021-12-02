
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
    //User * user;    
    
public:
    Credentials();
    Credentials(const Credentials& orig);
    virtual ~Credentials();
    void addSiteCredential(string site,string user, 
                           string password,string nomeFich);
    void getSiteCredential(string site, string username, string nomeFich) const;
    
    string getUrlUsername() const;
    string getUrl() const;
    string getUrlPassword() const;
    //User * getUser();
    
    void setUrlUsername(string urlUsername);
    void setUrl(string url);
    void setUrlPassword(string urlPassword);
    
    //void setUser(User * user);
};

#endif /* CREDENTIALS_H */

