#include "randomizeArray.h"

namespace mtjrandom {
	// return random number between m and n, both included
	// if m > n return m
	int randint(int m, int n) {
		static std::default_random_engine dre(std::chrono::system_clock::now().time_since_epoch().count());
		if (m >= n) {
			return m;
		}
		std::uniform_int_distribution<int> di(m, n);
		return di(dre);
	}

};

namespace mtjrandom {
	// randomize an array with len elements
	void randmize_array(int *a, int len)
	{
		for (int i = 0; i < len; ++i)
		{
			auto index = randint(i, len - 1);
			std::swap(a[i], a[index]);
		}
	}
};


