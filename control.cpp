#include "../service/Service.cpp"

class StudentController{
    private:
    StudentServiceImpl  studentService ;
    Student Studentresult;
    public:
    int addStudent(Student student){
        return studentService . addStudent(student);
    }
    void ShowStudentById(int id){
        Studentresult =studentService.SearchStudentById(id);
        if(Studentresult.get_id()!=-1){
            cout<<"\t id \t name \t age \t Phone Number \t GPA "<<endl;
            cout<<"\t "<<Studentresult.get_id()<<"\t "<<Studentresult.get_name()<<"\t "<<Studentresult.get_age()<<
            "\t "<<Studentresult.get_phoneNumber()<<"\t "<<Studentresult.get_gpa()<<endl;
        }

    }
    void ShwoStudentByName(string  name){
    Studentresult =studentService.SearchStudentByName(name);
        if(Studentresult.get_name()!=""){
            cout<<"\t id \t name \t age \t Phone Number \t GPA "<<endl;
            cout<<"\t "<<Studentresult.get_id()<<"\t "<<Studentresult.get_name()<<"\t "<<Studentresult.get_age()<<
            "\t "<<Studentresult.get_phoneNumber()<<"\t "<<Studentresult.get_gpa()<<endl;
        }
   }
    void updateStudent(Student student){
        studentService.editStudent(student);
    }
    void ShowStudent(){
        studentService.showStudent();
        
    }
   void deleteStudent(int id){
    studentService.deleteStudent(id);
   }
   
};

class CourseController{
    private:
     CourseServiceImpl courseService ;
     Course Courseresult;
     public:
     int addCourse(Course course){
        return courseService.addCourse(course);
     }
     void ShowCourseById(int id){
        Courseresult =courseService.SearchCourseById(id);
        if(Courseresult.get_id()!=-1){
            cout<<"\t id \t name \t hour "<<endl;
            cout<<"\t "<<Courseresult.get_id()<<"\t "<<Courseresult.get_name()<<"\t "<<Courseresult.get_hour()<<endl;
        }

    }
    void ShowCourseByName(string name){
        Courseresult =courseService.SearchCourseByName(name);
        if(Courseresult.get_name()!=""){
            cout<<"\t id \t name \t hour "<<endl;
            cout<<"\t "<<Courseresult.get_id()<<"\t "<<Courseresult.get_name()<<"\t "<<Courseresult.get_hour()<<endl;
        }

    }
void updateCourse(Course course){
        courseService.editcourse(course);
    }
    void ShowCourse(){
        courseService.showCourse();
    }
     void deleteCourse(int id){
        courseService.deleteCourse(id);
     }
};

class TeacherController{
    private:
    TeacherServiceImpl  teacherService ;
   
    Teacher Teacherresult;
    public:
    int addTeacher(Teacher teacher){
        return teacherService . addTeacher(teacher);
    }
    void ShowTeacherById(int id){
        Teacherresult=teacherService.SearchTeacherById(id);
        if(Teacherresult.get_id()!=-1){
            cout<<"\t id \t name \t age \t Phone Number \t GPA "<<endl;
            cout<<"\t "<<Teacherresult.get_id()<<"\t "<<Teacherresult.get_name()<<"\t "<<Teacherresult.get_age()<<
            "\t "<<Teacherresult.get_phoneNumber()<<"\t "<<Teacherresult.get_salary()<<endl;
        }

    }
    void ShowTeacherByName(string name){
        Teacherresult=teacherService.SearchTeacherByName(name);
        if(Teacherresult.get_name()!=""){
            cout<<"\t id \t name \t age \t Phone Number \t GPA "<<endl;
            cout<<"\t "<<Teacherresult.get_id()<<"\t "<<Teacherresult.get_name()<<"\t "<<Teacherresult.get_age()<<
            "\t "<<Teacherresult.get_phoneNumber()<<"\t "<<Teacherresult.get_salary()<<endl;
        }

    }
    void updateTeacher(Teacher teacher){
        teacherService.editTeacher(teacher);
    }
  void ShowTeacher(){
       teacherService.showTeacher();
    }
     void deleteTeacher(int id){
        teacherService.deleteTeacher(id);
     }
};

