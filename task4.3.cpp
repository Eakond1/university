#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int width = 80;
    int height = 20;
    int oy_col = round(width / (4 * 3.14) * 3.14);
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            double x = 4 * 3.14 * col / width;
            double y = sin(x);
            int position = round((y + 1) * (height - 1) / 2);
            if (row == position) {
                bool extremum = false;
                if (col > 0 && col < width - 1) {
                    double x_prev = 4 * 3.14 * (col - 1) / width;
                    double x_next = 4 * 3.14 * (col + 1) / width;
                    double y_prev = sin(x_prev);
                    double y_next = sin(x_next);

                    if ((y > y_prev && y > y_next) or (y < y_prev && y < y_next)) {
                        extremum = true;
                    }
                }
                if (extremum) {
                    cout << "*";
                } else {
                    bool has_neighbor = false;
                    if (col > 0) {
                        double x_prev = 4 * 3.14 * (col - 1) / width;
                        double y_prev = sin(x_prev);
                        int prev_pos = round((y_prev + 1) * (height - 1) / 2);
                        if (row == prev_pos) has_neighbor = true;
                    }
                    if (col < width - 1 && !has_neighbor) {
                        double x_next = 4 * 3.14 * (col + 1) / width;
                        double y_next = sin(x_next);
                        int next_pos = round((y_next + 1) * (height - 1) / 2);
                        if (row == next_pos) has_neighbor = true;
                    }

                    if (has_neighbor) {
                        cout << " ";
                    } else {
                        cout << ".";
                    }
                }
            } else if (row == height / 2) {
                cout << "-";
            } else if (col == oy_col) {
                cout << "|";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
