#include ".. /control/Control.cpp"
#include<iostream>
using namespace std;
int process;
int id;
string name;
void display(){
    cout<<"\t\t**************** School Management System ****************"<<endl;
    cout<<"please Enter Your Process you need to do !"<<endl;
    cout<<"1-About Student"<<"\t\t"<<"2-About Course"<<endl;
    cout<<"3-About Teacher"<<"\t\t"<<"4-Exit"<<endl;
}
void showlist(string value){
    cout<<"1-Add "<<value<<"\t\t"<<"2-Delete "<<value<<endl;
    cout<<"3-Edit "<<value<<"\t\t"<<"4-Show "<<value<<endl;
    cout<<"5-Search "<<value<<"\t"<<"6-Exit"<<endl;
}
void Search(string value){
    cout<<"1-Search "<<value<<" By ID "<<endl;
    cout<<"2-Search "<<value<<" By Name "<<endl;

}
void addStudent(){
    cout<<"Please Enter Student Data :"<<endl;
   Student student;
    cout<<"enter student name :";
    string name;
    cin>>name;
    student.set_name(name);
    cout<<"enter student age :";
    int age;cin>>age;
    student.set_age(age);
    cout<<"enter student PhoneNumber :";
    string PhoneNumber;cin>>PhoneNumber;
    student.set_phoneNumber(PhoneNumber);
    cout<<"enter student GPA :";
    double gpa;cin>>gpa;
    student.set_gpa(gpa);
    StudentController studentController;
    int id=studentController.addStudent(student);
    if(id!=-1)
    cout<<"Success Added student With Id ["<<id<<"]"<<endl;
}
void addCourse(){
    cout<<"Please Enter Course Data :"<<endl;
    Course course;
    cout<<"enter Course name :";
    string name;cin>>name;
    course.set_name(name);
    cout<<"enter Course hour :";
    double hour;cin>>hour;
    course.set_hour(hour);
    CourseController courseController;
    int id=courseController.addCourse(course);
    if (id!=-1){
    cout<<"Success Added Course With Id ["<<id<<"]"<<endl;
    }
}
void addTeacher(){
    cout<<"Please Enter Teacher Data :"<<endl;
    Teacher teacher;
    cout<<"enter Teacher name :";
    string name;cin>>name;
    teacher.set_name(name);
    cout<<"enter Teacher age :";
    int age;cin>>age;
    teacher.set_age(age);
    cout<<"enter Teacher PhoneNumber :";
    string PhoneNumber;cin>>PhoneNumber;
    teacher.set_phoneNumber(PhoneNumber);
    cout<<"enter Teacher salary :";
    double salary;cin>>salary;
    teacher.set_salary(salary);
    TeacherController teacherController;
    int id=teacherController.addTeacher(teacher);
    if(id!=-1){
    cout<<"Success Added Teacher With Id ["<<id<<"]"<<endl;
    }
}
void SearchStudentById(){
    cout<<"Enter Id Student :";
    cin>>id;
    StudentController studentController;
    studentController.ShowStudentById(id);
}
void SearchCourseById(){
    cout<<"Enter Id Course :";
    cin>>id;
   CourseController courseController;
    courseController.ShowCourseById(id);
}
void SearchTeacherById(){
    cout<<"Enter Id Teacher :";
    cin>>id;
    TeacherController teacherController;
    teacherController.ShowTeacherById(id);
}
void SearchStudentByName(){
    cout<<"Enter Name Student :";
    cin>>name;
    StudentController studentController;
    studentController.ShwoStudentByName(name);
}
void SearchCourseByName(){
    cout<<"Enter Name Course :";
    cin>>name;
    CourseController courseController;
    courseController.ShowCourseByName(name);
}
void SearchTeacherByName(){
    cout<<"Enter Name Teacher :";
    cin>>name;
    TeacherController teacherController;
    teacherController.ShowTeacherByName(name);
}
void editStudent(){
    cout<<"Please Enter Student Data :"<<endl;
    Student student;
    cout<<"enter student id :";
    cin>>id; student.set_id(id);
    cout<<"enter student name :";
    string name;cin>>name;
    student.set_name(name);
    cout<<"enter student age :";
    int age;cin>>age;
    student.set_age(age);
    cout<<"enter student PhoneNumber :";
    string PhoneNumber;cin>>PhoneNumber;
    student.set_phoneNumber(PhoneNumber);
    cout<<"enter student GPA :";
    double gpa;cin>>gpa;
    student.set_gpa(gpa);
    StudentController studentController;
   studentController.updateStudent(student);
}
void editCourse(){
    cout<<"Please Enter Course Data :"<<endl;
    Course course;
    cout<<"enter course id :";
    cin>>id ; course.set_id(id);
    cout<<"enter course name :";
    string name;cin>>name;
    course.set_name(name);
    cout<<"enter Course hour :";
    double hour;cin>>hour;
    course.set_hour(hour);
    CourseController courseController;
courseController.updateCourse(course);
}
void editTeacher(){
    cout<<"Please Enter Teacher Data :"<<endl;
    Teacher teacher;
    cout<<"enter Teacher id :";
    cin>>id; teacher.set_id(id);
    cout<<"enter Teacher name :";
    string name;cin>>name;
    teacher.set_name(name);
    cout<<"enter Teacher age :";
    int age;cin>>age;
    teacher.set_age(age);
    cout<<"enter Teacher PhoneNumber :";
    string PhoneNumber;cin>>PhoneNumber;
    teacher.set_phoneNumber(PhoneNumber);
    cout<<"enter Teacher salary :";
    double salary;cin>>salary;
    teacher.set_salary(salary);
    TeacherController teacherController;
teacherController.updateTeacher(teacher);
}
void showStudent(){
    cout<<"\t id \t name \t age \t Phone Number \t GPA "<<endl;
    StudentController studentController;
    studentController.ShowStudent();
}
void showCourse(){
    cout<<"\t id \t name \t hour"<<endl;    
    CourseController courseController;
    courseController.ShowCourse();
}
void showTeacher(){
    cout<<"\t id \t name \t age \t Phone Numper \t Salary"<<endl;
    TeacherController teacherController;
    teacherController.ShowTeacher();
}
void deleteStudent(){
    cout<<"Enter the id :";
    cin>>id;
    StudentController studentController;
    studentController.deleteStudent(id);
}
void deleteCourse(){
    cout<<"Enter the id :";
    cin>>id;
    CourseController courseController;
    courseController.deleteCourse(id);
}
void deleteTeacher(){
    cout<<"Enter the id :";
    cin>>id;
    TeacherController teacherController;
    teacherController.deleteTeacher(id);
}
void SearchStudent(){
    switch(process){
        case 1:
        SearchStudentById();
        break;
        case 2:
        SearchStudentByName();
        break;
    }
}
void SearchCourse(){
    switch(process){
        case 1:
        SearchCourseById();
        break;
        case 2:
        SearchCourseByName();
        break;
    }
}
void SearchTeacher(){
    switch(process){
        case 1:
        SearchTeacherById();
        break;
        case 2:
        SearchTeacherByName();
        break;
    }
}
void switchStudent(){
 switch(process){
            case 1:
            
           addStudent();
                break;
            case 2:
                deleteStudent();
                break;
            case 3:
                editStudent();
                break;
            case 4:
                showStudent();
                break;
            case 5:
            Search("Student");
            cin>>process;
               SearchStudent();
                break;
            case 6:
                break;
            default :
            cout<<"Invalid Choose"<<endl;
        }
}
void switchCourse(){
 switch(process){
            case 1:
                addCourse();
                break;
            case 2:
                deleteCourse();
                break;
            case 3:
                editCourse();
                break;
            case 4:
                showCourse();
                break;
            case 5:
                Search("Course");
            cin>>process;
               SearchCourse();
                break;
            case 6:
                break;
            default :
            cout<<"Invalid Choose"<<endl;
        }
}
void switchTeacher(){
    switch(process){
            case 1:
                addTeacher();
                break;
            case 2:
                deleteTeacher();
                break;
            case 3:
                editTeacher();
                break;
            case 4:
                showTeacher();
                break;
                case 5:
                Search("Teacher");
            cin>>process;
               SearchTeacher();
                break;
            case 6:
                break;
            default :
            cout<<"Invalid Choose"<<endl;
        }
}
void switchmain(){
    int flag=0;
    while(true){
        display();
        cin>>process;
        switch(process){
            case 1:
        showlist("Student");
        cin>>process;
       switchStudent();
            break;
            case 2:
        showlist("Course");
        cin>>process;
       switchCourse();
            break;
            case 3:
        showlist("Teacher");
        cin>>process;
        switchTeacher();
            break;
            case 4:
            cout<<"Process Exit"<<endl;
           flag =1;
            break;
            default:
            cout<<"Invalid Choose"<<endl;
        }
        if(flag==1){
            break; 
        }
        
    }
}
int main(){
    switchmain(); 
}