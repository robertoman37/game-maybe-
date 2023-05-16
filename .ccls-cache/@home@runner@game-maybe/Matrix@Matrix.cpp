#include "Matrix.h"

Matrix::Matrix(vector<vector<int>> mr) {
    rowsize = mr.size();
    colsize = mr[0].size();
    vec.resize(rowsize);
    for (int i = 0; i < rowsize; i++) {
        vec[i] = mr[i];
    }
}

Matrix::Matrix(int a) {
    rowsize = 1;
    colsize = 1;
    vec = {{a}};
}

vector<vector<int>> Matrix::getraw() {
    return vec;
}

Matrix Matrix::operator*(int other) {
    vector<vector<int>> result;
    result.resize(vec.size());
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[0].size(); i++) {
            result[i].push_back(vec[i][j]*other);
        }
    }
    return Matrix(result);
}

Matrix Matrix::operator+(Matrix other) {
    vector<vector<int>> raw = other.getraw();
    vector<vector<int>> result;
    if (raw.size() != vec.size() || raw[0].size() != vec[0].size()) {
        return Matrix(0);
    }
    else {
        result.resize(raw.size());
        for (int i = 0; i < raw.size(); i++) {
            for (int j = 0; j < raw[0].size(); j++) {
                result[i].push_back(raw[i][j]+vec[i][j]);
            }
        }
        return result;
    }
}

Matrix Matrix::operator-(Matrix other) {
    return *this + other*-1;
}

Matrix Matrix::operator*(Matrix other) {
    vector<vector<int>> raw = other.getraw();
    vector<vector<int>> result;
    if (vec[0].size() != raw.size()) {
        return Matrix(-1);
    }
    else {
        result.resize(vec.size());
        for (vector<int> a : result) {
            a.resize(raw[0].size());
        }
        for(int i = 0; i < result.size(); i++){
            for(int j = 0; j < result[0].size(); j++){
                for(int k = 0; k < raw[0].size();k++){
                    result[i][j] += vec[i][k]*raw[k][j];
                }
            }
        }
        return Matrix(result);
    }
}