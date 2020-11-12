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
	///*cout << "test" << endl;
	//for (int i = 0; i < argc; i++)
	//{
	//	for (int j = 0; *(argv[i] + j) != '\0'; j++)
	//	{
	//		cout << *(argv[i] + j);
	//	}
	//	cout << endl;
	//}*/


	///*_wmkdir(L"111");*/

	//setlocale(LC_ALL, "");
	////FILE * f = fopen("DeleteMe.txt", "w+");
	////fclose(f);

	////cout << "rename: " << rename("DeleteMe.txt", "DeleteMe2.txt") << endl;
	////cout << "remove: " << remove("DeleteMe2.txt") << endl;



	//_finddata_t file;
	//long done = _findfirst("**", &file);
	//long tmp = done;
	//while (tmp != -1)
	//{
	//	cout << "**Struct**\nName: " << file.name << endl;

	//	if (file.attrib & _A_NORMAL)
	//		cout << "нормальный " << endl;
	//	if (file.attrib & _A_SUBDIR)
	//		cout << "дирректория " << endl;
	//	if (file.attrib & _A_RDONLY)
	//		cout << "только для чтения " << endl;
	//	if (file.attrib & _A_HIDDEN)
	//		cout << "скрытый " << endl;
	//	if (file.attrib & _A_SYSTEM)
	//		cout << "системный " << endl;
	//	if (file.attrib & _A_ARCH)
	//		cout << "архивный " << endl;

	//	tm *t_m;
	//	t_m = localtime(&file.time_create);
	//	cout << "cоздан: " << t_m->tm_mday << "." << t_m->tm_mon + 1 << "." << t_m->tm_year + 1900 << ends << t_m->tm_hour << ":" << t_m->tm_sec << endl << endl;
	//	tmp = _findnext(done, &file);
	//}

	////cout<<"make directory: "<<_mkdir("ky")<<endl;
	////cout<<"delete directory: "<<_rmdir("ky");
	//system("pause");
	//return 0;

	char s[] = "Text";
	int i = strlen(s), i2;

	auto f = fopen("C:\\MyRepos\\FileSystemsCommands\\test.txt", "w+b");
	fwrite(&i, sizeof(int), 1, f);
	fwrite(s, sizeof(char), i, f);
	fclose(f);

	f = fopen("C:\\MyRepos\\FileSystemsCommands\\test.txt", "rb");
	fread(&i2, sizeof(int), 1, f);

	char* xz = new char[i2 + 1];
	xz[i2] = '\0';
	fread(xz, sizeof(char), i2, f);

	fclose(f);


	cout << i2 << endl << xz << endl;

	delete xz;


	system("pause");
}