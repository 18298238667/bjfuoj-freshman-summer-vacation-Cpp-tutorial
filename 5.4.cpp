#include <iostream>
#include <cstdlib>
using namespace std;
struct Point{
    int x;
    int y;
};
int area(const Point& P1, const Point& P2){
    int width=abs(P1.x - P2.x);
    int height=abs(P1.y - P2.y);
    return width * height;
}
int main(){
    Point P1, P2;
    cin>> P1.x >> P1.y;
    cin>> P2.x >> P2.y;
    int result = area(P1, P2);
    cout << result << endl;
    return 0;
}