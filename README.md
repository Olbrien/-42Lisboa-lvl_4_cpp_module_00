###### <i>Recent Update on 27/09/2021.</i>
• Started the project.

## Subject:

You can find the subject of these projects

[cpp_module_00](https://github.com/Olbrien/42Lisboa-lvl_4_cpp_modules/blob/main/cpp_module_00/extras/lvl_4_cpp_module_00.pdf)\
[cpp_module_01](https://github.com/Olbrien/42Lisboa-lvl_4_cpp_modules/blob/main/cpp_module_01/extras/lvl_4_cpp_module_01.pdf)\
[cpp_module_02](https://github.com/Olbrien/42Lisboa-lvl_4_cpp_modules/blob/main/cpp_module_02/extras/lvl_4_cpp_module_02.pdf)\
[cpp_module_03](https://github.com/Olbrien/42Lisboa-lvl_4_cpp_modules/blob/main/cpp_module_03/extras/lvl_4_cpp_module_03.pdf)\
[cpp_module_04](https://github.com/Olbrien/42Lisboa-lvl_4_cpp_modules/blob/main/cpp_module_04/extras/lvl_4_cpp_module_04.pdf)\
[cpp_module_05](https://github.com/Olbrien/42Lisboa-lvl_4_cpp_modules/blob/main/cpp_module_05/extras/lvl_4_cpp_module_05.pdf)\
[cpp_module_06](https://github.com/Olbrien/42Lisboa-lvl_4_cpp_modules/blob/main/cpp_module_06/extras/lvl_4_cpp_module_06.pdf)\
[cpp_module_07](https://github.com/Olbrien/42Lisboa-lvl_4_cpp_modules/blob/main/cpp_module_07/extras/lvl_4_cpp_module_07.pdf)\
[cpp_module_08](https://github.com/Olbrien/42Lisboa-lvl_4_cpp_modules/blob/main/cpp_module_08/extras/lvl_4_cpp_module_08.pdf)

In general these projects contain:
- Namespace, class, member functions, stdio stream, initialization lists, static, const
- Memory allocation, references, pointers to members, switch
- Ad-hoc polymorphism, operators overload, orthodox canonical classes
- Inheritance, the diamond problem
- Shallow copy, deep copy, subtype polymorphism, abstract classes, concrete classes, interfaces
- Nested classes, repetition and exceptions
- Implicit and explicit conversions, reinterpret cast, static cast, dynamic cast, const cast, upcasting and downcasting
- Function templates, class templates and template specialization
- Standard Template Library (STL)


## Research:

<pre>
---------------------------------------------------------------------------------------------

What is C++?

    C++ is a cross-platform language that can be used to create high-performance applications.
    C++ is an object-oriented programming language which gives a clear structure to programs
    and allows code to be reused, lowering development costs.


What is Object-Oriented Programming (OPP)?

    Procedural programming is about writing procedures or functions that perform operations on
    the data, while object-oriented programming is about creating objects that contain both data
    and functions.


---------------------------------------------------------------------------------------------

Hello World:

    #include <iostream>
    using namespace std;

    int main() {
    cout << "Hello World!";
    return 0;
    }

1)  #include <iostream>

    Is a header file library that lets us work with input and output objects,
    such as cout (used in line 5). Header files add functionality to C++ programs.

2)  using namespace std

    Means that we can use names for objects and variables from the standard library.

3) cout (pronounced "see-out")

    Is an object used together with the insertion operator (<<) to output/print text.
    It will output "Hello World".


Hello World without Namespace:

    #include <iostream>

    int main() {
    std::cout << "Hello World!";
    return 0;
    }


---------------------------------------------------------------------------------------------

Line Break:

        #include <iostream>

        int main() {
        std::cout << "Hello World!" << endl;
        return 0;
        }

    or:

        #include <iostream>

        int main() {
        std::cout << "Hello World!\n";
        return 0;
        }


---------------------------------------------------------------------------------------------

Variables:

    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean

Constants:

    const float num = 3.14;

    This are read only and can't be changed.
    You should always declare the variable as constant when you have values that are
    unlikely to change.

    const can be on right or left. If it's on right, it's reading on what's on the left,
    if it's on the left and there's nothing on the right, it's reading on the right of it.

        canonicalform(canonicalform const & obj);   // Same
        canonicalform(const canonicalform & obj);   // Same


Constants Classes / Functions:

    Example:

            class ConstFunc {
                public:
                    int hello(int a) const{
                        this->_number;
                    }
                private:
                    int _number;
            };

        This const after hello is the same as having:

                int hello(const ConstFunc* this, int a) const{
                    this->_number;
                }

        If you don't have a const at the end it's the same as:

                int hello(ConstFunc* this, int a){
                    this->_number;
                }


---------------------------------------------------------------------------------------------

What are Classes and Objects?

    Classes and objects are the two main aspects of object-oriented programming.

    Example:

        Class:      Fruit
        Objects:    Apple, Banana, Mango


    So, a class is a template for objects, and an object is an instance of a class.
    When the individual objects are created, they inherit all the variables and functions from the class.


Create a Class:

    class MyClass {       // The class
        public:           // Access specifier
            int myNum;        // Attribute (int variable)
            string myString;  // Attribute (string variable)
    };

    int main() {
        MyClass myObj;  // Create an object of MyClass

        // Access attributes and set values
        myObj.myNum = 15;
        myObj.myString = "Some text";

        // Print attribute values
        cout << myObj.myNum << "\n";
        cout << myObj.myString;
        return 0;
    }


Class Methods:

    Methods are functions that belongs to the class.

    There are two ways to define functions that belongs to a class:

        Inside class definition
        Outside class definitition


    Inside Class definition:

        class MyClass {                 // The class
            public:                     // Access specifier
                void myMethod() {       // Method/function defined inside the class
                cout << "Hello World!";
                }
        };

        int main() {
            MyClass myObj;     // Create an object of MyClass
            myObj.myMethod();  // Call the method
            return 0;
        }


    Outside Class definition:

        class MyClass {             // The class
            public:                 // Access specifier
                void myMethod();    // Method/function declaration
        };

        // Method/function definition outside the class
        void MyClass::myMethod() {
            cout << "Hello World!";
        }

        int main() {
            MyClass myObj;     // Create an object of MyClass
            myObj.myMethod();  // Call the method
            return 0;
        }


---------------------------------------------------------------------------------------------

Constructors:

    A constructor in C++ is a special method that is automatically called when an object
    of a class is created.

    The constructor has the same name as the class, it is always public, and it does not
    have any return value.

        #include <iostream>

        using namespace std;

        class constructor {
            public:
                int green;
                constructor() {
                    cout << "HELLOOOOO\n";
                }
        };

        int main() {
            constructor obj;
        }


Constructor Parameters:

    Constructors can also take parameters (just like regular functions), which can be
    useful for setting initial values for attributes.

        #include <iostream>

        using namespace std;

        class constructorparams {
            public:
                int numberOne;
                int numberTwo;
                int numberThree;

                constructorparams(int x, int y, int z) {
                    numberOne = x;
                    numberTwo = y;
                    numberThree = z;
                }
        };

        int main() {
            constructorparams obj = {1, 2, 3};

            cout << obj.numberOne << endl;
            cout << obj.numberTwo << endl;
            cout << obj.numberThree << endl;

        }


Constructor Outside Class:

    #include <iostream>

    using namespace std;

    class constructorparamsoutside {
        public:
            int numberOne;
            int numberTwo;
            int numberThree;

            constructorparamsoutside(int x, int y, int z);
    };

    constructorparamsoutside::constructorparamsoutside(int x, int y, int z) {
        numberOne = x;
        numberTwo = y;
        numberThree = z;
    }

    int main() {
        constructorparamsoutside obj1 = {1, 2, 3};
        constructorparamsoutside obj2 = {4, 5, 6};

        cout << obj1.numberOne << endl;
        cout << obj1.numberTwo << endl;
        cout << obj1.numberThree << endl;

        cout << obj2.numberOne << endl;
        cout << obj2.numberTwo << endl;
        cout << obj2.numberThree << endl;
    }

Destructor:

    A constructor in C++ is a special method that is automatically called when an object
    of a class is deleted;

        #include <iostream>

        class constructordestructor {
            public:
                constructordestructor();
                ~constructordestructor();
        };

        constructordestructor::constructordestructor() {
            std::cout << "I CONSTRUCTED";
        }

        constructordestructor::~constructordestructor() {
            std::cout << "I DESTROYED IT";
        }

        int main() {
            constructordestructor obj;
        }


---------------------------------------------------------------------------------------------

Access Specifiers:

In C++, there are three access specifiers:

    Public - Members are accessible from outside the class
    Private - Members cannot be accessed (or viewed) from outside the class
    Protected - Members cannot be accessed from outside the class, however, they can be
                accessed in inherited classes.


Encapsulation

    The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
    To achieve this, you must declare class variables/attributes as private
    (cannot be accessed from outside the class). If you want others to read or modify
    the value of a private member, you can provide public get and set methods.


Access Private Members

    To access a private attribute, use public "get" and "set" methods

        #include <iostream>

        using namespace std;

        class classesencapsulating {
            private:
                string band;

            public:
                void setBand(string x) {
                    band = x;
                }
                string getBand() {
                    return band;
                }
        };

        int main() {
            classesencapsulating obj;
            obj.setBand("Eskimo Callboy");
            cout << obj.getBand() << endl;
        }


---------------------------------------------------------------------------------------------

Inheritance:

    It is possible to inherit attributes and methods from one class to another.
    We group the "inheritance concept" into two categories:

        derived class (child) - the class that inherits from another class
        base class (parent) - the class being inherited from

    To inherit from a class, use the : symbol

        #include <iostream>

        using namespace std;

        class inheritance {
            public:
                string computers = "Mac";
                void test() {
                    cout << "This computer is sheit\n";
                }
        };

        class car: public inheritance {
            public:
                string computers2;
        };

        int main() {
            car obj;

            obj.computers2 = "Window";
            obj.test();

            cout << obj.computers << endl;
            cout << obj.computers2 << endl;

        }


Why And When To Use "Inheritance"?

    It is useful for code reusability: reuse attributes and methods of an existing class
    when you create a new class.


Multilevel Inheritance:

    #include <iostream>

    class inheritanceMultilevel {
        public:
            inheritanceMultilevel() {
                std::cout << "HERO";
            }
    };

    class dog: public inheritanceMultilevel {
    };

    class cat: public dog {
    };

    int main() {
        cat obj;
    }


Multiple Inheritance:

    #include <iostream>

    using namespace std;

    class myClass {
        public:
            void hello() {
                cout << "Hello!\n";
            }
    };

    class secondClass {
        public:
            void goodbye() {
                cout << "Goodbye!\n";
            }
    };

    class multi: public myClass, public secondClass {
    };

    int main() {
        multi obj;

        obj.hello();
        obj.goodbye();
    }


Virtual:

    When dealing with Multiple Inheritances you may end up sharing the same base.
    When you share the same base you will end up with ambiguities.
    To deal with those problems you have to use the Virtual keyword.

    Example:

                                 Class Base()
                                 [int number]
                                 [float life]

                                 /          \
                                /            \

              Class Middle_One()          Class Middle_Two()
                 [int number]                [int number]
                 [float life]                [float life]

                            \                    /
                             \                  /

                                  Class Top()
                                  [int number]
                                  [int number]
                                  [float life]
                                  [float life]

        In this case Class Top() is going to inherit from Middle_One and Middle_Two, but the
        problem is that both of them inherit from Base, and when it goes to the top it has
        multiple number and life.

        To solve this you have to inherit Base as a Virtual.

                                 Class Base()
                                 [int number]
                                 [float life]

                                 /          \
                    VIRTUAL     /            \  VIRTUAL

              Class Middle_One()          Class Middle_Two()

                            \                    /
                             \                  /

                                  Class Top()

    In Code:

            #include <iostream>

            class Base {
                public:
                    Base(){ std::cout << "Base Created!" << std::endl; };
                    ~Base(){ std::cout << "Base Destroyed!" << std::endl; };

                    void mother() {
                        std::cout << "Soy lá madre, me llamo " << _name << std::endl;
                    }

                    void setName(std::string name) {
                        _name = name;
                    }

                protected:
                    std::string     _name;
            };

            class Middle_One : virtual public Base {
                public:
                    Middle_One(){ std::cout << "Middle_One Created!" << std::endl; };
                    ~Middle_One(){ std::cout << "Middle_One Destroyed!" << std::endl; };
            };

            class Middle_Two : virtual public Base {
                public:
                    Middle_Two(){ std::cout << "Middle_Two Created!" << std::endl; };
                    ~Middle_Two(){ std::cout << "Middle_Two Destroyed!" << std::endl; };
            };

            class Top : public Middle_One, public Middle_Two {
                public:
                    Top(){ std::cout << "Top Created!" << std::endl; };
                    ~Top(){ std::cout << "Top Destroyed!" << std::endl; };
            };

            int main() {
                Top         t_1;

                t_1.setName("Tiagão.");
                t_1.mother();
            }

https://www.geeksforgeeks.org/multiple-inheritance-in-c/


---------------------------------------------------------------------------------------------

Access Specifiers Protected:

    #include <iostream>

    using namespace std;

    class myClass {
        protected:
            int red;
    };

    class inher: public myClass {
        public:
            void setRed(int number) {
                red = number;
            }

            int getRed() {
                return red;
            }

    };

    int main() {
        inher obj;

        obj.setRed(10);
        cout << obj.getRed() << endl;
    }


---------------------------------------------------------------------------------------------

Polymorphism:

    Polymorphism means "many forms", and it occurs when we have many classes that are
    related to each other by inheritance.

        #include <iostream>

        using namespace std;

        class Animal {
            public:
                void animalSound() {
                cout << "The animal makes a sound \n" ;
            }
        };

        class Pig : public Animal {
            public:
                void animalSound() {
                cout << "The pig says: wee wee \n" ;
            }
        };

        class Dog : public Animal {
            public:
                void animalSound() {
                cout << "The dog says: bow wow \n" ;
            }
        };

        int main() {
            Animal myAnimal;
            Pig myPig;
            Dog myDog;

            myAnimal.animalSound();
            myPig.animalSound();
            myDog.animalSound();
            return 0;
        }


---------------------------------------------------------------------------------------------

Exceptions:

    Exception handling in C++ consist of three keywords: try, throw and catch:

        - The try statement allows you to define a block of code to be tested for errors while
            it is being executed.
        - The throw keyword throws an exception when a problem is detected, which lets us
            create a custom error.
        - The catch statement allows you to define a block of code to be executed, if an error
            occurs in the try block.

            #include <iostream>

            using namespace std;

            int main() {
                try {
                    int age = 15;
                    if (age >= 18) {
                        cout << "Access Granted!" << endl;
                    } else {
                        throw(age);
                    }
                }
                catch (int myNum) {
                    cout << "Access Denied!" << endl;
                    cout << "Age is " << myNum << endl;
                }
            }

---------------------------------------------------------------------------------------------

Namespaces:

    #include <stdio.h>

    namespace foo {
    int gl_var = 3;
    int f(void) {return 4; }
    }

    namespace bar {
    int gl_var = 4;
    int f(void) {return 5; }
    }

    namespace moo {
    int gl_var = 5;
    int f(void) {return 6; }
    }

    namespace bah = moo;

    int main() {
        printf("%d\n", foo::gl_var);
        printf("%d\n", foo::f());

        printf("%d\n", bah::gl_var);
        printf("%d\n", bah::f());
    }


---------------------------------------------------------------------------------------------

Static:

    Statics in classes persist.

    To make a static variable you have to declare it outside the class, otherwise you will get
    "Undefined symbols for architecture x86_64:".

    Also you need to declare the static as "staticClass::_count".


        #include <iostream>

        class staticClass {
            public:
                staticClass();
                ~staticClass();

                int getCount();

            private:
                static int _count;
        };

        int staticClass::_count = 0;

        staticClass::staticClass() {
            staticClass::_count++;
        }

        staticClass::~staticClass() {
            staticClass::_count--;
        }

        int staticClass::getCount() {
            return this->_count;
        }


        int main() {
            staticClass obj;
            staticClass obj2;
            staticClass obj3;

            std::cout << obj.getCount() << std::endl;
            std::cout << obj2.getCount() << std::endl;
            std::cout << obj3.getCount() << std::endl;
        }


---------------------------------------------------------------------------------------------

Memory Allocation:

    New and Delete:

        Dynamic memory allocation in C/C++ refers to performing memory allocation manually
        by programmer.
        Dynamically allocated memory is allocated on Heap and non-static and local
        variables get memory allocated on Stack.

        This is the same as doing "malloc(sizeof(type))" in C.


        Example 1 (New):

            int main() {
                int p = new int(12);
                if (p == NULL)
                    std::cout << "Error Allocation\n";

                std::cout << *p << "\n";
            }

        Example 2 (New):

            int main() {
                int *p = NULL;
                p = new int;
                if (p == NULL)
                    std::cout << "Error Allocation\n";

                *p = 10;

                std::cout << *p << "\n";
            }

        Example 3 (New without Delete):

            class Student {
                public:
                    Student() { std::cout << "Created!\n";}
                    ~Student() { std::cout << "Destroyed!\n";}

            };

            int main() {
                Student student1;
                Student *student2 = new Student;
            }

                Output: Created!
                        Created!
                        Destroyed!

            (In this case, you didn't Delete the Memory you allocated, therefor it was never destroyed)


        Example 4 (New with Delete):

            class Student {
                public:
                    Student() { std::cout << "Created!\n";}
                    ~Student() { std::cout << "Destroyed!\n";}

            };

            int main() {
                Student student1;
                Student *student2 = new Student;

                delete student2;
            }

                Output: Created!
                        Created!
                        Destroyed!
                        Destroyed!


---------------------------------------------------------------------------------------------

References:

    With references, you don't need to dereference the address to access the data value.


    Example 1 (Variables):

        #include <iostream>

        int main() {

            int     numberOfBalls = 42;

            int     *ballsPtr = &numberOfBalls;
            int     &ballsRef = numberOfBalls;

            std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

            *ballsPtr = 10;

            std::cout << numberOfBalls << std::endl;

            ballsRef = 20;

            std::cout << numberOfBalls << std::endl;
        }


    Example 2 (Functions):

        void byPtr(int *numberOfBalls) {
            *numberOfBalls = 100;
        }

        void byPtrConst(int const *numberOfBalls) {
            std::cout << *numberOfBalls << std::endl;
        }

        void byRef(int &numberOfBalls) {
            numberOfBalls = 123;
        }

        void byRefConst(int const &numberOfBalls) {
            std::cout << numberOfBalls << std::endl;
        }

        int main() {

            int     numberOfBalls = 42;

            byPtr(&numberOfBalls);
            byPtrConst(&numberOfBalls);
            byRef(numberOfBalls);
            byRefConst(numberOfBalls);
        }


---------------------------------------------------------------------------------------------

How to read and write from a file:

    C++ library called fstream, which defines three new data types:

        ofstream:
            This data type represents the output file stream and is used to create files and
            to write information to files.

            Has "ios::out" as default.

        ifstream:
            This data type represents the input file stream and is used to read information
            from files.

            Has "ios::in" as default.

        fstream:
            This data type represents the file stream generally, and has the capabilities of both
            ofstream and ifstream which means it can create files, write information to files,
            and read information from files.

            Has "ios::out and ios::in" as default.


    To perform file processing in C++, header files <iostream> and <fstream> must be
    included in your C++ source file.

        ios::in	        Open for input operations.
        ios::out	    Open for output operations.
        ios::binary	    Open in binary mode.
        ios::ate	    Set the initial position at the end of the file.
                        If this flag is not set, the initial position is the beginning of the file.
        ios::app	    All output operations are performed at the end of the file, appending the content to
                        the current content of the file.
        ios::trunc	    If the file is opened for output operations and it already existed, its previous content
                        is deleted and replaced by the new one.


    Example (Have one file called fstream.txt with text there):

        #include <iostream>
        #include <fstream>

        int main() {

            std::string line;
            std::fstream filename;

            /* Reading from filename */

            filename.open("fstream.txt"); // ios::out and ios::in as default.
            if (filename.is_open()) {
                while (std::getline(filename, line)) {
                    std::cout << line << std::endl;
                }
            }
            filename.close();


            /* Writing to the filename */

            line = "\nHELLO \nIS IT ME YOU'RE LOOKInG FOR?\n";

            filename.open("fstream.txt", std::ios::in | std::ios::app); // ios::out and ios::in as default and added append.
            if (filename.is_open()) {
                filename << line;
            }
            filename.close();


            /* Reading from filename */

            filename.open("fstream.txt"); // ios::out and ios::in as default.
            if (filename.is_open()) {
                while (std::getline(filename, line)) {
                    std::cout << line << std::endl;
                }
            }
            filename.close();

        }



https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm
https://www.cplusplus.com/doc/tutorial/files/


---------------------------------------------------------------------------------------------

Function Pointers:

    A function pointer, also called a subroutine pointer or procedure pointer, is a pointer
    that points to a function. Function pointers can be used to simplify code by providing
    a simple way to select a function to execute based on run-time values.


    Example (Normal Data Pointers):

            void    helloNumber(int a) {
                printf("%d\n", a);
            }

            void    helloWorld() {
                printf("Hello World\n");
            }

            int main() {
                void (*helloWorld_ptr)() = &helloWorld;
                (*helloWorld_ptr)();

                void (*helloNumber_ptr)(int) = &helloNumber;
                (*helloNumber_ptr)(123555);
            }


    Example (Without Address):

            void    helloNumber(int a) {
                printf("%d\n", a);
            }

            void    helloWorld() {
                printf("Hello World\n");
            }

            int main() {
                void (*helloWorld_ptr2)() = helloWorld;
                helloWorld_ptr2();

                void (*helloNumber_ptr2)(int) = helloNumber;
                helloNumber_ptr2(99);
            }


    Example (Switch Case):

            void    caseOne(int a) {
                printf("Case One = %d\n", a);
            }

            void    caseTwo(int a) {
                printf("Case Two = %d\n", a);
            }

            void    caseThree(int a) {
                printf("Case Three = %d\n", a);
            }

            int main() {

                void (*cases[])(int) = {caseOne, caseTwo, caseThree};

                (*cases[0])(1);
                (*cases[1])(2);
                (*cases[2])(3);
            }


    Example (As an Argument):

            void    asAnArgumentOne(void (*func)()) {
                func();
            }

            void    asAnArgumentTwo(void (*func)(int), int value) {
                func(value);
            }

            void    helloNumber(int a) {
                printf("%d\n", a);
            }

            void    helloWorld() {
                printf("Hello World\n");
            }

            int main() {

                void (*helloWorld_ptr3)() = &helloWorld;
                asAnArgumentOne(helloWorld_ptr3);

                void (*helloNumber_ptr3)(int) = &helloNumber;
                asAnArgumentTwo(helloNumber_ptr3, 123);
            }


    Example (As a Class):

            class Karen {
            public:
                void complain ();

            private:
                void debug ( void );
                void info ( void );
                void warning ( void );
                void error ( void );

            };

            void Karen::complain() {

                void (Karen::*casePtr[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

                (this->*casePtr[0])();
                (this->*casePtr[1])();
                (this->*casePtr[2])();
                (this->*casePtr[3])();
            }

            void Karen::debug(void) {
                std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
            }

            void Karen::info(void) {
                std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
            }

            void Karen::warning(void) {
                std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month!" << std::endl;
            }

            void Karen::error(void) {
                std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
            }

            int main() {

                Karen julia;

                julia.complain();
            }



---------------------------------------------------------------------------------------------

Function Overloading:

    C++ allows you to specify more than one definition for a function name or an operator
    in the same scope, which is called function overloading and operator overloading
    respectively.

        class printData {
            public:
                void print(int i) {
                    cout << "Printing int: " << i << endl;
                }
                void print(double  f) {
                    cout << "Printing float: " << f << endl;
                }
                void print(char* c) {
                    cout << "Printing character: " << c << endl;
                }
        };


Operator Overloading:

    #include <iostream>

    class operatoroverload {
        public:
            operatoroverload(float c, float b) : _cima(c), _baixo(b){};
            ~operatoroverload(){};

            double  getVolume(void) {
                return _cima + _baixo;
            }
            void setCima(float cima) {
                _cima = cima;
            }
            void setBaixo(float baixo) {
                _baixo = baixo;
            }

            operatoroverload operator+(const operatoroverload& o) {
                operatoroverload obj(0, 0);

                obj._baixo = this->_baixo + o._baixo;
                obj._cima = this->_cima + o._cima;

                return obj;
            }

            operatoroverload operator-(const operatoroverload& o) {
                operatoroverload obj(0, 0);

                obj._baixo = this->_baixo - o._baixo;
                obj._cima = this->_cima - o._cima;

                return obj;
            }


        private:
            float   _cima;
            float   _baixo;
    };

    int main() {

        operatoroverload obj1(2, 2);
        operatoroverload obj2(4, 4);
        operatoroverload obj3(0, 0);

        std::cout << obj1.getVolume() << std::endl;
        std::cout << obj2.getVolume() << std::endl;
        std::cout << obj3.getVolume() << std::endl;

        obj3 = obj1 + obj2;
        std::cout << obj3.getVolume() << std::endl;

        obj3 = obj2 - obj1;
        std::cout << obj3.getVolume() << std::endl;

    }


---------------------------------------------------------------------------------------------

Canonical Form (Orthodox Canonical Class Form):

    The Canonical Form for C++99 is the following:

        . Default constructor
        . Copy constructor
        . Destructor
        . Copy assignment operator


    Example:

        #include <iostream>

        class canonicalform {
            public:
                canonicalform();                                            // canonical form
                canonicalform(int number);
                canonicalform(canonicalform const & obj);                   // canonical form

                ~canonicalform();                                           // canonical form

                canonicalform & operator=(canonicalform const & obj);       // canonical form

                int getNumber();
                void setNumber(int number);

            private:
                int _number;
        };

        canonicalform::canonicalform() {
            return ;
        }

        canonicalform::canonicalform(int number) : _number(number) {
            return ;
        }

        canonicalform::canonicalform(canonicalform const & obj) {
            _number = obj._number;
            return ;
        }

        canonicalform::~canonicalform() {
            std::cout << "Hello I just fucking died" << std::endl;
        }

        canonicalform & canonicalform::operator=(canonicalform const & obj) {
            return *this;
        }

        int canonicalform::getNumber() {
            return _number;
        }

        void canonicalform::setNumber(int number) {
            _number = number;
        }

        int main() {
            canonicalform obj1(5);
            std::cout << obj1.getNumber() << std::endl;

            canonicalform obj2(obj1);
            std::cout << obj2.getNumber() << std::endl;

            canonicalform obj3 = obj2;
            std::cout << obj3.getNumber() << std::endl;
        }

---------------------------------------------------------------------------------------------

Radix Character:

    In mathematics and computing, a radix point or radix character is a symbol used in the
    display of numbers to separate the integer part of the value from its fractional part.

    Any such symbol can be called a decimal mark, decimal marker or decimal sign. Symbol-specific
    names are also used; decimal point and decimal comma.

    Decimal Point = '.'
    Decimal Comma = ','


Print Binary Number:

        #include <stdio.h>
        #include <unistd.h>

        void printbits(unsigned char v) {
            int i = 7;
            while(i >= 0) {
                putchar('0' + ((v >> i) & 1));
                i--;
            }
        }

        int main() {
            char binary = 'a';
            printbits(binary);
        }

        Output = 01100001


    Explanation:

        So, you make a character, in this case it's 'a'.
        If you go to the ascii table, you know that 'a' is 97.


        128      64      32      16       8       4       2       1
        2^7     2^6     2^5     2^4     2^3     2^2     2^1     2^0
    -----------------------------------------------------------------
         0        1       1       0       0       0       0       1     = 97


        Now you shift to the right your 'a' or 01100001 by 7, then 6, 5, 4, 3, 2, 1 and 0.
        Why? Because you're shifting the 8 bits.

        And you are comparing every single one to the 1 or 00000001 with the binary "AND" operator, '&'.

        "AND" & = Copies a bit to the result if it exists in both operands.
                  Meaning if you have       10010001
                                 and        11000001
                                          ------------
                             the & is =     10000001



                       01100001                  00000001
                    ---------------     &      ------------     =
        Shift 7        00000000                  00000001               0
        Shift 6        00000001                  00000001               1
        Shift 5        00000011                  00000001               1
        Shift 4        00000110                  00000001               0
        Shift 3        00001100                  00000001               0
        Shift 2        00011000                  00000001               0
        Shift 1        00110000                  00000001               0
        Shift 0        01100001                  00000001               1


        This will print the binary number!



Binary Representation:

    Char = 8 bits (1 byte)

        Depending on what you write and the processor the data type can be "unsigned char"
        or "signed char".


        Unsigned Char (0 to 255)

                  (128)   (64)    (32)    (16)     (8)     (4)     (2)     (1)

                   2^7     2^6     2^5     2^4     2^3     2^2     2^1     2^0
            ----------------------------------------------------------------------
                    0       0       0       0       0       0       0       0       = 0
                    1       1       1       1       1       1       1       1       = 255
                    1       0       0       0       0       0       0       1       = 129


        Signed Char (-128 to +127)

                 (-128)   (64)    (32)    (16)     (8)     (4)     (2)     (1)

                  -2^7     2^6     2^5     2^4     2^3     2^2     2^1     2^0
            ----------------------------------------------------------------------
                    0       0       0       0       0       0       0       0       = 0
                    1       1       1       1       1       1       1       1       = -1
                    0       1       1       1       1       1       1       1       = 127
                    0       0       0       1       0       1       0       1       = 21
                    1       0       0       1       0       1       0       1       = -107


    Int = 32 bits (4 bytes)

        Same deal, Int can be Unsigned or Signed but if left undefined it will be signed.


        Signed Int (-2,147,483,648 to 2,147,483,647)


               -2^31   -2147483648   |     1
                2^30    1073741824   |     1
                2^29     536870912   |     1
                2^28     268435456   |     1
                2^27     134217728   |     1
                2^26      67108864   |     1
                2^25        ...      |     1
                2^24        ...      |     1
                2^23        ...      |     1
                2^22        ...      |     1
                2^21        ...      |     1
                2^20        ...      |     1
                2^19        ...      |     1
                2^18        ...      |     1
                2^17        ...      |     1
                2^16        ...      |     1
                2^15        ...      |     1
                2^14        ...      |     1
                2^13        ...      |     1
                2^12        ...      |     1
                2^11        ...      |     1
                2^10        ...      |     1
                2^9         ...      |     1
                2^8         ...      |     1
                2^7         ...      |     1
                2^6         ...      |     1
                2^5         ...      |     1
                2^4         ...      |     1
                2^3         ...      |     1
                2^2          4       |     1
                2^1          2       |     1
                2^0          1       |     1
            ---------------------------------------
                            -1


    Long ints are 64 bits (8 bytes)

        Follows the same logic as above but for 64 bits



Bases:

    Binary is represented in base 2.
    Because it's 0 and 1.

        10001001
                ²

    Decimal system or Denary is represented in base 10.
    Because it's 0 1 2 3 4 5 6 7 8 and 9.

        137
           ¹⁰




Fixed Point Numbers:

    These are for numbers that use fractions.

    Fractional Binary numbers have two parts, bits that represent the integer number (the part
    before the radix point) and the bits that represent the fractional part (the part
    after the radix point).


        Example 1 (Middle Range / Middle Accuracy):

            . 8 bit number
                - 4 integer numbers
                - 4 fractional parts

            The Radix Point is in the middle.

            This means the Range and Accuracy are in the same for both. It isn't very accurate or
            imprecise, it's in the middle.


                           Integer Number                            Fractional Part
                               Range                                    Accuracy
                 <-------------------------------->       <---------------------------------------->

                    (8)     (4)     (2)     (1)      (.)     (0.5)    (0.25)   (0.125)   (0.0625)

                    2^3     2^2     2^1     2^0       .       2^-1     2^-2     2^-3       2^-4
            -------------------------------------------------------------------------------------------
                     0       1       1       0                  1        0        0          0        =   6.5
                     1       1       1       1                  1        1        1          1        =   15.9375 (max)


        Example 2 (High Range / Low Accuracy):

            . 8 bit number
                - 7 integer numbers
                - 1 fractional parts

            The Radix Point is in the middle.

            This means the Range is higher, the int value can be higher, but the accuracy is lower.


                                        Integer Number                              Fractional Part
                                            Range                                      Accuracy
                 <---------------------------------------------------------->        <---------->

                    (64)    (32)    (16)    (8)      (4)       (2)      (1)      (.)    (0.5)

                    2^6     2^5     2^4     2^3      2^2       2^1      2^0       .      2^-1
            -------------------------------------------------------------------------------------------
                     0       1       1       0        1         0        0                 0        =   52
                     1       1       1       1        1         1        1                 1        =   127.5 (max)


        Example 3 (Low Range / High Accuracy):

            . 8 bit number
                - 1 integer numbers
                - 7 fractional parts

            The Radix Point is in the middle.

            This means the Range is lower, the int value is less, but the accuracy is higher, it has more
            precision.


               Integer Number                              Fractional Part
                   Range                                      Accuracy
                <--------->    <------------------------------------------------------------------------------>

                    (1)    (.)    (0.5)    (0.25)    (0.125)   (0.0625)   (0.03125)  (0.015625)  (0.0078125)

                    2^1     .     2^-1      2^-2       2^-3      2^-4        2^-5       2^-6        2^-7
            ------------------------------------------------------------------------------------------------------
                     0              1         1          0        1            0          0           0        =   0.8125
                     1              1         1          1        1            1          1           1        =   1.9921875 (max)



Floating Point Numbers:

    When you do 1/3 you get = 0.3333333333333...
    If you do     if (1/3 == 0.33333333...)     it will never be equal.

    Float, Double and Long Doubles have different precisions.
    You can see their precisions like this:

            #include <iostream>
            #include <float.h>

            int main() {
                std::cout << "Float Trust Digits (Precise Digits) = " << FLT_DIG << std::endl;
                std::cout << "Double Trust Digits (Precise Digits) = " << DBL_DIG << std::endl;
                std::cout << "Long Double Trust Digits (Precise Digits) = " << LDBL_DIG << std::endl;
            }


            Float Trust Digits (Precise Digits) = 6
            Double Trust Digits (Precise Digits) = 15
            Long Double Trust Digits (Precise Digits) = 18


        This means that:

                #include <iostream>
                #include <float.h>

                int main() {
                    float a = 7.2E5 * 10000000;
                    double b = 7.2E5 * 10000000;

                    std::cout << a << std::endl;
                    std::cout << b << std::endl;
                }


                7199999918080.000000
                7200000000000.000000


            Because float is only precise to 6 digits and double to 15.


    Mantissa and Exponent:

              (exponent)
        6.02 x 10²³     =   602000000000000000000000
     (mantissa)

            This means it goes 23 decimal places after the (.)

        If you have more values in your mantissa, you can express the value with greater
        precision.



        6.02123456789 x 10²³     =  60212345678900000000000
        1.60          x 10⁻¹⁹    =  0.00000000000000000160



    Real Examples:

        Example 1:

          Mantissa = 10 bits
          Exponent = 6 bits


                    (Mantissa)                  (Exponent)
          ------------------------------------------------------
          |  0 . 1  1  0  1  0  0  0  0  0 | 0  0  0  0  1  1  |
          ------------------------------------------------------
             ^                               ^
         (negative)                      (negative)


            Step 1:
                                            -32 16 8  4  2  1
                                           --------------------
             0 . 1  1  0  1  0  0  0  0  0 | 0  0  0  0  1  1 |   = 3
                                           --------------------

             0 . 1  1  0  1  0  0  0  0  0  x  2^3


            Step 2:

                Now you go 3 houses forward with the (.)

             -8  4  2  1   0.5 0.25...
            ----------------------------------
            | 0  1  1  0 .  1  0  0  0  0  0 |   = 6.5
            ----------------------------------


                0110100000000011    =  6.5
                                ²         ¹⁰


        Example 2:

          Mantissa = 10 bits
          Exponent = 6 bits

          ----------------------------------------------------
          |  0  1  0  1  0  1  0  0  0  0 | 0  0  0  0  1  0 |
          ----------------------------------------------------

          Step 1:
                                           -32 16 8  4  2  1
                                          --------------------
                                          | 0  0  0  0  1  0 |  = 2
                                          --------------------

             0 . 1  0  1  0  1  0  0  0  0  x  2^2

          Step 2:

            Now you go 2 houses forward with the (.)

             -4   2   1   2⁻¹ 2⁻² 2⁻³ ...
            -----------------------------------------
            | 0   1   0 . 1   0   1   0   0   0   0 |  =  2.625
            -----------------------------------------

                0101010000000010    =  2.625
                                ²         ¹⁰


        Example 3:

          Mantissa = 10 bits
          Exponent = 6 bits

          ----------------------------------------------------
          |  0  1  0  0  0  0  0  0  0  0 | 1  1  1  1  1  0 |
          ----------------------------------------------------

          Step 1:

                                           -32 16 8  4  2  1
                                          --------------------
                                          | 1  1  1  1  1  0 |  = -2
                                          --------------------

            0 . 1  0  0  0  0  0  0  0  0   x  2^-2


          Step 2:

            Now you go 2 houses backwards with the (.)

           -1   2^-1  2^-2  2^-3 ...
          -----------------------------------------------
          | 0 . 0     0     1    0  0  0  0  0  0  0  0 |  =  0.125
          -----------------------------------------------

                0100000000111110    =  0.125
                                ²          ¹⁰




https://www.youtube.com/watch?v=gc1Nl3mmCuY
https://www.youtube.com/watch?v=maH28ZWR3SU
https://www.youtube.com/watch?v=cJNm938Xwao&list=PLTd6ceoshprcpen2Jvs_JiuvWvqIAkzea&index=2
                                                        (Whole Playlist)

---------------------------------------------------------------------------------------------


Overloading the << Operator for Your Own Classes:

    You can also overload the '<<' operator for your own classes.

    Example:

        #include <iostream>

        class Date {
            public:
                Date(){};
                Date(int day, int month, int year) : _day(day), _month(month), _year(year){};
                ~Date(){};
                int getDay() { return _day; };
                int getMonth() { return _month; };
                int getYear() { return _year; };
            private:
                int _day;
                int _month;
                int _year;
        };

        std::ostream & operator<<(std::ostream & os, Date & obj);

        std::ostream & operator<<(std::ostream & os, Date & obj) {
            os << obj.getDay() << "/" << obj.getMonth() << "/" << obj.getYear() << std::endl;
            return os;
        }

        int main() {
            Date obj(28, 3, 1992);

            std::cout << obj;
        }


        Output:
            28/3/1992



https://docs.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-160



---------------------------------------------------------------------------------------------

Deep Copy and Shallow Copy:

    Shallow Copy:
        Is when you copy members of the class individually. It works well if they are not allocated.
        If they are allocated you end up copying the Address and not the content itself.

        What this means is if you have allocated an "int", when you copy to another class,
        you have the same address of the class you copied, so when you alter the value of the new
        class you are altering the value of the old class as well.

        Example:
            #include <iostream>

            class shallowcopy {
                public:
                    shallowcopy() {};
                    shallowcopy(shallowcopy const & obj) {
                        this->_notAllocated = obj._notAllocated;
                        this->_allocated = obj._allocated;
                    };
                    ~shallowcopy() {};

                    void    printValues() {
                        std::cout << "Not allocated = " << _notAllocated << std::endl;
                        std::cout << "Allocated = " << *_allocated << std::endl;
                    }
                    void    setValues(int value) {
                        _notAllocated = value;

                        int *send = new (int);
                        *send = value;
                        _allocated = send;
                    }

                    void    changeValues(int value) {
                        *_allocated = value;
                        _notAllocated = value;
                    }

                private:
                    int     _notAllocated;
                    int     *_allocated;
            };

            int main() {
                shallowcopy *obj_1 = new shallowcopy();

                std::cout << "Object 1 \n";
                obj_1->setValues(999);
                obj_1->printValues();

                shallowcopy *obj_2 = new shallowcopy(*obj_1);

                std::cout << "\nObject 2 \n";
                obj_2->printValues();

                std::cout << "\nChanging Object 2 \n";
                obj_2->changeValues(10);
                obj_2->printValues();

                std::cout << "\nPrinting Object 1 \n";
                obj_1->printValues();
            }

        Explanation:
            So in this case you have:
            - int     _notAllocated;
            - int     *_allocated;

            When you create obj_1, you set setValues() for the int normally, and for the
            *int has an allocation.

            When you copy your obj_1 to obj_2, you copy the int normally and you copy the *int,
            but you are copying the address and not the content.

            What means, and shown in this example, if you alter the value of the _allocated
            on the obj_2, you are also changing on the obj_1 and vice-versa.


    Deep Copy:

        In this example, instead of just copying the address of the _allocated you make
        a new copy of the content and not the address.

        Example:

            #include <iostream>

            class deepcopy {
                public:
                    deepcopy() {};
                    deepcopy(deepcopy const & obj) {
                        this->_notAllocated = obj._notAllocated;

                        int *send = new (int);
                        *send = *obj._allocated;
                        this->_allocated = send;
                    };
                    ~deepcopy() {};

                    void    printValues() {
                        std::cout << "Not allocated = " << _notAllocated << std::endl;
                        std::cout << "Allocated = " << *_allocated << std::endl;
                    }
                    void    setValues(int value) {
                        _notAllocated = value;

                        int *send = new (int);
                        *send = value;
                        _allocated = send;
                    }

                    void    changeValues(int value) {
                        *_allocated = value;
                        _notAllocated = value;
                    }

                private:
                    int     _notAllocated;
                    int     *_allocated;
            };

            int main() {
                deepcopy *obj_1 = new deepcopy();

                std::cout << "Object 1 \n";
                obj_1->setValues(999);
                obj_1->printValues();

                deepcopy *obj_2 = new deepcopy(*obj_1);

                std::cout << "\nObject 2 \n";
                obj_2->printValues();

                std::cout << "\nChanging Object 2 \n";
                obj_2->changeValues(10);
                obj_2->printValues();

                std::cout << "\nPrinting Object 1 \n";
                obj_1->printValues();
            }


        Explanation:
            So in this case you have:
            - int     _notAllocated;
            - int     *_allocated;

            When you create obj_1, you set setValues() for the int normally, and for the
            *int has an allocation.

            When you copy your obj_1 to obj_2, you copy the int normally and you copy the *int,
            but you are making a new allocation, meaning you are not messing with the previous
            object.

            And now when you alter the obj_2 _allocated it won't mess with the obj_1.


---------------------------------------------------------------------------------------------

Interfaces:

    An interface describes the behavior or capabilities of a C++ class without committing
    to a particular implementation of that class.

    When you create a Base class with all the functions and everything, you may not want
    to use that class directly, but you might want to inherit from it.
    From instance, you created the class Animal(), it has makeSound() and a few variables,
    but you don't want to instantiate it, you want to inherit from it, you want to make
    a Dog Class from Animal, you don't want to instantiate an Animal.

    The C++ interfaces are implemented using abstract classes.

    A class is made abstract by declaring at least one of its functions as pure virtual
    function. A pure virtual function is specified by placing "= 0".

    The purpose of an abstract class (often referred to as an ABC) is to provide an appropriate
    base class from which other classes can inherit. Abstract classes cannot be used to
    instantiate objects and serves only as an interface.


    Example:

        #include <iostream>

        class Animal {
            public:
                virtual void     makeSound() = 0;
                void             setName(std::string name) {
                    _name = name;
                };
                std::string      getName() {
                    return _name;
                }

            protected:
                std::string       _name;
        };

        class Dog : virtual public Animal {
            public:
                Dog() { std::cout << "Dog has been constructed!\n";};

                void makeSound() {
                    std::cout << _name << " just barked!\n";
                }

            private:

        };

        class Cat : virtual public Animal {
            public:
                Cat() { std::cout << "Cat has been constructed!\n";};

                void makeSound() {
                    std::cout << _name << " just meowed!\n";
                }

            private:

        };

        int main() {
            Dog cao;
            Cat gato;

            cao.setName("Bobby");
            cao.makeSound();

            gato.setName("Sebastião");
            gato.makeSound();
        }


    If you try to put:

        int main() {
            Animal animal;
        }

    This will give an error.
        "error: cannot declare variable ‘animal’ to be of abstract type ‘Animal’"
        "note:   because the following virtual functions are pure within ‘Animal’:
                        ‘virtual void Animal::makeSound() = 0’



Concrete:

    C++ supports the distinction between an interface and its implementations through abstract
    and concrete classes. An abstract class is a base class that defines an interface,
    while a concrete class is a derived class that implements that interface.

---------------------------------------------------------------------------------------------

Nested Classes:

    A nested class is a class that is declared in another class. The nested class is also
    a member variable of the enclosing class and has the same access rights as the other
    members. However, the member functions of the enclosing class have no special access
    to the members of a nested class.


        #include <iostream>

        class A {
            public:
                class B {
                    public:
                        void putNbr(int num) {
                            _num = num;
                        }
                        void printNbr() {
                            std::cout << _num << std::endl;
                        }
                    private:
                        int     _num;
                };
        };

        int main() {
            A::B alo;
            alo.putNbr(2);
            alo.printNbr();
        }

---------------------------------------------------------------------------------------------

Exceptions:

    A C++ exception is a response to an exceptional circumstance that arises while a program is
    running, such as an attempt to divide by zero. Exceptions provide a way to transfer control
    from one part of a program to another. C++ exception handling is built upon three
    keywords: try, catch, and throw.


    With char *:

        #include <iostream>

        int main() {
            int a = 10;
            int b = 0;
            int c;

            try {
                if (b == 0) {
                    throw "Divided by zero";
                }
                c = a/b;
            }
            catch(const char *e) {
                std::cout << "Exception occured: " << e << std::endl;
            }
        }


Standard exceptions:

    <stdexcept>

        logic_error:	    exception class to indicate violations of logical
                                preconditions or class invariants
        invalid_argument: 	exception class to report invalid arguments
        domain_error:   	exception class to report domain errors
        length_error:   	exception class to report attempts to exceed maximum allowed size
        out_of_range: 	    exception class to report arguments outside of expected range
        runtime_error       exception class to indicate conditions only detectable at run time
        range_error         exception class to report range errors in internal computations
        overflow_error      exception class to report arithmetic overflows
        underflow_error     exception class to report arithmetic underflows


    https://en.cppreference.com/w/cpp/header/stdexcept


        #include <iostream>
        #include <stdexcept>

        int main() {
            int a = 10;
            int b = 0;
            int c;

            try {
                if (b == 0) {
                    throw std::runtime_error("Divided by zero");
                }
                c = a / b;
            }
            catch (std::runtime_error & error) {
                std::cout << "Exception thrown" << std::endl;
                std::cout << error.what() << std::endl;
            }
        }


Multiple exceptions:

    #include <iostream>
    #include <stdexcept>

    int main() {
        int a = 20;
        int b = 2; // Change this value to 0 / 1 / 2 for the Throws
        int c;

        try {
            if (b == 0) {
                throw "B is 0 dude";
            }
            if (b == 1) {
                throw 1;
            }
            if (b == 2) {
                throw std::logic_error("It's 2");
            }
            c = a / b;
        }
        catch (const char *error) {
            std::cout << "Throw exception: ";
            std::cout << error << std::endl;
        }
        catch (int error) {
            std::cout << "Throw exception: ";
            std::cout << error << std::endl;
        }
        catch (std::logic_error & error) {
            std::cout << "Throw exception: ";
            std::cout << error.what() << std::endl;
        }
    }


    Or you can use (...) on the Catch to catch anything.


Function Exception:

    #include <iostream>
    #include <stdexcept>

    void    test() throw(char, int, std::runtime_error) {
        //throw(20);
        //throw('a');
        throw(std::runtime_error("I FUCKED UP ChARLiee"));
    }

    int main() {
        try {
            test();
        }
        catch (char error) {
            std::cout << "Exception char error: " << error << std::endl;
        }
        catch (int error) {
            std::cout << "Exception int error: " << error << std::endl;
        }
        catch (std::runtime_error error) {
            std::cout << "Exception runtime error: " << error.what() << std::endl;
        }
    }


Nested Exceptions:

    It has nested exceptions, and when you call the throw, you can call it the outter one
    as well.

        #include <iostream>
        #include <stdexcept>

        int main() {
            try {
                try {
                    throw (std::runtime_error("<--2-->"));
                }
                catch (std::runtime_error error) {
                    std::cout << "runtime error inner: " << error.what() << std::endl;
                    throw;
                }

                throw (std::runtime_error("<--1-->"));
            }
            catch (std::runtime_error error) {
                std::cout << "runtime error outter: " << error.what() << std::endl;
            }
        }

        output:
            runtime error inner:  <--2-->
            runtime error outter: <--2-->


Created exception:

    #include <iostream>
    #include <exception>

    class Hare : public std::exception {
        public:
            virtual const char* what() throw() {
                return "This is an exception";
            }
    };

    int main() {
        Hare obj;

        try {
            throw obj;
        }
        catch (Hare error) {
            std::cout << error.what() << std::endl;
        }
    }

---------------------------------------------------------------------------------------------

Casting:

    Implicit Conversions and Explicit Conversions:

        int a = 42;                 // Reference Value

        double b = a;               // Implicit conversion cast
        double c = (double) a;      // Explicit conversion cast

        double d = a;               // Implicit promotion --> OK
        int e = d;                  // Implicit demotion --> BAD
        int f = (int) d;            // Explicit demotion --> OK, you're in charge


    Type reinterpretation:

        float a = 420.042f;          // Reference Value

        void *b = &a;                // Implicit reinterpretation cast
        void *c = (void *)&a;        // Explicit reinterpretation cast

        void *d = &a;                // Implicit promotion --> OK
        //int *e = d;                // Implicit demotion --> BAD           (DOESN'T WORK)
        int *f = (int *)d;           // Implicit demotion --> OK, I OBEY


    Qualifier reinterpretation:

        int a = 42;                         // Reference Value

        int const *b = &a;                  // Implicit reinterpretation cast
        int const *c = (int const *)&a;     // Explicit reinterpretation cast

        int const *d = &a;                  // Implicit promotion --> OK
        //int *e = d;                       // Implicit demotion --> BAD
        int *f = (int *)d;                  // Implicit demotion --> OK, I OBEY


    Classes reinterpretation:

        ChildA  a;                          // Reference Value

        Parent *b = &a;                     // Implicit reinterpretation cast
        Parent *c = (Parent *)&a;           // Explicit reinterpretation cast

        Parent *d = &a;                     // Implicit Upcast --> OK
        //ChildA *e = d;                    // Implicit Downcast --> BAD
        ChildB *f = (ChildB *)d;            // Implicit Downcast --> OK, NOT GOOD BUT SURE




Static Cast:

    It's called Static Cast because it's ran at compile time.
    It is a compile time cast, it means that if you can't do the cast, it will fail during
    compilation. Unlike the C casts that are at runtime, it will only be detected during
    runtime.

    It does things like implicit conversions between types (such as int to float, or pointer
    to void*), and it can also call explicit conversion functions (or implicit ones).



        Example 1:

            int main() {
                float f = 42.5f;

                int a = f;                    // This is what you do in C.
                int b = static_cast<int>(f);  // This is what you do in C++
            }

            This will work.


        Example 2:

            int main() {
                int a = 10;
                char c = 'a';

                int *q = (int*)&c;               // This is what you do in C.
                int *p = static_cast<int*>(&c);  // This is what you do in C++.
            }

            This will not work.
            The C way may work, but will give errors during runtime.
            The C++ won't work.

            error: static_cast from 'char *' to 'int *' is not allowed.


            This means that even if you think you can some how typecast a particular
            object int another but its illegal, static_cast will not allow you to do this.


        Example 3:

                class Base {};
                class Derived : public Base {};

                int main() {
                    Derived der;

                    Base * base = (Base *)&der;                 // This is what you do in C.
                    Base * base2 = static_cast<Base *>(&der);   // This is what you do in C++.
                }

                These will work, both.


        Example 4:

                class Base {};
                class Derived : private Base {};

                int main() {
                    Derived der;

                    Base * base = (Base *)&der;                 // This is what you do in C.
                    Base * base2 = static_cast<Base *>(&der);   // This is what you do in C++.
                }

                Only the one in C will work, the C++ won't work because it's private.




    https://www.geeksforgeeks.org/static_cast-in-c-type-casting-operators/




Dynamic Cast:

    It is a run-time cast.
    In C++, dynamic casting is mainly used for safe downcasting at run time.
    To work on dynamic_cast there must be one virtual function in the base class.
    A dynamic_cast works only polymorphic base class because it uses this information
    to decide safe downcasting.

    If the casting works, the casting will have the corresponding value

    If it fails and the "type"      dynamic_cast<type *>      is a pointer, it returns
    null pointer.
    If it fails and the "type"      dynamic_cast<type &>      is a reference, it throws
    an exception.


                                  ------------------
    |                            |    Base Class    |                              .
    |                            /------------------\                             /|\
    |  Downcasting              /                    \                  Upcasting  |
    |               -------------------           -------------------              |
   \|/             |  Derived Class 1  |         |  Derived Class 2  |             |
    '               -------------------           -------------------              |



        Example 1 (Working):

            #include <iostream>

            class Base {
                virtual void print() { std::cout << "Base Print!" << std::endl; }
            };
            class Derived1 : public Base {
                void print() { std::cout << "Derived 1 Print!" << std::endl; }
            };
            class Derived2 : public Base {
                void print() { std::cout << "Derived 2 Print!" << std::endl; }
            };

            int main() {
                Base *base = new Derived1;
                Derived1 *derived1 = dynamic_cast<Derived1 *>(base);
            }


            This works perfectly, no problem.



        Example 2 (Null Pointer):

            #include <iostream>

            class Base {
                virtual void print() { std::cout << "Base Print!" << std::endl; }
            };
            class Derived1 : public Base {
                void print() { std::cout << "Derived 1 Print!" << std::endl; }
            };
            class Derived2 : public Base {
                void print() { std::cout << "Derived 2 Print!" << std::endl; }
            };

            int main() {
                Base *base = new Derived1;

                Derived1 *derived1 = dynamic_cast<Derived1 *>(base);
                Derived2 *derived2 = dynamic_cast<Derived2 *>(base);

                if (derived1 == NULL)
                    std::cout << "derived1 IS NULL" << std::endl;
                if (derived2 == NULL)
                    std::cout << "derived2 IS NULL" << std::endl;
            }

            Output:
                    "derived2 IS NULL"

            This case dynamic_cast failed on derived2, you can check it with an if.



        Example 3 (Exception error):

            #include <iostream>
            #include <exception>

            class Base {
                virtual void print() { std::cout << "Base Print!" << std::endl; }
            };
            class Derived1 : public Base {
                void print() { std::cout << "Derived 1 Print!" << std::endl; }
            };
            class Derived2 : public Base {
                void print() { std::cout << "Derived 2 Print!" << std::endl; }
            };

            int main() {
                {
                    Base *base = new Derived1;

                    try {
                        Derived1 &derived1 = dynamic_cast<Derived1 &>(base);
                    }
                    catch (std::exception &e) {
                        std::cout << e.what() << std::endl;
                    }
                }
            }

            Output:
                    "std::bad_cast"

            Passing by reference you get a throw exception.


    https://www.geeksforgeeks.org/dynamic-_cast-in-cpp/




Reinterpert Cast:

    This one is used mostly when you receive a variable that most likely is a void, and you know
    what it is so you reinterpert it to what you want it to be.

        Example 1:

            #include <iostream>

            int main() {

                std::string teste = "Olá";
                void *teste2 = static_cast<void *>(&teste);

                std::string *teste3 = reinterpret_cast<std::string *>(teste2);

                std::cout << *teste3 << std::endl;
            }


    https://www.geeksforgeeks.org/reinterpret_cast-in-c-type-casting-operators/





Const Cast:

    Const Cast is used to cast away the constness of variables.

    This cast is the cast you will want to use the least, if you need to use this cast,
    something might be wrong with your code.

        Example 1:

            #include <iostream>

            class Cow {};

            int main() {
                {
                    Cow const *cow = new Cow;
                    //Cow *cow2 = cow;                     <-- This doesn't work because it's not const.
                    Cow *cow2 = const_cast<Cow *>(cow); // <-- This now works because it's const.
                }
            }


https://www.geeksforgeeks.org/const_cast-in-c-type-casting-operators/?ref=lbp


---------------------------------------------------------------------------------------------

Cast Operators:

    You can use the Operators in classes to Cast.

        Example:

            #include <iostream>

            class Base {
                public:
                    Base(float number) : _number(number) {};

                    float getValue() { return _number; };

                    operator float() { return _number; };
                    operator int() { return static_cast<int>(_number); };

                private:
                    float   _number;
            };

            int main() {
                Base num1(42.1234);
                float num2 = num1;
                int num3 = num1;

                std::cout << num1.getValue() << std::endl;
                std::cout << num2 << std::endl;
                std::cout << num3 << std::endl;
            }

            Output:
                42.1234
                42.1234
                42


---------------------------------------------------------------------------------------------

Explicit:

    If a class has a constructor which can be called with a single argument, then this
    constructor becomes conversion constructor because such a constructor allows conversion of
    the single argument to the class being constructed.

    We can avoid such implicit conversions as these may lead to unexpected results.
    We can make the constructor explicit with the help of explicit keyword.

    The explicit function specifier controls unwanted implicit type conversions.
    It can only be used in declarations of constructors within a class declaration.


        Example:

            #include <iostream>

            class Base {
                public:
                    Base(int numba) : _numba(numba) {};

                    void print() {
                        std::cout << _numba << std::endl;
                    }

                private:
                    int   _numba;
            };

            class Base2 {
                public:
                    explicit Base2(int numba) : _numba(numba) {};

                    void print() {
                        std::cout << _numba << std::endl;
                    }

                private:
                    int   _numba;
            };

            int main() {
                {
                    Base bx_1(42);
                    Base bx_2 = 10;
                    bx_1.print();
                    bx_2.print();
                }
                {
                    Base2 bx_1(42);
                    // Base2 bx_2 = 10;   <---- Doesn't work, it's implicit when you can only explicit.
                    bx_1.print();
                }
            }


---------------------------------------------------------------------------------------------
</pre>
