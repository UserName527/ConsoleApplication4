#include <iostream>
#include <format>

int find_time(int time)
{
	int seconds = time % 60;
	int minutes = time / 60;
	int hours = minutes / 60;
	minutes = minutes % 60;
	std::cout << std::format("{}:{}:{}",hours, minutes, seconds);
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int second_time;
	std::cout << "Введить время в секундах: ";
	std::cin >> second_time;
	find_time(second_time);

}