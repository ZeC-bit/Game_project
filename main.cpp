#include <iostream>
#include <string>

using namespace std;

void introduction() {
    string name;
    cout << "What is your name?";
    cin >> name;

}

int main() {
    int starter;
    cout << "HB and King SH presents" << endl;
    getchar();
    cout << "<Under the Mistletoe>" << endl;
    getchar();
    cout << "Hey you" << endl;
    getchar();
    cout <<  "Yes, you" << endl;
    cout << "You look familiar" << endl;
    cout << "(Enter 1 if you want to start from beginning)" << "(Enter 2 if wish to continue from previous progress)" << endl;
    cin >> starter;
    while (true) {
        if (starter == 1) {
            introduction();
            break;
        }
        else if (starter != 2) {
            cout << "Wrong input, choose again!";
            cin >> starter;
        }
        else {
            break;
        }
    }
    //지난 정보 불러오기
    
    return 0;
}
