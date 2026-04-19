#include <iostream>
using namespace std;
class Student{
    private:
    int marks;
    public:
    Student(){
        marks=100;
    }
    Student(const Student& obj){
        marks=obj.marks;
    }
    void display(){
        cout<<"Marks :"<<marks<<endl;
    }
    ~Student(){}
};
int main(){
    Student S1;
    Student S2=S1;
    S1.display();
    S2.display();
}