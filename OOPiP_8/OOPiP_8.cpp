#include <iostream>

using namespace std;

int main()
{
    int h, w;
    cout << "enter height" << endl;
    cin >> h;
    cout << "enter width" << endl;
    cin >> w;
    int** matrix = new int* [w];
    for (int i = 0; i < w; i++) {
        matrix[i] = new int[h];
    }
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            matrix[i][j] = (i + 1) * 10 + j + 1;
        }
    }
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    int c, l;
    cout << "what line should I delete?" << endl;
    cin >> l;
    cout << "what column should I delete?" << endl;
    cin >> c;
    cout << "Uno momento..." << endl;
    l--; c--;
    int** output = new int* [w];
    for (int i = 0; i < w-1; i++) {
        output[i] = new int[h-1];
    }
    int k = 0;
    int q = 0;
    for (int i = 0; i < w; i++) {
        if (i != l) {
            for (int j = 0; j < h; j++) {
                if (j != c) {
                    output[k][q] = matrix[i][j];
                    q++;
                }
            }
            k++; q = 0;
        }
    }
    for (int i = 0; i < w-1; i++) {
        for (int j = 0; j < h-1; j++) {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
    delete[] output;
    delete[] matrix;
}