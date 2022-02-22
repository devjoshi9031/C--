#include<iostream>
using namespace std;

/**
 * CLASS: To get the information of the Students. Also adds constructor functions and objective function.
 */
class Student{
    // Anything after private keyword cannot be accessible by any code outside the scope of this class.
    private:
        string name;
    public:
        string major;
        double gpa;
        /**
         * FUNCTION: To initialize a general declaration of an object!
         */
        Student(){
            name = "No_Name";
            major = "No_major";
            gpa = 0.0;
        }
        Student(string nm, string maj, double agpa){
            setname(nm);
            major = maj;
            gpa = agpa;
        }
        /**
         * Helper function to set the name of an object.
         */
        void setname(string aname){
            name = aname;
        }
        /**
         * Helper function to get the name of an object.
         */
        string getname();
        bool hasHonors(){
            if(gpa>=3.5){
                return true;}
            else{
                return false;}
        }
};
/**
 * The function can be declared in the class and the body can be written outside the class.
 * "::"" is the class scope.
 * */
string Student::getname(){
            return name;
        }

int main(){
    Student std("Dev","electrical",4.0), std2;
    cout<<"Name:\t" <<std2.getname()<<endl;
    std2.setname("Devli");
    cout<<"Name:\t" <<std2.getname()<< endl;
    return 0;
}