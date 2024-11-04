#include <iostream>
#include <string>
using namespace std;

// Book 클래스 정의
class Book {
    string title; // 책 제목
    int price;    // 가격
    int pages;    // 페이지 수
public:
    // 생성자
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title; 
        this->price = price; 
        this->pages = pages;
    }
    
    // 책 정보를 출력하는 함수
    void show() {
        cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
    }

    // 책 제목을 반환하는 함수
    string getTitle() { return title; }

    // 친구 함수로 < 연산자 오버로딩
    friend bool operator < (string title, Book op2);
};

// < 연산자 오버로딩 함수
bool operator < (string title, Book op2) {
    if (title < op2.title) // 제목 비교
        return true; // 주어진 문자열이 Book의 제목보다 앞에 있는 경우
    return false; // 그렇지 않으면 false
}

int main() {
    Book a("청춘", 20000, 300); // Book 객체 생성
    string b; // 사용자 입력을 받을 문자열
    
    cout << "책 이름을 입력하세요>>"; // 사용자에게 책 이름 입력 요청
    getline(cin, b); // 한 줄 입력 받기

    // 입력받은 책 이름과 Book 객체의 제목 비교
    if (b < a) // 사용자 입력이 Book 제목보다 앞에 있는지 확인
        cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl; // 결과 출력
}

