#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Cuboid {
    int id;
    long long l, w, h;
    long long volume;
    long long surface;
};

bool compare(const Cuboid &a, const Cuboid &b) {
    if (a.volume != b.volume) {
        return a.volume > b.volume;
    }
    if (a.surface != b.surface) {
        return a.surface < b.surface;
    }
    return a.id > b.id;
}

int main() {
    int n;
    cin >> n;
    vector<Cuboid> cuboids(n);
    for (int i = 0; i < n; i++) {
        cin >> cuboids[i].id >> cuboids[i].l >> cuboids[i].w >> cuboids[i].h;
        cuboids[i].volume = cuboids[i].l * cuboids[i].w * cuboids[i].h;
        cuboids[i].surface = 2 * (cuboids[i].l * cuboids[i].w + cuboids[i].l * cuboids[i].h + cuboids[i].w * cuboids[i].h);
    }

    sort(cuboids.begin(), cuboids.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << cuboids[i].id << " " << cuboids[i].l << " " << cuboids[i].w << " " << cuboids[i].h << endl;
    }

    return 0;
}
