#include<iostream>

using namespace std;




class abstractEmployee{
    virtual void AskForPromotion()=0;
};
class Employee:abstractEmployee{
    private:
    string name;
    string company;
    int age;
    
    public:
    Employee(){
        cout << "Assiging default values to current constructor\n";
        name = "No name";
        company = "No company";
        age = 0;
        
    }
    Employee(string aname, string acompany, int aage){
        setter(aname, acompany, aage);
    }
    void setter(string aname, string acompany,int aage){
        
        name = aname;
        company = acompany;
        age = aage;
    }
    void introduce(void){
        cout<< "Name - " << name << endl;
        cout<< "Company - " << company << endl;
        cout<< "Age - " << age << endl;
    }
     void AskForPromotion(){
         cout << "I am very bogus boss, so No promotion whatsoever\n";
     }
};

/**
 * Developer is the child class and it will have all the properties that Employer has
 * */
class Developer:Employee{
    public:
    string favprolang;
    Developer(string aname, string acompany, int aage, string afavprolang){
        :Employee(aname,acompany, aage);
        favprolang = afavprolang;
    }
    void printprog(void){
        cout << favprolang <<;
    }
};

int main(){
    Employee saloni("Saloni", "Tesla", 26);
    saloni.introduce();
    Developer d1("dev","Tesla",24,"C++");
    d1.printprog();
}