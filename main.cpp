#include <iostream>

void func(){

    int a , b , c ;
    std::cout << "enter a : " ; std::cin >> a;
    std::cout << "enter b : " ; std::cin >> b;
    if(b==0) throw "a/b geht nicht weil b = 0 !";
    else std::cout << "a/b = " << a/b << std::endl;

}

int main() {


    while(true){

     try{
         func();
     }
     catch (const char* msg)
     {
         std::cout << msg << std::endl;
     }
    }
    return 0;
}
