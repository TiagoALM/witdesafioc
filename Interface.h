
#ifndef INTERFACE_H
#define INTERFACE_H
#include "Credentials.h"

using namespace std;

class Credentials;
class Interface {
    
public: 
    Credentials credential;
    Interface();
    Interface(const Interface& orig);
    
    void lanchInterface();
    virtual ~Interface();


};

#endif /* INTERFACE_H */

