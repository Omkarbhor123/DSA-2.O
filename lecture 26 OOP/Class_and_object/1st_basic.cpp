#include <iostream>
using namespace std;

// padding and alignment :
//Structure padding is the addition of some empty bytes of memory in the structure to naturally align the data members in the memory. It is done to minimize the CPU read cycles to retrieve different data members in the structure.

class myClass
{
    // by default access modifier is private
    // when we just define the class memory is not allocated to it but when we create object of the same class then memory is get allocated to it which is equal to the size of the attributes in the class but not always (see padding and alignment concept)
    // for example if class contains variables of data type int ,char then size of the object is 4byte +1byte = 5byte
    // when we define empty class and we create object of the class then memory is allocated which is equal to (1 byte)

    // by default access modifier is private

private: // data members are accessible only by the class members
    int level;

public: // this data members we can access both outside and inside the class
    int health;

    void print()
    {
        cout << "the health is :" << health << endl;
        cout << "the level is :" << level << endl; // we are able to access the level data member eventhough it is private bez private data members are accessible inside the class but that can not be accessed outside the class
    }

    // private data members are accessible only by the class members but we can access the private data members outside the class indirectly using  members functions of the class
    // lets see

    void setLevel(int l)
    {
        level = l;
    }
    void setHealth(int h)
    {
        health = h;
    }

    int getHealth()
    {
        return health;
    }

    int getLevel()
    {
         return level;
    }


};
int main()
{
    // object we can create statically or dynamically 

    // 1) statically
    myClass obj;
    //  cout<<sizeof(obj);
    // obj.print();

    // obj.health =23;
    //obj.level =75;
    cout << "the health is :" << obj.health << endl; // health is declared using  public access modifier so it is accessible here
    // cout<<"the level is :"<<obj.level<<endl; // level is declared using private access modifier so it is not  accessible here outside the clas it will give error

// accessig private data member of class outside the class using member functions of the class 

    obj.setLevel(35);
    obj.setHealth(100);

    cout << "the health is :" << obj.getHealth() << endl; 
    cout << "the level is :" << obj.getLevel() << endl; 



// 2) Dynamically object creation using pointer (they are created on heap)

// syntax : 
//          className *objectName ;
//          objectName = new className;

// ----------------- OR --------------

//  className *objectName  = new className;

/* ------------------------------  the reference to the dynamic object --------------------

 The address of dynamic objects returned by the new operator can be dereferenced and a reference to them can be created.

Syntax:

ClassName &RefObj = * (new ClassName);

 The reference to object RefObj can be used as a normal object. The memory allocated to such objects cannot be released except during the termination of the program. */


myClass *ob = new myClass;

ob->setHealth(50);
ob->setLevel(130);


cout << "the health is :" << (*ob).getHealth() << endl; //by derefereincing the object
    cout << "the level is :" <<(*ob).getLevel() << endl; 

// ------------------------ OR -----------------

cout << "the health is :" << ob -> getHealth() << endl; 
    cout << "the level is :" << ob -> getLevel() << endl; 

    return 0;
}
