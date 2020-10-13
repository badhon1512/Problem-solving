#include<iostream>
using namespace  std;

struct Student
{
    private:
    string id;
    string name;
    string email;
    string phone;


   public:
    void setStudentInformation(string id,string name,string email,string phone)
    {

        this->id=id;
        this->name=name;
        this->email=email;
        this->phone=phone;
    }

    void viewStudentInformation()
    {
        cout<<"ID     :"<<id<<endl;

        cout<<"Name     :"<<name<<endl;
        cout<<"email     :"<<email<<endl;
        cout<<"Phone     :"<<phone<<endl;

        cout<<endl<<endl;




    }

};

int main()
{
    struct Student s1,s2;
    s1.setStudentInformation("18-38229-2","mehenaz","mahnaz@gmail.com","0176666666");
    s1.viewStudentInformation();
    s2.setStudentInformation("18-38200-2","mehenaz alam","mahnaz@gmail.com","0976666666");
    s2.viewStudentInformation();

}
