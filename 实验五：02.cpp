#include <iostream>
#include"student.h"
using namespace std;
int main()
{
    Student stud;
    stud.set_Value(18, "zhangsan", "m");
    stud.display();
    
    return 0;
}
