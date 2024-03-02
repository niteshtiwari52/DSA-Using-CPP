// Problem :
#include <iostream>
#include<string>
using namespace std;
void normalPassing(int x)
{
    x = x + 10;
}
void referencePassing(int &x){
   
    x = x+10;
}
void pointerPassing(int *p ){
    *p = *p + 10;
}
void normalString(string s){
    s = "Nit";
    cout<<"Noramal String: "<<s<<endl;
}
void referenceString(string &s){
    s= "Nit";
    cout<<"Noramal String: "<<s<<endl;
}
void pointerString(string *s){
    *s= "Nit";
    cout<<"Noramal String: "<<*s<<endl;
}

int main()
{
    // normal passing varable
    int x = 10;
    normalPassing(x);
    cout<<"Normal passing variable o/p:" << x << endl;

    // reference passing variable 
    cout<<endl;
    x = 10 ; 
    referencePassing(x);
    cout<<"reference passing variable o/p:" << x << endl;
   
    // reference passing variable 
    cout<<endl;
    x = 10 ; 
    pointerPassing(&x);
    cout<<"pointer passing variable o/p:" << x << endl;

    //normal string passing
    cout<<endl;
    string name = "nitesh";
    normalString(name);
    cout<< "string after normalString() call: "<<name<<endl;
    
    //reference string passing
    cout<<endl;
     name = "nitesh";
    referenceString(name);
    cout<< "string after referenceString() call: "<<name<<endl;
    
    //reference string passing
    cout<<endl;
     name = "nitesh";
    pointerString(&name);
    cout<< "string after pointerString() call: "<<name<<endl;
    
    return 0;
}