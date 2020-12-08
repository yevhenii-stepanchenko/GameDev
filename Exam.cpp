#include "pch.h"
#include <iostream>
using namespace std;

const int length = 5;							// Рандомная длинна, можно менять

struct mediaStore {
	char movie[20];
	char director[20];
	char genre[15];
	float rating;
	int price;
};
void AddNewPos(mediaStore mS) {				//Добавление новой позиции
	cout << "Type Film Name:";
	cin >> mS.movie;
	cout << "Type Film Director";
	cin >> mS.director;
	cout << "Type Film Genre";
	cin >> mS.genre;
	cout << "Type Film Rating";
	cin >> mS.rating;
	cout << "Type Film Price";
	cin >> mS.price;
}

void print(mediaStore *mS) {					//Вывод
	cout <<"Name:"<<ends<< mS->movie << endl;
	cout<<"Director:" << ends << mS->director << endl;
	cout<<"Genre:"<< ends << mS->genre << endl;
	cout <<"Rating:"<< ends << mS->rating << endl;
	cout <<"Price:"<< ends << mS->price << endl;
	}

void SearchByName(mediaStore  mS[], int length ) {				//ПОиск по имени
	char movie[20];
	cin >> movie;
	for (size_t i = 0; i < length; i++)
	{
		if (strcmp(mS[i].movie, movie)) {
			print(&mS[i]);
		}
		else {
			cout << "Error: Try again";
		}
	}
}

void SearchByGenre(mediaStore mS[]) {						//Поиск по жанру
	cout << "Type Film Genre";
	char genre[15];
	cin >> genre;
	for (size_t i = 0; i < length; i++) {

	if (strcmp(mS[i].genre, genre)) {
		print(&mS[i]);
	}
	else {
		cout << "Error: No Film has this genre";
	}
}

}

void SearchByDirector(mediaStore mS[]) {						//Поиск по Режиссеру
	cout << "Type Film Director";
	char dir[15];
	cin >> dir;
	for (size_t i = 0; i < length; i++) {
		if (strcmp(mS[i].director, dir)) {
			print(&mS[i]);
		}
		else {
			cout << "Error: No Film has this director";
		}
	}

}
void SearchByRatinginGenre(mediaStore mS[]) {                       //Поиск по рейтингу в жанре
	int temp = 0;
	float max = 0;
	cout << "Type film genre";
	char genreRating[20];
	cin >> genreRating;
	for (size_t i = 0; i < length; i++)
	{
		if (strcmp(mS[i].genre, genreRating) && (mS[i].rating > max)) {              //Сравнение двух чаров
			max = mS[i].rating;
			temp = i;
		}

	}
	
}


int main()
{
	mediaStore mS[length]{
	{"Promised Neverland", "Kaiu Shirai", "Anime", 9.1, 10 },
	{"Akame ga Kill", "Takahiro", "Anime", 9.5, 15 },
	{ "The Boys", "Eric Kripke", "TV Series", 8.9, 20 },
	{"Sex Education", "Laurie Nunn", "TV Series", 8.3, 20 },
	};
	
	

	SearchByGenre(mS);
	
	//AddNewPos();
	//Короче не работает. Выводит все, а не отдельно один фильм, ошибка где-то в принте. Немного бы времени и доделал. Уверен что логика в функциях правильная. Как то так.
    
}
