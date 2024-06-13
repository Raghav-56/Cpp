//inheritance
#include <iostream>
using namespace std;

class base_class{
private:
    int priv = 1;
protected:
    int prot = 2;
public:
    int pub = 5;
    int get_private(){
        return priv;
    }
};

class derived_class : protected base_class {
public:
    int get_protected(){ 
        return prot; 
    }
    int get_public(){ 
        return pub; 
    }
};

int main(){
    derived_class obj;

    cout << "Private cannot be accessed." << endl;
    cout << "Protected = " << obj.get_protected() << endl;
    cout << "Public = " << obj.get_public() << endl;
    
    return 0;
}