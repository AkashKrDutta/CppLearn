#include <iostream>

class Things {
    std::string name;
    
    public:
        Things (std::string name) : name(name) {}
        virtual ~Things () = 0; // dtor abstract + polymorphic, if we don't define the destructor for this, it will throw a linker error
                                // That means even in abstract classes, we need to define destructors. Marking the destructor = 0 just ensures it will mark the class as abstract, but we still need to define it. Otherwise, no object of Things or even derived object will be instantiable.
        virtual std::string getInfo() = 0;
        std::string getName () { 
            return name;
        }
};

Things::~Things () {}

class Books : public Things {
    public:
        Books(std::string name) : Things(name) {}
        virtual ~Books () {}
        std::string getInfo() override {
            return "Book about: " + getName();
        }
};

void printType (Things & pth) {
    std::cout << pth.getInfo() << std::endl;
}

int main (){
    Books b("The Pshychology of Money");
    Things & pth {b};
    printType(pth);
    return 0;
}
