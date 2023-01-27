#include <iostream>
using namespace std;

template <class T>
class Calculator{
    T num1, num2;

    public:
    Calculator(T n1, T n2){
        num1 = n1;
        num2 = n2;
    }

    void displatResult(){
        cout << "Numbers : " << num1 << " and " << num2 << endl;
        cout << num1 << " + " << num2 << " = " << add() << endl;
    }

    T add(){
        return num1 + num2;
    }
};

int main(){
    Calculator<float> floatCalc(3.1,7.1);

    cout << "flot result : " << endl;
    floatCalc.displatResult();
}
