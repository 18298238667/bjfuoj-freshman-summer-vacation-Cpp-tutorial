#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void root(int a, int b, int c) {
    // 设定浮点数精度阈值
    const double eps = 1e-9;
    
    // 计算判别式(转换为double避免溢出)
    double delta = static_cast<double>(b) * b - 4 * static_cast<double>(a) * c;
    
    // 考虑精度影响的判别式比较
    if (delta > eps) {
        // 两个实根的情况
        double sqrt_delta = sqrt(delta);
        double x1 = (-b + sqrt_delta) / (2.0 * a);
        double x2 = (-b - sqrt_delta) / (2.0 * a);
        
        // 确保x1 > x2
        if (x1 < x2) swap(x1, x2);
        
        cout << "Two real roots:";
        cout << fixed << setprecision(4) << x1 << "," << x2;
    } 
    else if (abs(delta) < eps) {  // 当|delta|很小时视为0
        // 一个实根的情况
        double x = -b / (2.0 * a);
        cout << "One real root:";
        cout << fixed << setprecision(4) << x;
    } 
    else {
        // 无实根的情况
        cout << "No real root";
    }
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    root(a, b, c);
    return 0;
}
