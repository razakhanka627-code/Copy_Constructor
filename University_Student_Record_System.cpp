#include <iostream>
using namespace std;
class Student{
    private:
    const int rollNo;
    string name;
    double gpa;
    public:
    Student(int r=0,string n="unknown",double g=0):rollNo(r),name(n),gpa(g){}
    Student(const Student& obj):rollNo(obj.rollNo){
        name=obj.name;
        gpa=obj.gpa;
    }
    void display()const{
        cout<<"Name :"<<name<<endl;
        cout<<"Roll No :"<<rollNo<<endl;
        cout<<"GPA :"<<gpa<<endl;
    }
    void updateGpa(double g){
        gpa=g;
        cout<<"Update successfullu"<<endl;
    }
    ~Student(){}
};
void processStudent(Student s){
    s.display();
}
int main(){
    Student s1(25,"ALi",3.5);
    Student s2=s1;
    processStudent(s1);
    const Student s3;
    s3.display();
    
}