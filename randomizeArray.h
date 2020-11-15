#include <random>
#include <functional>
#include <chrono>

namespace mtjrandom {
	// gennerate number in [m, n]
	int randint(int m, int n);
	// randomize an array with length of len
	void randmize_array(int * a, int len);
};

