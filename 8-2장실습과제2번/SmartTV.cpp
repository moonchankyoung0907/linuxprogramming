#include <iostream>
#include <string>
using namespace std;

// TV 클래스 정의
class TV {
protected:
    int size; // TV 화면 크기
public:
    // 기본 생성자: size를 20으로 초기화
    TV() : size(20) { 
        cout << "TV 생성" << endl; // TV 생성 메시지 출력
    }
    
    // 크기를 지정하는 생성자
    TV(int size) : size(size) { 
        cout << "TV 생성" << endl; // TV 생성 메시지 출력
    }
    
    // size 값을 반환하는 함수
    int getSize() { return size; }
    
    // size 값을 설정하는 함수
    void setSize(int size) { this->size = size; }
};

// WideTV 클래스 정의 (TV를 상속받음)
class WideTV : public TV { 
protected:
    bool videoIn; // 영상 입력 여부
public:
    // 기본 생성자: TV 생성자 호출 후 videoIn을 true로 초기화
    WideTV() : TV(), videoIn(true) {
        cout << "WideTV 생성" << endl; // WideTV 생성 메시지 출력
    }

    // 크기와 videoIn을 설정하는 생성자
    WideTV(int size, bool videoIn) : TV(size), videoIn(videoIn) {
        cout << "WideTV 생성" << endl; // WideTV 생성 메시지 출력
    }

    // videoIn 값을 반환하는 함수
    bool getVideoIn() { return videoIn; }

    // videoIn 값을 설정하는 함수
    void setVideoIn(bool videoIn) { this->videoIn = videoIn; }
};

// SmartTV 클래스 정의 (WideTV를 상속받음)
class SmartTV : public WideTV { 
    string ipAddr; // IP 주소
public:
    // 기본 생성자: WideTV 생성자 호출 후 ipAddr을 기본값으로 설정
    SmartTV() : WideTV() {
        cout << "SmartTV 생성" << endl; // SmartTV 생성 메시지 출력
    }
    
    // 크기, videoIn, IP 주소를 설정하는 생성자
    SmartTV(int size, bool videoIn, string ipAddr) : WideTV(size, videoIn), ipAddr(ipAddr) {
        cout << "SmartTV 생성" << endl; // SmartTV 생성 메시지 출력
    }

    // IP 주소를 반환하는 함수
    string getIpAddr() { return ipAddr; }

    // IP 주소를 설정하는 함수
    void setIpAddr(string ipAddr) { this->ipAddr = ipAddr; }

    // SmartTV 객체의 멤버 변수들을 설정하는 함수
    void setSmartTV(int size, bool videoIn, string ipAddr) {
        setSize(size);           // TV의 size 설정
        setVideoIn(videoIn);     // WideTV의 videoIn 설정
        setIpAddr(ipAddr);       // SmartTV의 IP 설정
    }
};

// main 함수: 프로그램 실행 진입점
int main() {
    // SmartTV 객체 생성
    SmartTV htv;
    
    // SmartTV 객체의 멤버 변수 설정
    htv.setSmartTV(50, false, "192.0.0.2");

    // 설정된 값 출력
    cout << "size = " << htv.getSize() << endl;             // TV의 size 출력
    cout << "videoIn = " << boolalpha << htv.getVideoIn() << endl; // WideTV의 videoIn 출력
    cout << "IP = " << htv.getIpAddr() << endl;              // SmartTV의 IP 출력

    return 0;
}

