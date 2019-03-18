//# a. 用virtual关键字申明的函数叫做虚函数，虚函数肯定是类的成员函数
//# b. 存在虚函数的类都有一个一维的虚函数表叫虚表。
//##类的对象有一个指向虚表开始的虚指针。虚表是和类对应的，虚表指针是和对象对应的。
//# c. 多态性是一个接口多种实现，是面向对象的核心。分为类的多态性和函数的多态性。
//# d. 多态用虚函数来实现，结合动态绑定。
//##  e. 纯虚函数是虚函数再加上= 0。
//## f. 抽象类是指包括至少一个纯虚函数的类
//fish 对象的内存空间分配比animal的多，属于包含animal的
//当类型转化后的对象指针去调用他的方法时，就时调用了他所在的方法
//
//采用持绑定技术（late binding）使运行时再确定对象，
//以及正确的调用函数，
//要让编译器采用迟绑定，就要在基类中声明函数时使用virtual关键字
//一旦某个函数在基类中声明为virtual，
//那么在所有的派生类中该函数都是virtual，
//而不需要再显式地声明为virtual。
#include <iostream>
using namespace std;
class animal
{
public:
        void sleep()
        {
            cout << "animal sleep" << endl;
        }
//after adding "virtual"
        virtual void breathe()
        {
            cout << "animal breathe" << endl;
        }
};

class fish: public animal
{
public:
        void breathe(){
            cout << "fish bubble" << endl;
        }
};

int main(int argc, char const *argv[])
{
    /* code */
    fish fh;
    animal *pAn= &fh;
    pAn -> breathe();
    return 0;
}
