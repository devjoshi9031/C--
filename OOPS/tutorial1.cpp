#include<iostream>
using namespace std;

/*Constructor Function: It is the function that is called whenever a new object of a particular class if made. 
* See below the implementation of constructor function in C++.
*There can be multiple constructor Function by which user can initialize an object of the class.
*/
class Book{
    public:
        string title;
        string author;
        int pages;
        /**
         * FUNCTION: This is a constructor function that will be called everytime an instance of a class is called.
         * 
         */
        Book(string tile, string auth, int page){
            title = tile;
            author = auth;
            pages = page;
        }
};

int main(){
    Book book1("Deception Point", "Dan Brown", 100);
    cout << book1.title <<endl << book1.author <<endl << book1.pages<<endl;
    return 0;
}