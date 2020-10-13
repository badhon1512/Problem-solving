#include<stdio.h>

struct Student
{

    char id[20];
    char name[30];
    char email[20];
    char phone[12];

  /* public Student(char id,char name,char email,char phone)
    {
        this.id=id;
        this.name=name;
        this.email=email;
        this.phone=phone;
    }*/
   public:
    void setStudentInformation(char id,char name,char email,char phone)
    {

        this.id=id;
        this.name=name;
        this.email=email;
        this.phone=phone;
    }

    void viewStudentInformation()
    {
        printf("Name    %s\n:",id);
        printf("ID      %s\n:",name);
        printf("ID      %s\n:",email);
        printf("ID      %s\n:",phone);

    }

};

int main()
{
    struct Student s1("18-38229-2","mehenaz","mahnaz@gmail.com","0176666666");
    s1.viewStudentInformation();

}
