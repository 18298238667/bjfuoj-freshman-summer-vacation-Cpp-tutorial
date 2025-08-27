#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void root(int a, int b, int c) {
    // �趨������������ֵ
    const double eps = 1e-9;
    
    // �����б�ʽ(ת��Ϊdouble�������)
    double delta = static_cast<double>(b) * b - 4 * static_cast<double>(a) * c;
    
    // ���Ǿ���Ӱ����б�ʽ�Ƚ�
    if (delta > eps) {
        // ����ʵ�������
        double sqrt_delta = sqrt(delta);
        double x1 = (-b + sqrt_delta) / (2.0 * a);
        double x2 = (-b - sqrt_delta) / (2.0 * a);
        
        // ȷ��x1 > x2
        if (x1 < x2) swap(x1, x2);
        
        cout << "Two real roots:";
        cout << fixed << setprecision(4) << x1 << "," << x2;
    } 
    else if (abs(delta) < eps) {  // ��|delta|��Сʱ��Ϊ0
        // һ��ʵ�������
        double x = -b / (2.0 * a);
        cout << "One real root:";
        cout << fixed << setprecision(4) << x;
    } 
    else {
        // ��ʵ�������
        cout << "No real root";
    }
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    root(a, b, c);
    return 0;
}
