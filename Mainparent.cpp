#include <iostream>
#include "Parent.h"
#include "Child.h"

int main(){
Child child;
Parent &cParent = child;
std::cout << "cParent is a " << cParent.getName() << std::endl;

return 0;

}