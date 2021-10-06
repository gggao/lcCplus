#include <iostream>
#include <string>
#include <vector>


using namespace std;

void test() {
    cout << "this is test" << endl;
}

struct St {
    string a;
    string* pa;
};

string ident(string arg) {
    arg[2] = 'x';
    return arg;
}

class P {
    public:
    virtual void pv() {
        cout << "P:pv()" << endl;
    };
    void v() { 
        cout << "P:v()" << endl;
    };
};

class C : public P {
    public:
    void pv() {
        cout << "C:pv()" << endl;
    };
    
    void v() {
        cout << "C:v()" << endl;
    }
};

// int main()
// {
//     cout << "Hello World" << endl;
//     vector<int*> v1{2,0};
//     vector<int*> v2{1,0};
//     cout << v1.size() <<":"<< v2.size() <<endl;

//     C c;
//     P* pp = &c;
//     C* pc = dynamic_cast<C*>(pp);
//     pp->pv();
//     pp->v();
//     pc->pv();
//     pc->v();
// }