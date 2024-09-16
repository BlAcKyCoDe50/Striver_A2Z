   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;


class Employee
{
    private:
        int salary;
    public:
        string name;
        string dept;
        string city;
        int contact_info;

    //setter
    friend void fun(Employee e);
    
    
    void set(int salary)
    {
        (*this).salary = salary;
    }

    //default constructor
    Employee()
    {
        cout<<"hello from default constructor"<<endl;
    }

    void printinfo()
    {
        cout<<"name: "<<name<<endl;
        cout<<"dept: "<<dept<<endl;
        cout<<"City: "<<city<<endl;
        cout<<"salary: "<<salary<<endl;
        cout<<"contact_info: "<<contact_info<<endl;
    }
    //parametrized constructor
    Employee(string name , string city , string dept , int salary , int contact_info)    
    {
        cout<<"hey from parametrized constructor"<<endl;
        this->city = city;
        this->name = name;
        this->dept = dept;
        this->salary  = salary;
        this->contact_info = contact_info;
    }

    //custom copy constructor
    Employee(Employee &orgobj)
    {
        cout<<"hey from copy constructor"<<endl;
        this->city = orgobj.city;
        this->name = orgobj.name;
        this->dept = orgobj.dept;
        this->contact_info = orgobj.contact_info;
        this->salary-orgobj.salary;
    }

};

 void  fun(Employee e)
{
    cout<<"freind function"<<endl;
    cout<<e.salary<<" "<<endl;
}
main(){
    
 Employee e1("Vishu" , "Indore" , "Testing", 70000, 1234);
//  e1.printinfo();
 Employee e2(e1); //now this time the copy constructor will be invoked
e2.printinfo();
fun(e2);

 return 0;
 }