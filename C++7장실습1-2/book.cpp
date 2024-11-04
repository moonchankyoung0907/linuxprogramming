#include <iostream>
#include <string>
using namespace std;

class Book {
    string title; // 책 제목
    int price;    // 책 가격
    int pages;    // 책 페이지 수
public:
    // 생성자: 책 제목, 가격, 페이지 수를 초기화
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title; 
        this->price = price; 
        this->pages = pages;
    }
    
    // 책 정보를 출력하는 함수
    void show() {
        cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
    }
    
    // 제목을 반환하는 함수
    string getTitle() { 
        return title; 
    }
    
    // friend 연산자 함수 선언
    friend Book& operator += (Book &op1, int a); 
    friend Book& operator -= (Book &op1, int a);
};

// 가격을 증가시키는 연산자 함수
Book& operator += (Book &op1, int a) {
    op1.price += a; 
    return op1; 
}

// 가격을 감소시키는 연산자 함수
Book& operator -= (Book &op1, int a) {
    op1.price -= a; 
    return op1; 
}

int main() {
    // 두 개의 Book 객체 생성
    Book a("청춘", 20000, 300), b("미래", 30000, 500);
    
    // 가격 조정
    a += 500;  // a의 가격을 500원 증가
    b -= 500;  // b의 가격을 500원 감소
    
    // 책 정보 출력
    a.show(); 
    b.show();
}

