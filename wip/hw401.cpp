#include <iostream>
#include <string>

   /* std::string name = "";
    std::string bDate = "";
    std::string gender = "";
    std::string occupation = "";
    std::string regDate = "";
    bool isActive = 0;
    int day = 0;
    int month = 0;
    int year = 0; */
int Person::counter = 0; 
struct Date
{

    int day = 0;
    int month = 0;
    int year = 0;
s
    void print(){ 
        std::cout << day "." << month << "." << year;
    }
}

struct Person{

    std::string name;
    std::string bDate;
    char gender;
    std::string occupation;
    std::string regDate;
    bool isActive; 

    void print();
    std::cout << "Name" << name << std::endl;
    std::cout << "Birth date" << bDate << std::endl;
    std::cout << "Gender" << gender << std::endl;
    std::cout << "Occupation" << occupation << std::endl;
    std::cout << "Registration Date" << regDate << std::endl;
};

int main()
{
  Date::print();

    Person person1();
        {
        
            person1.name ="Monica";
            person1.bDate = {13, 9, 1999};
            person1.gender = "Female";
            person1.occupation = "Dentist";
            person1.regDate = "20.5.2015";
            person1.isActive = true;

            person1.print();
              /*  std::cout << name << bDate << gender << occupation << regDate << isActive << "\n"; */

            
           
        };

    ++Person::counter;
    person1.ID = Person::counter;
    person1.print();

    Person person2;
    person2.name ="Juho Naumanen";
    person2.bDate= {25, 6, 1989};
    person2.gender = "Male";
    person2.occupation = "Code-monkey";
    person2.regDate = "23, 9, 2019";
    person2.isActive = true;

    return 0;
}