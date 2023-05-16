#include <vector>
#ifndef _Matrix_H_
    #define _Matrix_H_
using namespace std;
class Matrix {
    private:
        int rowsize;
        int colsize;
        vector<vector<int>> vec;
    public:
        Matrix(vector<vector<int>> mr);

        Matrix(int a);

        Matrix operator-(Matrix other);

        Matrix operator+(Matrix other);

        Matrix operator*(Matrix other);

        Matrix operator*(int other);

        int rowsum(vector<int> other);

        vector<vector<int>> getraw();
};
#endif