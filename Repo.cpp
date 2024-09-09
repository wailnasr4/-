#include "../Model/model.cpp"
#include<bits/stdc++.h>
using namespace std;
class Data{
    public:
    static Student students[24];
    static int indexStudent;
    static int idStudent;
    static Course courses[24];
    static int indexCourse;
    static int idCourse;
    static Teacher teachers[24];
    static int indexTeacher;
    static int idTeacher;
};
Student Data::students[24];
int Data ::indexStudent=0;
int Data::idStudent=1;
Course Data::courses[24];
int Data ::indexCourse=0;
int Data::idCourse=1;
Teacher Data::teachers[24];
int Data ::indexTeacher=0;
int Data::idTeacher=1;
///////////////////////// Student \\\\\\\\\\\\\\\\\\\\\\\\\\\\
//enterface StudentRepository
class StudentRepository{
    public:
    virtual int addStudent(Student student)=0;
    virtual Student SearchStudentById(int id)=0;
    virtual int editStudent(Student student)=0;
    virtual Student showStudent()=0;
    virtual void deleteStudent(int id)=0;
    virtual Student SearchStudentByName(string name)=0;
};

//class StudentRepositoryImpl
class StudentRepositoryImpl :public StudentRepository{
    private:
    Data data;
    Student invalidstudent;
   int index=-1;
    public:
    int addStudent(Student student){
        if(data.indexStudent==25){
           return -1;
        }else{
            student.set_id(data.idStudent++);
        data.students[data.indexStudent]=student;
        data.indexStudent++;
    }
    return student.get_id();
    }
    Student SearchStudentById(int id){
        for(int i=0;i<data.indexStudent;i++){
            if(data.students[i].get_id()==id){
                return data.students[i];
            }
        }
        invalidstudent.set_id(-1);
        return invalidstudent;
    }
    Student SearchStudentByName(string name){
        for(int i=0;i<data.indexStudent;i++){
            if(data.students[i].get_name()==name){
                return data.students[i];
            }
        }
       invalidstudent.set_name("");
        return invalidstudent;
    }
    int editStudent(Student student){
         for(int i=0;i<data.indexStudent;i++){
            if(data.students[i].get_id()==student.get_id()){
                index=i;
                break;
            }
        }
        if(index == -1){
           return -1;
        }else{
            data.students[index]=student;
            return index;
        }
    }
         Student showStudent(){
            for(int i=0;i<data.indexStudent;i++){
          cout<<"\t "<<data.students[i].get_id()<<" \t "<<data.students[i].get_name()<<" \t "<<data.students[i].get_age()
           <<" \t "<<data.students[i].get_phoneNumber()<<" \t "<<data.students[i].get_gpa()<<endl;
            
            }}
        void deleteStudent(int id){
            for(int i=0;i<data.indexStudent;i++){
                if(data.students[i].get_id()==id){
                    while(i<data.indexStudent-1){
                        data.students[i]=data.students[i+1];
                        i++;
                    }
                    data.indexStudent--;
                    break;
                }
            }
        }
};


///////////////////////// Course \\\\\\\\\\\\\\\\\\\\\\\\\\\\
//enterface CoursetRepository
class CourseRepository{
    public:
    virtual int addCourse(Course course)=0;
    virtual Course SearchCourseById(int id)=0;
    virtual int editcourse(Course course)=0;
    virtual Course showCourse()=0;
    virtual void deleteCourse(int id)=0;
    virtual Course SearchCourseByName(string name)=0;
};

//class CourseRepositoryImpl
class CourseRepositoryImpl :public CourseRepository{
    private:
    Data data;
    Course invalidcourse;
    int index=-1;
    public:
    int addCourse(Course course){
        if(data.indexCourse==25){
            return -1;
        }else{
            course.set_id(data.idCourse++);
        data.courses[data.indexCourse]=course;
        data.indexCourse++;
    }
    return course.get_id();
    }
    Course SearchCourseById(int id){
        for(int i=0;i<data.indexCourse;i++){
            if(data.courses[i].get_id()==id){
                return data.courses[i];
            }
        }
        invalidcourse.set_id(-1);
        return invalidcourse;
    }
    Course SearchCourseByName(string name){
        for(int i=0;i<data.indexCourse;i++){
            if(data.courses[i].get_name()==name){
                return data.courses[i];
            }
        }
        invalidcourse.set_name("");
        return invalidcourse;
    }
    int editcourse(Course course){
         for(int i=0;i<data.indexCourse;i++){
            if(data.courses[i].get_id()==course.get_id()){
                index=i;
                break;
            }
        }
        if(index == -1){
           return -1;
        }else{
            data.courses[index]=course;
            return index;
        }
    }
      Course showCourse(){
            for(int i=0;i<data.indexCourse;i++){
 
           cout<<"\t "<<data.courses[i].get_id()<<" \t "<<data.courses[i].get_name()<<" \t "<<data.courses[i].get_hour()<<" \t "<<endl;
         }}
         void deleteCourse(int id){
            for(int i=0;i<data.indexCourse;i++){
                if(data.courses[i].get_id()==id){
                    while(i<data.indexStudent-1){
                        data.courses[i]=data.courses[i+1];
                        i++;
                    }
                    data.indexCourse--;
                    break;
                }
            }
        }

};


///////////////////////// Teacher \\\\\\\\\\\\\\\\\\\\\\\\\\\\
//enterface TeacherRepository
class TeacherRepository{
    public:
    virtual int addTeacher(Teacher teacher)=0;
    virtual Teacher SearchTeacherById(int id)=0;
    virtual int editTeacher(Teacher teacher)=0;
    virtual Teacher showTeacher()=0;
    virtual void deleteTeacher(int id)=0;
    virtual Teacher SearchTeacherByName(string name)=0;
};

//class TeacherRepositoryImpl
class TeacherRepositoryImpl :public TeacherRepository{
    private:
    Data data;
    Teacher invalidteacher;
    int index=-1;
    public:
    int addTeacher(Teacher teacher){
        if(data.indexTeacher==25){
           return -1;
        }else{
            teacher.set_id(data.idTeacher++);
       data.teachers[data.indexTeacher]=teacher;
        data.indexTeacher++;
    }
    return teacher.get_id();
    }
    Teacher SearchTeacherById(int id){
        for(int i=0;i<data.indexTeacher;i++){
            if(data.teachers[i].get_id()==id){
                return data.teachers[i];
            }
        }
        invalidteacher.set_id(-1);
        return invalidteacher;
    }
    Teacher SearchTeacherByName(string name){
        for(int i=0;i<data.indexTeacher;i++){
            if(data.teachers[i].get_name()==name){
                return data.teachers[i];
            }
        }
        invalidteacher.set_name("");
        return invalidteacher;
    }
    int editTeacher(Teacher teacher){
         for(int i=0;i<data.indexTeacher;i++){
            if(data.teachers[i].get_id()==teacher.get_id()){
                index=i;
                break;
            }
        }
        if(index == -1){
           return -1;
        }else{
            data.teachers[index]=teacher;
           return  index;
        }
    }
     Teacher showTeacher(){
            for(int i=0;i<data.indexTeacher;i++){
           cout<<"\t "<<data.teachers[i].get_id()<<" \t "<<data.teachers[i].get_name()<<" \t "<<data.teachers[i].get_age()
           <<" \t "<<data.teachers[i].get_phoneNumber()<<" \t "<<data.teachers[i].get_salary()<<endl;
         }}
        void deleteTeacher(int id){
            for(int i=0;i<data.indexTeacher;i++){
                if(data.teachers[i].get_id()==id){
                    while(i<data.indexTeacher-1){
                        data.teachers[i]=data.teachers[i+1];
                        i++;
                    }
                    data.indexTeacher--;
                    break;
                }
            }
        }
};