#include<iostream>
class Base {
    public:
        Base () = default;
        void print (){
            privatePrint();
        }
    private:
        virtual void privatePrint() {
            std::cout<<"Hello from Base";
        }
};

class Derived : public Base {
    public:
        Derived () = default;
    private:
        void privatePrint() override {
            std::cout<<"Hello from Dervied";
        }
};

int main(){
    Derived d;
    d.print();
    return 0;
}
