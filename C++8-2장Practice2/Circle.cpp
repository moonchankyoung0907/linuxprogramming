#include <iostream>
#include <string>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
    string name;
public:
    NamedCircle() {}
    NamedCircle(int radius, string name) : Circle(radius) {
        this->name = name;
    }
    void show() {
        cout << "반지름이 " << getRadius() << "인 " << name << endl;
    }
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
};

int main() {
    NamedCircle pizza[5];
    double max = -1;  // 면적은 항상 0 이상이므로 -1로 초기화
    int maxIndex = 0;
    
    cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
    
    for (int i = 0; i < 5; i++) {
        string name;
        int radius;
        
        cout << i + 1 << ">> ";
        cin >> radius >> name;
        
        // 입력받은 값을 설정
        pizza[i].setName(name);
        pizza[i].setRadius(radius);
        
        // 최대 면적 찾기
        if (pizza[i].getArea() > max) {
            max = pizza[i].getArea();
            maxIndex = i;
        }
    }
    
    // 가장 면적이 큰 피자 출력
    cout << "가장 면적이 큰 피자는 " << pizza[maxIndex].getName() << "입니다" << endl;
    
    return 0;
}

