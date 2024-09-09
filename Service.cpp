#include "../repo/Repo.cpp"
#include "../validation/Validation.cpp"

class StudentService{
    public:
     virtual int addStudent(Student student)=0;
     virtual Student SearchStudentById(int id)=0;
     virtual int editStudent(Student student)=0;
     virtual Student showStudent()=0;
     virtual void deleteStudent(int id)=0;
     virtual Student SearchStudentByName(string name)=0;

};
class StudentServiceImpl{
    private:
    StudentRepositoryImpl studentRepository;
    StudentValidation studentValidation;
    ValidationService validationService;
    Student Studentresult;
    public:
     int addStudent(Student student){
        if(studentValidation.ValidteStudent(student)==1){
            int id=studentRepository.addStudent(student);
            if(id==-1){
                validationService.FullData("Student");
            }
            return id;
        }
     return -1;
     }
     Student SearchStudentById(int id){
       Studentresult= studentRepository.SearchStudentById(id);
       if(Studentresult.get_id()==-1){
       validationService.NotExist("Student",id);
       }
       return Studentresult;
     }
     Student SearchStudentByName(string name){
       Studentresult= studentRepository.SearchStudentByName(name);
       if(Studentresult.get_name()==""){
       validationService.NotExist("Student",name);
       }
       return Studentresult;
     }
     
     int editStudent(Student student){
       int index= studentRepository.editStudent(student);
       if(index == -1){
        validationService.NotExist("Student",student.get_id());
       }else{
        cout<<"sucess Edit student with id ["<<student.get_id()<<"]"<<endl;
       }
     }
      Student showStudent(){
      return studentRepository.showStudent();
      
      }
             
        void deleteStudent(int id){
        studentRepository.deleteStudent(id);
      
      }
      

};

class CourseService{
    public:
    virtual int addCourse(Course course)=0;
    virtual Course SearchCourseById(int id)=0;
    virtual int editcourse(Course course)=0;
    virtual Course showCourse()=0;
    virtual void deleteCourse(int id)=0;
    virtual Course SearchCourseByName(string name)=0;
};
class CourseServiceImpl{
    private:
     CourseRepositoryImpl courseRepository;
     CourseValidation courseValidation;
      ValidationService validationService;
      Course Courseresult;
     public:
     int addCourse(Course course){
        if(courseValidation.ValidteCourse(course)){
        int id=courseRepository.addCourse(course);
        if(id==-1){
          validationService.FullData("Course");
        }
        return id;
        }
        return -1;
     }
     Course SearchCourseById(int id){
        Courseresult= courseRepository.SearchCourseById(id);
       if(Courseresult.get_id()==-1){
       validationService.NotExist("Course",id);
       }
       return Courseresult;
     
     }
     Course SearchCourseByName(string name){
        Courseresult= courseRepository.SearchCourseByName(name);
       if(Courseresult.get_name()==""){
       validationService.NotExist("Course",name);
       }
       return Courseresult;
     
     }
     int editcourse(Course course){
       int index= courseRepository.editcourse(course);
       if(index == -1){
        validationService.NotExist("Student",course.get_id());
       }else{
        cout<<"sucess Edit course with id ["<<course.get_id()<<"]"<<endl;
       }
     }
     Course showCourse(){
       return courseRepository.showCourse();
      }
      void deleteCourse(int id){
        courseRepository.deleteCourse(id);
      }

};

class TeacherService{
    public:
    virtual int addTeacher(Teacher teacher)=0;
    virtual Teacher SearchTeacherById(int id)=0;
    virtual int editTeacher(Teacher teacher)=0;
    virtual Teacher showTeacher()=0;
    virtual void deleteTeacher(int id)=0;
    virtual Teacher SearchTeacherByName(string name)=0;
};
class  TeacherServiceImpl{
    private:
     TeacherRepositoryImpl teacherRepository;
     TeacherValidation teacherValidation;
     ValidationService validationService;
     Teacher TeacherResult;
     public:
     int addTeacher(Teacher teacher){
        if(teacherValidation.ValidteTeacher(teacher)){
            int id=teacherRepository.addTeacher(teacher);
            if(id==-1){
             validationService.FullData("Teacher");
            }
            return id;
        }
     return -1;
        }
        Teacher SearchTeacherById(int id){
            TeacherResult= teacherRepository.SearchTeacherById(id);
       if(TeacherResult.get_id()==-1){
        validationService.NotExist("Teacher",id);
       }
       return TeacherResult;
     
        }
        Teacher SearchTeacherByName(string name){
            TeacherResult= teacherRepository.SearchTeacherByName(name);
       if(TeacherResult.get_name()==""){
        validationService.NotExist("Teacher",name);
       }
       return TeacherResult;
     
        }
        int editTeacher(Teacher teacher){
       int index= teacherRepository.editTeacher(teacher);
       if(index == -1){
        validationService.NotExist("Student",teacher.get_id());
       }else{
        cout<<"sucess Edit teacher with id ["<<teacher.get_id()<<"]"<<endl;
       }
     }
      Teacher showTeacher(){
        return teacherRepository.showTeacher();
      }
      void deleteTeacher(int id){
        teacherRepository.deleteTeacher(id);
      }
};
