/**
Change Fillvector.cpp so that it prints the lines (backwards) from last to first.
**/

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
// 使用向量来压入文件05.txt 中的单词 并且 倒着输出
int main() {
    vector<string> v;
    ifstream in("ex05.cpp");
    string line;
    while(getline(in, line))
        v.push_back(line);

    for(int i = v.size()-1; i >= 0; i--)
        cout << i << ": " << v[i] << endl;

return 0;
}
