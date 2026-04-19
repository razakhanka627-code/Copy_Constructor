#include <iostream>
using namespace std;
class Book{
    private:
    string name;
    public:
    Book(){
        name="success for what";
    }
    Book(const Book& obj){
        name=obj.name;
    }
    void show(){
        cout<<"Name :"<<name<<endl;
    }
    ~Book(){}
};
int main(){
    Book B1;
    Book B2=B1;
    //Book B2(B1);
    B1.show();
    B2.show();
}