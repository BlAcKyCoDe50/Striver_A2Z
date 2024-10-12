   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    class AB
    {
        int a = 0;
        public:
        // void show()
        // {
        //     cout<<"The value of private variable a is: "<<a<<endl;
        // }
        friend void update(AB &d);
        friend void show(AB &d);
        friend class secondclass;
    };

    void update(AB &d)
    {
        d.a = 5;
    }
    void show(AB &d)
    {
        cout<<"The value of private variable of class AB is :"<<d.a<<endl;
    }

    class secondclass
    {
        public:
      void bbshow(AB&obj)  
      {
        cout<<"The value of private variable of AB through bb is : "<<obj.a<<endl;
      }
    };




main(){
    AB a ;
    update(a);
    show(a);

    secondclass j;
    j.bbshow(a);

 return 0;
 }