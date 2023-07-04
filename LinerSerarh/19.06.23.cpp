#include<iostream>
#include<cstdlib>
#include<ctime>

//����� ������� � �������
template <typename T>
void print_arr(T arr[], const int lenght) {
	std::cout << "{ ";
	for (int i = 0; i < lenght; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }" << std::endl;
}
//���������� ������� ���������� ������� �� left �� right
template <typename T>
void fill_arr(T arr[], const int lenght, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < lenght; i++)
		arr[i] = rand() % (right - left) + left;
}

//�������� ����� ������� ��������� �������� � ������ value ������ arr ������ lenght
//������� � ������� begin
template <typename T>
int search_index(T arr[], const int lenght, int value, int begin = 0) {
	for (int i = begin; i < lenght; i++)
		if (arr[i] == value)
			return i;
	return -1;
}

//�������� ����� ���������� ��������� �������� � ������ value ������ arr ������ lenght
template <typename T>
int search_last_index(T arr[], const int lenght, int value) {
	for (int i = lenght - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
//�������� ����� ���������� ��������� �������� � ������ value ������ arr ������ lenght
//������� � ������� begin
template <typename T>
int search_last_index(T arr[], const int lenght, int value, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}



int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	//�������� ����� ��������� � �������
	const int size = 10;
	int arr[size];

	fill_arr(arr, size, 1, 11); //1...10
	std::cout << "������:\n ";
	print_arr(arr, size);

	std::cout << "������� ����� -> ";
	std::cin >> n;
	 //����� ������� ���������
	/*int index = search_index(arr, size, n);
	//int index = search_index(arr, size, n, 5);
	if(index != -1)
	std::cout << "������� ����� � �������: " << index << std::endl;
	else
		std::cout << "����� ��� � �������!" << std::endl;*/

	//����� ���������� ���������
	int last_index = search_last_index(arr, size, n, 4);
	if (last_index != -1)
		std::cout << "������� ���������� ����� � ������: " << last_index << std::endl;
	else
		std::cout << "����� ��� � �������!" << std::endl;

	return 0;
}