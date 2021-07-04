#include<iostream>
#include <string>
using namespace std;

int main()
{
    cout << "hello" << endl;  //画面にhelloと出力して、改行する
    string name;
    int age;
    cout << "こんにちは。私はコンピュータです。" <<endl;
    cout << "あなたの名前を入力してください。" <<endl;
    cin >> name;
    cout<<name<<"さん。よろしく。"<<endl;
    cout << "ところで、" << name << "さん。失礼ですがお年はいくつですか？" << endl;
    cout << "(入力はかならず、半角の数字でお願いします。)" << endl;
    cin >> age;      //年齢（整数）の入力

    cout << "なるほど。" << age << "歳ですか。" << endl;
    cout << "私はもうすぐ2歳のマシンです。"<<endl;
}
