#include "Date.hpp"
#include <iostream>
#include <ctime>

using namespace std;

class Person{
    public:
        Person();
        Person(string name, char gender, Date birthdate);
        void setName(string name);
        void setGender(char gender);
        void setBirthdate(Date birthdate);
        void showName() const;
        void showGender() const;
        void showBirthdate() const;

    private:
        string name;
        char gender;
        Date birthdate;

};

Person::Person(){

}
Person::Person(string name, char gender, Date birthdate){
    this -> name = name;
    this -> gender = gender;
    this -> birthdate = birthdate;
}

void Person::setName(string name){
    this -> name = name;
}

void Person::setGender(char gender){
    this -> gender = gender;
}

void Person::setBirthdate(Date birthdate){
    this -> birthdate = birthdate;
}

void Person::showName() const{
    cout << name << endl;
}

void Person::showGender() const{
    cout << gender << endl;
}

void Person::showBirthdate() const{
    birthdate.show();
}

int main(){
    Person p;
    Date d(2000, 5, 4);
    p.setName("Nome");
    p.setGender('M');
    p.setBirthdate(d);
    p.showBirthdate();
    p.showName();
    p.showGender();


}