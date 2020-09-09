#include<iostream>

void printValue(int value)
{
    std::cout << "memory of value: " << &value << " value inside value:  " << value << std::endl;
}

/*struct Person
{
    const char* name;
    int age;
    float height;

    Person(const char* name, int age, float height)
    {
        this->name = name;
        this->age = age;
        this->height = height;
    }
};*/

int main()
{

    Node* node0 = new Node(0, nullptr);//0
    node0->nextNode = new Node(1, nullptr);//1
    node0->nextNode->nextNode = new Node(2, nullptr);//2
    node0->nextNode->nextNode->nextNode = new Node(3, nullptr);

    Node* currentNode = node0;

    while (currentNode)
    {
        std::cout << currentNode->value << " -> " << "\t";
        currentNode = currentNode->nextNode;
    }

   /* int something {5};//stack

    int& ref{something};

    int something2{something};

    ref++;

    int* ptr1{&something};

    Person* person1{new Person("Jose", 19, 1.60)};

    std::cout << "memmory of person1: " << &person1 << std::endl;
    std::cout << "name of person1: " << person1->name << std::endl;
    std::cout << "name of person1: " << &person1->age << std::endl;
    std::cout << "age of person1: " << person1->height << std::endl;*/


    /*std::cout << "memory of something: " << &something << " value inside memory:  " << something << std::endl;
    std::cout << "memory of ref: " << &ref << " value inside memory:  " << ref << std::endl;
    std::cin.get();

    std::cout << "memory of something2: " << &something2 << " value inside something2:  " << something2 << std::endl;
    std::cout << "memory of something: " << &something << " value inside memory:  " << something << std::endl;
    std::cout << "memory of ref: " << &ref << " value inside memory:  " << ref << std::endl;

    std::cout << "memory of pointer: " << &ptr1 << " value inside pointer:  " << *ptr1 << "memory of the value inside pointer" << ptr1 << std::endl;
    //printValue(something);*/

    std::cin.get();

    return 0;
}