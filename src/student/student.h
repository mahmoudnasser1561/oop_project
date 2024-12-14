#include "./depend/dep.cpp"
#include "./subject/subject.h"

class Student {
public:
  Student() {}
  int getID() {}
  void setID(int id) {}
  double getGPA() {}
  void setAge(int age) {}
private:
int id;
  int age;
  double GPA;
  vector<Subject> subs; 
};