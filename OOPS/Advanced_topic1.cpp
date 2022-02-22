#include<iostream>
#include<cstdio>

using namespace std;

class cls{
    int i=0;
    public:
    void setv(const int );
    int getv()const;
    cls();
    cls(const int j){
        i=j;
    }
};

void cls:: setv(const int j){
    i=j;
}

int cls:: getv() const{
    return i;
}

int main(){
    cls c,d(10);
    const int i=10;
    c.setv(i);
    printf("Value of i: %d\n",c.getv());
    return 0;
}