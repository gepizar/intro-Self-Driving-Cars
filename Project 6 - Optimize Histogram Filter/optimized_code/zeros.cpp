#include "headers/zeros.h"

using namespace std;

vector < vector <float> > zeros(int height, int width) {
  
	vector < vector <float> > newGrid (height, vector <float> (width, 0.0));
  	return newGrid;
	
  	int i;
	// vector < vector <float> > newGrid;
	newGrid.reserve(height);

	vector <float> newRow;
	newRow.assign(width, 0);

	for (i=0; i<height; i++) {
		newGrid.push_back(newRow);
	}
	return newGrid;
}