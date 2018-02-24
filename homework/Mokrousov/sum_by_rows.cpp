#include <chrono>
#include <iostream>

class Timer
{
public:
	Timer()
		: start_(std::chrono::high_resolution_clock::now())
	{
	}

	~Timer()
	{
		const auto finish = std::chrono::high_resolution_clock::now();
		std::cout << std::chrono::duration_cast<std::chrono::microseconds>(finish - start_).count() << " us" << std::endl;
	}

private:
	const std::chrono::high_resolution_clock::time_point start_;
};

int main()
{
	Timer t;
	const int Msize = 10000;
	int sum=0;
	int ** m = new int*[Msize];
	for (int i = 0; i < Msize; i++) m[i] = new int[Msize];
	int mas[Msize][Msize];
	
	for (int i = 0; i < Msize; i++)
	{
		for (int j = 0; j < Msize; j++)
		{
			sum+= m[i][j];
		}
	}
			std::cout << sum<<"        ";
	return 0;
}
