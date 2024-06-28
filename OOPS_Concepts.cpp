#include <iostream>
#include<string>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;

};

class Employee:AbstractEmployee{
private:
    string Company;
    int Age;
protected:
    string Name;

public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void SetAge(int age){
        if(age >= 18)
        Age = age;
    }
    int getAge(){
        return Age;
    }

    void IntroduceYourself(){
        cout << "Name:"<< Name << endl;
        cout << "Company:"<< Company << endl;
        cout << "Age:"<< Age << endl;

    }

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }  
  void AskForPromotion(){
        if(Age > 30){
            cout << Name <<" got promoted!" << endl;}
        else{
            cout<< Name << ", sorry NO promotion for you!"<< endl;
        }
            

    }
  virtual void Work(){
    cout<< Name<< " is checking email, task backlog, performing tasks..."<< endl;
  }
};

class Developer:public Employee{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
    :Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug(){
        cout<< Name <<" fixed bug using " << FavProgrammingLanguage<< endl;
    }
    void Work(){
        cout<< Name<< " is writing "<< FavProgrammingLanguage <<" code "<<endl;
  }

};

class Teacher:public Employee {
public:
    string Subject;
    Teacher(string name, string company, int age, string subject): Employee(name, company, age){
        Subject = subject;

    }
    void PrepareLesson(){
        cout<<Name<<" is preparing "<< Subject<< "lesson" <<endl;
    }
     void Work(){
        cout<< Name<< " is teaching "<< Subject <<endl;
  }

};
int main(){ // The most common use of polymrphism is when a 
            //parent class refrence is uded to refer to a child object
    Developer d = Developer("Rushil", "Google", 31, "Java");
    Teacher t = Teacher("Shaman", "Apple", 23, "Programming");
    
    Employee* e1 = &d;
    Employee* e2 = &t;

    e1->Work();
    e2->Work();

}



