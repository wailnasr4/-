#include<iostream>
#include<string.h>
using namespace std;

//create modle ShareData
class ShareData{
    int id;
    string name;
    public:
            void set_id(int id){
        this->id=id;
    }
        void set_name(string name){
        this->name=name;
    }
            int get_id(){
        return id;
    }
        string get_name(){
        return name;
    }
};

//create modle baseEntity
class BaseEntity : public ShareData{
    private:
    int age;
    string phoneNumber;
    public:
    //setter

        void set_age(int age){
        this->age=age;
    }
        void set_phoneNumber(string phoneNumber){
        this->phoneNumber=phoneNumber;
    }
    //getter

        int get_age(){
        return age;
    }
        string get_phoneNumber(){
        return phoneNumber;
    }
};

//create modle Teacher
class Teacher : public BaseEntity{
    private:
    double salary;
    int student_ids[50];
    public:
    //setter
        void set_salary(double salary){
        this->salary=salary;
    }
    void set_student_ids(int student_ids[50]){
        for(int i=0 ; i<50;i++){
            this->student_ids[i]=student_ids[i];
        }
    }

    //getter
        double get_salary(){
        return salary;
    }
    int* get_student_ids(){
        return student_ids;
    }

};

//create modle Course
class Course : public ShareData{
    private:
    double hour;
    int student_ids[50];
    public:
    void set_hour(double hour){
        this->hour=hour;
    }
    void set_student_ids(int student_ids[50]){
        for(int i=0;i<50;i++){
        this->student_ids[i]=student_ids[i];
        }
    }
    double get_hour(){
        return hour;
    }
    int* get_student_ids(){
        return student_ids;
    }

};

//create modle Student
class Student : public BaseEntity{
    private:
    double gpa;
    Teacher teachers[5];
    Course courses[5];
    public:
    //setter
        void set_gpa(double gpa){
        this->gpa=gpa;
    }
    void set_Teacher(Teacher teachers[5]){
        for(int i=0; i<5; i++){
        this->teachers[i]=teachers[i];
    }}
    void set_course(Course courses[5]){
        for(int i=0;i<5;i++){
            this->courses[i]=courses[i];
        }
    }

    //getter
        double get_gpa(){
        return gpa;
    }
    Teacher* get_Teacher(){
        return teachers;
    }
    Course* get_course(){
        return courses;
    }

};


