#include <iostream>
#include <iomanip>
using namespace std;
struct Vector2
{
    double x, y;
};
void addVectors(const Vector2 &v1, const Vector2 &v2, Vector2 &result)
{
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
}
int main(){
    Vector2 v1, v2, result;
    cin >> v1.x >> v1.y >> v2.x >> v2.y;
    addVectors(v1, v2, result);
    cout <<fixed<<setprecision(1)<<'('<< result.x <<", "<< result.y <<')'<< endl;
    return 0;
}
