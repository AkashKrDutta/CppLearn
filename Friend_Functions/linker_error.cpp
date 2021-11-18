#include <string>
#include <iostream>

class HomeForSale{

    public:
        std::string addr;
        HomeForSale(std::string val) : addr(val) {}
        std::string getAddr() {return addr;}
        void copyObject(const HomeForSale & cpy) {
            HomeForSale new_cpy (cpy); //obviously bad way to copy but point being inside member function or a friend function, its still possible to call the CC.
                                       //since we haven't defined our CC or CAO, this will be giving a linker error rather than compiler error.
            this->addr = new_cpy.addr;
        }

    private:
        // make the CC and CAO private to prevent copies.
        HomeForSale(const HomeForSale &);
        HomeForSale & operator=(const HomeForSale &);

        // Default CC private to prevent non param objects.
        HomeForSale();

};

//uncommenting below would remove linker error
//HomeForSale::HomeForSale(const HomeForSale & rhs){
//    addr = rhs.addr;
//}

int main(){
    //HomeForSale hfs1; // should give error as default ctor is zeroed.
    HomeForSale hfs2 {"India"};
    //HomeForSale hfs3 (hfs2); // should give error as CC is private.
    HomeForSale hfs4 ("America");
    //hfs4 = hfs2; // should give error as CAO is private.

    hfs2.copyObject(hfs4); // this will give linker error

    std::cout << hfs2.getAddr() << std::endl;
    return 0;
}
