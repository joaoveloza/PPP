#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::vector<std::string> sample {"Ana", "Maria", "Jose", "Ana", "Joao", "Carlos", "Antonio", "Joao", "Joaquim", "Joao"};

int main() {
	std::vector<std::string> values;
	std::vector<int> times;

	sort(sample.begin(), sample.end());

	values.push_back(sample[0]);
	times.push_back(1);

	for (size_t i = 1; i < sample.size(); i++) {
		if (sample[i] == sample[i - 1]) {
			++times[times.size()-1];
		}
		else {
			values.push_back(sample[i]);
			times.push_back(1);
		}
	}

	std::string min {sample[0]};
	std::string max {sample[0]};
	for (std::string s: sample) {
	 if (s < min) min = s;
	 if (s > max) max = s;
	}

	int max_times {0};
	int idx {0};
	for (size_t i=0; i < times.size(); i++) {
	 if (times[i] > max_times) {
	  max_times = times[i];
	  idx = i;
	 }
	}
 
std::cout << "The min string in the sample is: \"" << min << "\"\n";
std::cout << "The max string in the sample is: \"" << max << "\"\n";
std::cout << "The mode of the sample is: \"" << values[idx] << "\" with "
<< times[idx] << " appareances.\n";
}
