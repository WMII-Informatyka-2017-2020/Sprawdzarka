#include "source.cpp"

int main() {
    int matrix[2][3][4] = { 0,  1,  2,  3,
                            4,  5,  6,  7,
                            8,  9, 10, 11,

                           12, 13, 14, 15,
                           16, 17, 18, 19,
                           20, 21, 22, 23};

    int result[2][3];
    int shape[2] = {2,3};

    max_over_last_axis(matrix, result);
    print_matrix(*result, shape, 2);

	return 0;
}
