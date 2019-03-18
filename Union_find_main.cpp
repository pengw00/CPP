#include <vector>
#include <string>
#include <iostream>
#include "union_find.h"
using namespace std;
using std::vector;

int main(){
    //新建立一个类的对象，令N = 10；
    QuickFindUF qfObj(10);
    int b = qfObj.find(1);
    bool a = qfObj.connected(1, 2);
    cout << b << endl;
    cout << "connected?" << a << endl;
    qfObj.unionFunc(1, 2);
    bool a1 = qfObj.connected(1, 2);
    cout << "after union,connected?" << a1 << endl;
    qfObj.unionFunc(3, 4);
    bool a2 = qfObj.connected(3, 4);
    cout << "after union,connected?" << a2 << endl;
    bool a3 = qfObj.connected(2, 3);
    cout << "2and3,connected?" << a3 << endl;
    qfObj.unionFunc(1, 4);
    a3 = qfObj.connected(2, 3);
    cout << "after union 1and4,2and3,connected?" << a3 << endl;
    for (int i = 0; i != 10; i++){
        int m = qfObj.find(i);
        cout << "Number " << i << "is" << m << endl;
    }
    return 0;
}