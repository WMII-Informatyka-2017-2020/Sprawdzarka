#include "source.cpp"

int main() {
	int n_dims; // number of dimensions
	int shape[100]; // array for matrix shape
	int matrix[10000]; // the matrix array

	// read the matrix parameters and values
	n_dims = read_matrix(matrix, shape);
	// apply minimum function over last dimension
	apply_over_last_axis(matrix, shape, n_dims, MIN);
	int new_shape[] = {2, 3};
	int new_n_dims = 2;
	print_matrix(matrix, new_shape, new_n_dims);
	return 0;
}
