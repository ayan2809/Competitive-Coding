#include<bits/stdc++.h>
using namespace std;
class ComplexNumbers {
    public:
    int real;
    int imaginary;
    ComplexNumbers(int r, int c)
    {
        this->real=r;
        this->imaginary=c;
    }
    void plus(ComplexNumbers c2)
    {
        real=real+c2.real;
        imaginary=imaginary+c2.imaginary;
    }
    void multiply(ComplexNumbers c2)
    {
        int x=real*c2.imaginary;
        int y=imaginary*c2.real;
        real=real*c2.real- (imaginary*c2.imaginary);
        imaginary=x+y;
    }
    void print()
    {
        cout<<real<<" + "<<"i"<<imaginary<<endl;
    }
    // Complete this class
    
};
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }   
}