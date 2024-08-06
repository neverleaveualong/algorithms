#include <iostream>
#include <vector>

using namespace std;

const char* rodnames[3] = {"A", "B", "C"};
vector<int> rods[3];

void printRods() {
    for (int i = 0; i < 3; ++i) {
        cout << "기둥 " << rodnames[i] << ": ";
        for (int disk : rods[i]) {
            cout << disk << " ";
        }
        cout << endl;
    }
    cout << "------------------" << endl;
}

void hanoi(int n, int from, int to, int aux) {
    if (n == 1) {
        rods[to].push_back(rods[from].back());
        rods[from].pop_back();
        cout << "원반 " << n << "을(를) 기둥 " << rodnames[from] << "에서 기둥 " << rodnames[to] << "로 이동" << endl;
        printRods();
    } else {
        hanoi(n - 1, from, aux, to);
        rods[to].push_back(rods[from].back());
        rods[from].pop_back();
        cout << "원반 " << n << "을(를) 기둥 " << rodnames[from] << "에서 기둥 " << rodnames[to] << "로 이동" << endl;
        printRods();
        hanoi(n - 1, aux, to, from);
    }
}

int main() {
    int n;
    cout << "원반의 개수를 입력하세요: ";
    cin >> n;

    for (int i = n; i >= 1; --i) {
        rods[0].push_back(i);
    }

    printRods();
    hanoi(n, 0, 2, 1);

    return 0;
}
