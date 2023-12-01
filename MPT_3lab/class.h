#pragma once
#include <string>

class lab3 {
public:
	
	static int fun1(int a) {
		if (a == 0) {
			return 0;
		}
		std::string num =  std::to_string(abs(a));
		std::string result = (a > 0 ? "+" : "-");
		for (int i = num.size() - 1; i >= 0; --i) {
			if (i % 2 == 0) {
				result += num[i];
			}
		}
		return std::stoi(result);
	}
	static int fun2(int a) {
		std::string num = std::to_string(abs(a));
		std::pair<int, int> max;
		max.first = -1; //r
		max.second = INT32_MIN; //max value
		for (int i = 0; i < num.size(); ++i) {
			if (i % 2 == 1 && ((int)num[i]) % 2 == 0
				&& ((int)num[i]) > (max.second)) {
				max.first = i;
			}
		}
		return max.first + 1;
	}
	static int fun3(int a, int shift) {
		std::string number = std::to_string(abs(a));
		int length = number.length();
		std::string shiftedNumber = (a > 0 ? "" : "-");

		for (int i = 0; i < length; i++) {
			int newIndex = (i - shift + length) % length;
			shiftedNumber += number[newIndex];
		}

		return std::stoi(shiftedNumber);
	}
	static double fun4(double** A, int rows, int cols) {
		double sum = 0;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols - i - 1; j++) {
				if ((int)(fmod(A[i][j], 2)) == 0) {
					sum += A[i][j];
				}
			}
		}
		return sum;
	}
};