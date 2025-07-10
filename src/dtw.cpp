#include "dtw.h"
#include <cmath>
#include <limits>
#include <algorithm>

float dtw_distance(const float* x, int len_x, const float* y, int len_y) {
    
    float** D = new float*[len_x + 1];
    for (int i = 0; i <= len_x; ++i) {
        D[i] = new float[len_y + 1];
        for (int j = 0; j <= len_y; ++j) {
            D[i][j] = std::numeric_limits<float>::infinity();
        }
    }

    D[0][0] = 0;

    for (int i = 1; i <= len_x; ++i) {
        for (int j = 1; j <= len_y; ++j) {
            float cost = std::fabs(x[i - 1] - y[j - 1]);
            float min_prev = std::min(std::min(D[i - 1][j], D[i][j - 1]), D[i - 1][j - 1]);
            D[i][j] = cost + min_prev;
        }
    }

    float distance = D[len_x][len_y];

    // Cleanup used space
    for (int i = 0; i <= len_x; ++i)
        delete[] D[i];
    delete[] D;

    return distance;
}