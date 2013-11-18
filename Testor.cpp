#include "Testor.h"

Testor::Testor(int mo, int l){
	algorithm = NULL;
	mode = mo;
	length = l;
}

Testor::~Testor(){
	delete algorithm;
}

void Testor::test(std::string name){
	std::cout << "===========================\n";
	std::cout << "test <<" << name << ">>"<<std::endl;
	Stopwatch watch;
	watch.start();
	algorithm = SortingAlgoFactory::creatObj(name);

	std::vector<int> testcase1;
	std::vector<int> correctv1;
	for (int i = 0; i < length; ++i){
		int input = rand() % length;
		testcase1.push_back(input);
		correctv1.push_back(input);
	}

	std::sort(correctv1.begin(), correctv1.end());
	algorithm->sort(testcase1);

	bool correct = true;
	for (int i = 0; i < correctv1.size(); ++i){
		if (correctv1[i] != testcase1[i]){
			std::cout << "random mismatch at " << i << "\n";
			correct = false;
			break;
		}
	}
	if (correct){
		std::cout << "random correct! \n";
	}
	if (mode == 2){
		std::vector<int> testcase2;
		std::vector<int> correctv2;
		for (int i = 0; i < length; ++i){
			int input = length - i;
			testcase2.push_back(input);
			correctv2.push_back(input);
		}

		std::sort(correctv2.begin(), correctv2.end());
		algorithm->sort(testcase2);

		bool correct2 = true;
		for (int i = 0; i < correctv2.size(); ++i){
			if (correctv2[i] != testcase2[i]){
				std::cout << "reverse mismatch at " << i << "\n";
				correct2 = false;
				break;
			}
		}
		if (correct2){
			std::cout << "reverse correct! \n";
		}
	}
	watch.stop();
	std::cout << "total time: " << watch.getTime() << "\n";
	
}