#include <stdio.h>
#include<list>
#include<iostream>
using namespace std;

int main() {
	list<const char*>list_
	{
"Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome","Sugamo","Otuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku","sibuya","Ebisu","Meguro","Gotanda","Osaki","Shinagawa","Tamati","Hamamatucho","Shimbashi","Yurakucho"

	};
	printf("1970”N‚Ì˜Hü}\n");

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
	{
		cout << *it_f <<endl;
	}
		printf("2019”N‚Ì˜Hü}\n");
		for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
		{
			if (*it_f == "Tabata")
			{
				it_f = list_.insert(it_f, "Nishi-Nippri");
				++it_f;
			}
		}
		for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
		{
			cout << *it_f << endl;
		}
		printf("2022”N‚Ì˜Hü}\n");
		for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
		{
			if (*it_f == "Tamati")
			{
				it_f = list_.insert(it_f, "Takanawa Geteway");
				++it_f;
			}
		}
		for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
		{
			cout << *it_f << endl;
		}

		return 0;
}