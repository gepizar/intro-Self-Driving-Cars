#include "headers/initialize_beliefs.h"

using namespace std;

// OPTIMIZATION: pass large variables by reference
vector< vector <float> > initialize_beliefs(int height, int width) {

	// not necessary to calculate the area variable first since it is only used once
	float prob_per_cell = 1.0 / float(height * width);
	vector< vector<float> > newGrid (height, vector<float> (width, prob_per_cell));
	return newGrid;
}
	