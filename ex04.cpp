/**
Create a program that counts the occurrence of a particular word in a file
(use the string class’ operator ‘==’ to find the word).
**/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//这个代码 是用来统计文件04.txt 中 某一个单词的个数
int main() {

    int counter = 0;
    string key;

    cout << "Please enter the word for search: ";
    cin >> key;

    ifstream inputFile("04.txt");
    string buf;

    while (inputFile >> buf) {

        if (key == buf)
            ++counter;
    }

    cout << "Word " << key << " occurs " << counter << " time(s)." << endl;


return 0;
}
