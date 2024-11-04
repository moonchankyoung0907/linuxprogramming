#include <iostream>
#include <string>
using namespace std;

class Book {
    string title; // 책 제목
    int price, pages; // 가격과 페이지 수
public:
    // 생성자
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title; 
        this->price = price; 
        this->pages = pages;
    }
    // 책 정보 출력 함수
    void show() {
        cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
    }
    // 책 제목 반환 함수
    string getTitle() { return title; }
    
    // 가격이 0보다 큰 경우 false 반환하는 연산자 오버로딩
    bool operator! () {
        if (this->price > 0)
            return false; // 가격이 0보다 크면 false
        return true; // 가격이 0이면 true
    }
};

int main() {
    Book book("벼룩시장", 0, 50); // 책 객체 생성
    if (!book) // 가격이 0인지 확인
        cout << "공짜다" << endl; // 가격이 0이면 출력
}

