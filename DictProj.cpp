#include <iostream>
#include <string.h>
#include "Dictionary.h"

using namespace std;

int main()
{   
    //char myarray[7] = "Ciaone";
    //char mar = "iggie";
    char* ma;
    sprintf(ma, "IPv4','%s'", "protoName");   
    Dictionary dic;
    string input;
    cout << "inserire nome e cognome" << endl;
    cin >> input;
    dic.addDefinition(input, "PIPPO");
    dic.printAll();

    
    cout << ma << endl;
}