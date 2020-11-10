#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <io.h>
#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

//Right click on project -> Properties -> Debugging -> Command arguments
int main(int argc, char* argv[])
{
	cout << "test" << endl;
	for (int i = 0; i < argc; i++)
	{
		for (int j = 0; *(argv[i] + j) != '\0'; j++)
		{
			cout << *(argv[i] + j);
		}
		cout << endl;
	}
	_wmkdir(L"111");

	setlocale(LC_ALL, "");
	FILE * f = fopen("DeleteMe.txt", "w+");
	fclose(f);

	cout << "rename: " << rename("DeleteMe.txt", "DeleteMe2.txt") << endl;
	cout << "remove: " << remove("DeleteMe2.txt") << endl;

	_finddata_t s;
	long done = _findfirst("*.*", &s);
	long tmp = done;
	while (tmp != -1)
	{
		cout << "**Struct**\nName: " << s.name << endl;

		if (s.attrib & _A_NORMAL)
			cout << "нормальный " << endl;
		if (s.attrib & _A_SUBDIR)
			cout << "дирректори¤ " << endl;
		if (s.attrib & _A_RDONLY)
			cout << "только дл¤ чтени¤ " << endl;
		if (s.attrib & _A_HIDDEN)
			cout << "скрытый " << endl;
		if (s.attrib & _A_SYSTEM)
			cout << "системный " << endl;
		if (s.attrib & _A_ARCH)
			cout << "архивный " << endl;

		tm *t_m;
		t_m = localtime(&s.time_create);
		cout << "—оздан: " << t_m->tm_mday << "." << t_m->tm_mon + 1 << "." << t_m->tm_year + 1900 << ends << t_m->tm_hour << ":" << t_m->tm_sec << endl << endl;
		tmp = _findnext(done, &s);
	}

	//cout<<"make directory: "<<_mkdir("ky")<<endl;
	//cout<<"delete directory: "<<_rmdir("ky");

	return 0;
}