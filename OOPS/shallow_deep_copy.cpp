   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    class Student
    {
        public:
            string name;
            int *marksptr;
        
        Student(string name , int marks)
        {
            this->name = name;
            marksptr = new int;
            *marksptr = marks;
        }
        void getInfo()
        {
            cout<<name<<endl<<*marksptr<<endl;
        }

        Student(Student &obj)
        {
            this->name = obj.name;
            marksptr = new int;
            *marksptr = *obj.marksptr;
        }
    };

    class der : public Student
    {
        void getinfo()
        {
            cout<<"method calling from the derived class"<<endl;
        }
    };

main(){
 Student s1("user1" , 80);
 Student s2(s1);
//  s2.name = "user2";
// *s2.marksptr = 100;
// s1.getInfo(); 



 return 0;
 }