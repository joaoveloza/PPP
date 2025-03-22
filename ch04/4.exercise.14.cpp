// find the mode of a sequence.

#include <iostream>
#include <vector>
#include <algorithm>


std::vector<int> sequence {2,1,7,9,2,4,7,8,9,2,3,3,2,6,5,4,2,5,5,5,5,5,5,5,5,5};

int main() {
	std::vector<int> values;
	std::vector<int> times;

	sort(sequence.begin(), sequence.end());
	values.push_back(sequence[0]);
	times.push_back(1);

	for (size_t i = 1; i < sequence.size(); i++) {
		if (sequence[i] == sequence[i-1])
			++times[times.size() - 1];
		else {
			values.push_back(sequence[i]);
			times.push_back(1);
		}
	}

	int max {0};
	int idx {0};
	for (size_t i = 0; i <times.size(); ++i) {
	  if (times[i] > max) {
	   max = times[i];
	   idx = i;
	  }
	}

	std::cout << "The mode of the sequence is " << values[idx] << " with " << times[idx] << " appareances.\n";
}
