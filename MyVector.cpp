#include <iostream>
using namespace std;

class MyVector {
public:
int x1, y1, z1, x2, y2, z2, x3, y3, z3;

MyVector() { std::cout << "Constructor executed" << std::endl; };

void input(int, int, int, int, int, int);
int add1() { return (x1 + x2); }
int add2() { return (y1 + y2); }
int add3() { return (z1 + z2); }
int sub1() { return (x1 - x2); }
int sub2() { return (y1 - y2); }
int sub3() { return (z1 - z2); }
int dot1() { return (x1 * x2); }
int dot2() { return (y1 * y2); }
int dot3() { return (z1 * z2); }
int cross1() { return ((y1 * z2) - (z1 * y2)); }
int cross2() { return ((x1 * z2) - (z1 * x2)); }
int cross3() { return ((x1 * y2) - (y1 * x2)); }
int mag_a() { return sqrt((x1 * x1) + (y1 * y1) + (z1 * z1)); }
int mag_b() { return sqrt((x2 * x2) + (y2 * y2) + (z2 * z2)); }


~MyVector() { std::cout << "Deconstructor executed" << std::endl; };
};
void MyVector::input(int ax, int ay, int az, int bx, int by, int bz)
{
x1 = ax;
y1 = ay;
z1 = az;
x2 = bx;
y2 = by;
z2 = bz;
}
int main(int argc, char* argv[])
{
int a, b, c, d, e, f;
MyVector x1, y1;


if (argc != 8)
{
std::cout << "Usage: MyVector.exe <space> ax <space> ay <space> az
<space> bx <space> by <space> bz <space> Operation Code <press> ENTER
" << std::endl;
std::cout << "Operation Code '1' : Vector Addition" << std::endl;
std::cout << "Operation Code '2' : Vector Substraction" << std::endl;
std::cout << "Operation Code '3' : Vector Dot product" << std::endl;
std::cout << "Operation Code '4' : Vector Cross product" << std::endl;
std::cout << "Operation Code '5' : Vector Magnitude" << std::endl;

exit(0);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
c = atoi(argv[3]);
d = atoi(argv[4]);
e = atoi(argv[5]);
f = atoi(argv[6]);
int op = atoi(argv[7]);
MyVector vectors;
vectors.input(a, b, c, d, e, f);
if (op == 1)
{

std::cout << "op1: cx = " << vectors.add1() << " cy = " <<
vectors.add2() << " cz = " << vectors.add3() << std::endl;
}
else if (op == 2)
{
std::cout << "op2: cx = " << vectors.sub1() << " cy = " <<
vectors.sub2() << " cz = " << vectors.sub3() << std::endl;
}
else if (op == 3)
{
std::cout << "op3: cx = " << vectors.dot1() << " cy = " <<
vectors.dot2() << " cz = " << vectors.dot3() << std::endl;
}
else if (op == 4)
{
std::cout << "op4: cx = " << vectors.cross1() << " cy = " <<
vectors.cross2() << " cz = " << vectors.cross3() << std::endl;
}
else if (op == 5)
{
std::cout << "op5: |a| = " << vectors.mag_a() << " |b| = " <<
vectors.mag_b() << std::endl;
}
else
{
std::cout << "Enter the above mentioned operation code for respective
Vector Operation" << std::endl;
}
return 0;
