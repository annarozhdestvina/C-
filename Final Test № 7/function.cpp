#include <iostream>

//double max(const double a, const double b);

//void swap(int &a, int &b);

//int& getLarger(int* array, int length, int &larger);

/*int& doSomething(){
    int array[] = {1, 3, 5, 2,6 ,8};
    return array[2];
}

int sumTo(int value)
{
    return value + sumTo(value - 1);
}

float divide(float a, float b)
{
    return a / b;
}*/
 
//double divide(float a, float b) - переопределение функции
//{
 //   return a / b;
//}
// array - это массив, в котором мы проводим поиски.
// target - это искомое значение.
// min - это индекс минимальной границы массива, в котором мы осуществляем поиск.
// max - это индекс максимальной границы массива, в котором мы осуществляем поиск.
// Функция binarySearch() должна возвращать индекс искомого значения, если он обнаружен. В противном случае, возвращаем -1
int binarySearch(int *array, int target, int min, int max)
{
    int z =0;
    //while ( (min + max) / 2 > 1 ); 
    while (min <= max) {
        int i = min + (min + max) / 2;
        if(array[i] > target) {
            max = i--;
        } else if (array[i] < target) {
            max = i++;
        }
        else
        return i;
        //z = i;
    }
    return -1;
}

int main() {
   // doSomething();
    //sumTo(7);


	int array[] = { 4, 7, 9, 13, 15, 19, 22, 24, 28, 33, 37, 41, 43, 47, 50 };
 
	std::cout << "Enter a number: ";
	int x;
	std::cin >> x;
 
	int index = binarySearch(array, x, 0, 14);
 
	if (array[index] == x)
		std::cout << "Good! Your value " << x << " is on position "<< index << " in array!\n";
	else
		std::cout << "Fail! Your value " << x << " isn't in array!\n";
    return 0;
}