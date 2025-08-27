#include <iostream>
#include <iomanip>
using namespace std;
struct Province{
char name[20];
double area;
int pop;
};
void print(const Province & p){
    cout << p.name << ' ' << fixed<<setprecision(2)<<p.area << ' ' << p.pop << endl;
}

int main(){
    Province p[5] = {
        {"Anhui", 139600.00, 6461},
        {"Beijing", 16410.54, 1180},
        {"Chongqing", 82400.00, 3144},
        {"Shanghai", 6340.50, 1360},
        {"Zhejiang", 101800.00, 4894}};
    for(int i = 0; i < 5; i++)
    {
        print(p[i]);
    }
    return 0;
}