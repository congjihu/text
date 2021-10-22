/**
Create a vector<float> and put 25 numbers into it as in the
previous exercises. Now square each number and put the result
back into the same location in the vector. Display the vector
before and after the multiplication.
**/
// 向量间的相乘
#include <iostream>
#include <vector>

using namespace std;

int main() {

   const int vector_size = 25; // 在这里 我也加上了const 是常量嘛

    vector<float> vec;

    // Fills vector
    for (int i = 0; i < vector_size; i++)
        vec.push_back(i + 0.3);


    // Prints vector before square
    cout << "Before multiplication: " << endl;
    for (int i = 0; i < vector_size; i++)
        cout << vec[i] << endl;

    for (int i = 0; i < vector_size; i++)
        vec[i] = vec[i] * vec[i];

    // Prints vector after square
    cout << "\nAfter multiplication: " << endl;
    for (int i = 0; i < vector_size; i++)
        cout << vec[i] << endl;

return 0;
}
