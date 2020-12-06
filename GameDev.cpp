// GameDev.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

const int size_1 = 5;
const int size_2 = 11;

void show(int size_1, int size_2, char Array[5][11]) {
	for (int i = 0; i < size_1; i++) {
		for (int j = 0; j < size_2; j++) {
			cout << Array[i][j] << ends;
		}
		cout << endl;
	}
}

void MoveToObject(int size_1, int size_2, char Array[5][11]) {            // Delat cherez raznizu koordinat v pervoi stroke massiva s soxranenijam centra v peremenuyu
	for (int i = 0; i < size_1; i++) {
		for (int j = 0; j < size_2; j++) {
			/*if ((Array[i][j + 1] == '1' || Array[i][j + 1] == '2') && (Array[i][j] == '1'|| Array[i][j] == '1')) {    //esli v sosednej yacheyke symvol opuskaet vniz tekushuu
				Array[i+1][j] = Array[i][j];
				Array[i][j] = 'o';
				i++;
			}*/
			if (Array[i][j] == '1') {
				Array[i][j + 1] = Array[i][j];
				Array[i][j] = 'o';
				j++;
			}

			if (Array[i][j] == '2') {
				Array[i][j - 1] = Array[i][j];
				Array[i][j] = 'o';
				j--;
			}
		}

	}
}
//void save()
//void load()
//swapshow()
//movetakedistance()
//movestaylast()


int main()
{
	//float f = 0.1;
	//int a = 1, num = 200;
	//char*p = new char[20];
	//strcpy(p, "Name");
	//printf("%d %s %d", a, p, num);
	//cout << endl;
	//printf("%15.12f", f);
	//FILE *file = fopen("1.txt", "wt");					//Novaya tema
	//fprintf(file, "%2d%20s%4d", a, p, num);
	//cout << endl;
	//fclose(file);

	//int dRes, secRes;
	//char *pRes = new char[40];

	//FILE *file1= fopen("1.txt", "rt");
	//fscanf(file1, "%d %s %d", &dRes, pRes, &secRes);
	//fclose(file1);
	////printf("%d", dRes);
	//printf("%d %s %d" , dRes,pRes,secRes);







	char Array[size_1][size_2]{
	{'o','o','o','o','o','o','o','o','o','o','o'},
	{'o','1','o','o','o','o','o','o','o','2','o'},
	{'o','o','1','o','o','0','o','o','2','o','o'},
	{'o','1','o','o','o','o','o','o','o','2','o'},
	{'o','o','o','o','o','o','o','o','o','o','o'},
	};

	show(5, 11, Array);
	MoveToObject(5, 11, Array);
	cout << endl;
	show(5, 11, Array);
	MoveToObject(5, 11, Array);
	cout << endl;
	show(5, 11, Array);
	MoveToObject(5, 11, Array);
	cout << endl;
	show(5, 11, Array);




}

int main()  // Calculator
{
	//Vvod
	char *StartNum = new char[100];
	cin >> StartNum;

	
	int lastSymb = 0;
	int firstSymb = 0;


	for (size_t i = 0; i < strlen(StartNum); i++)
	{
		if (StartNum[i] == '+' || StartNum[i] == '*') {
			firstSymb = i;
			break;
		}
	}

	int FirstNum = atoi(StartNum);
	int SecNum = atoi(StartNum + firstSymb + 1);

	for (size_t i = firstSymb+1; i < strlen(StartNum); i++)
	{
		if (StartNum[i] == '+' || StartNum[i] == '*') {
			lastSymb = i;
			break;
		}
	}

	int ThirdNum = atoi(StartNum + lastSymb + 1);


	if (StartNum[firstSymb] == '*' && StartNum[lastSymb] == '+') {
		cout << FirstNum * SecNum + ThirdNum;
	}
	if (StartNum[firstSymb] == '+' && StartNum[lastSymb] == '*') {
		cout << SecNum * ThirdNum + FirstNum;
	}
	if (StartNum[firstSymb] == '+' && StartNum[lastSymb] == '+') {
		cout << SecNum + ThirdNum + FirstNum;
	}
	if (StartNum[firstSymb] == '*' && StartNum[lastSymb] == '*') {
		cout << SecNum * ThirdNum * FirstNum;
	}
	

	if (lastSymb == 0) {
		switch (StartNum[firstSymb]){
	case '+':
		cout << FirstNum << '+' << SecNum << '=' << FirstNum + SecNum << endl;
		break;
	case '*':
		cout << FirstNum << '*' << SecNum << '=' << FirstNum * SecNum << endl;
		break;
}
	}
	//switch (StartNum[firstSymb]) {
	//case '*':
	//	cout << FirstNum * SecNum + ThirdNum;
	//	break;
	//case '+':
	//	break;
	//}

	//switch (StartNum[lastSymb]) {
	//case '*':
	//	cout << SecNum * ThirdNum + FirstNum;
	//	break;
	//case '+':
	//	break;
	//}



	
	
	
	//switch (StartNum[firstSymb]){
	//	case '+':
	//		cout << FirstNum << '+' << SecNum << '=' << FirstNum + SecNum << endl;
	//		break;
	//	case '*':
	//		cout << FirstNum << '*' << SecNum << '=' << FirstNum * SecNum << endl;
	//		break;
	//}
		show(5, 11, Array);
	MoveToObject(5, 11, Array);
	cout << endl;
	show(5, 11, Array);
	MoveToObject(5, 11, Array);
	cout << endl;
	show(5, 11, Array);
	MoveToObject(5, 11, Array);
	cout << endl;
	show(5, 11, Array);

	

}






















void MoveToObject(int size_1, int size_2, char Array[5][11]) {            // Delat cherez raznizu koordinat v pervoi stroke massiva s soxranenijam centra v peremenuyu
	for (int i = 0; i < size_1; i++) {
		for (int j = 0; j < size_2; j++) {
			/*if ((Array[i][j + 1] == '1' || Array[i][j + 1] == '2') && (Array[i][j] == '1'|| Array[i][j] == '1')) {    //esli v sosednej yacheyke symvol opuskaet vniz tekushuu
				Array[i+1][j] = Array[i][j];
				Array[i][j] = 'o';
				i++;
			}*/
			if (Array[i][j] == '1') {
				Array[i][j + 1] = Array[i][j];
				Array[i][j] = 'o';
				j++;
			}

			if (Array[i][j] == '2') {
				Array[i][j - 1] = Array[i][j];
				Array[i][j] = 'o';
				j--;
			}
		}







int main()  // Calculator
{
	//Vvod
	char *StartNum = new char[100];
	cin >> StartNum;

	
	int lastSymb = 0;
	int firstSymb = 0;


	for (size_t i = 0; i < strlen(StartNum); i++)
	{
		if (StartNum[i] == '+' || StartNum[i] == '*') {
			firstSymb = i;
			break;
		}
	}

	int FirstNum = atoi(StartNum);
	int SecNum = atoi(StartNum + firstSymb + 1);

	for (size_t i = firstSymb+1; i < strlen(StartNum); i++)
	{
		if (StartNum[i] == '+' || StartNum[i] == '*') {
			lastSymb = i;
			break;
		}
	}

	int ThirdNum = atoi(StartNum + lastSymb + 1);


	if (StartNum[firstSymb] == '*' && StartNum[lastSymb] == '+') {
		cout << FirstNum * SecNum + ThirdNum;
	}
	if (StartNum[firstSymb] == '+' && StartNum[lastSymb] == '*') {
		cout << SecNum * ThirdNum + FirstNum;
	}
	if (StartNum[firstSymb] == '+' && StartNum[lastSymb] == '+') {
		cout << SecNum + ThirdNum + FirstNum;
	}
	if (StartNum[firstSymb] == '*' && StartNum[lastSymb] == '*') {
		cout << SecNum * ThirdNum * FirstNum;
	}
	

	if (lastSymb == 0) {
		switch (StartNum[firstSymb]){
	case '+':
		cout << FirstNum << '+' << SecNum << '=' << FirstNum + SecNum << endl;
		break;
	case '*':
		cout << FirstNum << '*' << SecNum << '=' << FirstNum * SecNum << endl;
		break;
}
	}
	//switch (StartNum[firstSymb]) {
	//case '*':
	//	cout << FirstNum * SecNum + ThirdNum;
	//	break;
	//case '+':
	//	break;
	//}

	//switch (StartNum[lastSymb]) {
	//case '*':
	//	cout << SecNum * ThirdNum + FirstNum;
	//	break;
	//case '+':
	//	break;
	//}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
