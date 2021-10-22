/**
Create a program that opens a file and counts the whitespace-separated words in that file.
**/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//用来计算文件03.txt中的单词数量
int main() {

    int counter = 0;
    ifstream inputFile("03.txt");
    string buf;//这一行的代码 尤其是这个buf和 inputfile 函数的用法 还不太了解

	while (inputFile >> buf)//这一行不太懂 
	{
		++counter;
	}
    
	cout << "Whitespace-separated words: " << counter << endl;


return 0;
}
