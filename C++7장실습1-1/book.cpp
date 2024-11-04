#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    int price, pages;
public:
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title; 
        this->price = price; 
        this->pages = pages;
    }
    void show() {
        cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
    }
    string getTitle() { return title; }
    Book& operator += (int a);
    Book& operator -= (int a);
};

Book& Book::operator += (int a) {
    price += a;
    return *this;
}

Book& Book::operator -= (int a) {
    price -= a;
    return *this;
}

int main() {
    Book a("청춘", 20000, 300), b("미래", 30000, 500);
    a += 500;  // 책 a의 가격을 500원 증가
    b -= 500;  // 책 b의 가격을 500원 감소
    a.show();  // 책 a의 정보 출력
    b.show();  // 책 b의 정보 출력
    return 0;
}

