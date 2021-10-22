/**
Create a vector<float> and put 25 floating-point numbers into it using a for loop. Display the vector.
**/
#include <iostream>
#include <vector>
// 把从1到25 的数字 每个都加上0.3
using namespace std;

int main() {

    vector<float> vec;

    for (int i = 0; i < 25; i++)
        vec.push_back(i + 0.3);

    for (int index = 0; index < vec.size(); index++)
        cout << "vec[" << index << "] = " << vec[index] << endl;

return 0;
}
