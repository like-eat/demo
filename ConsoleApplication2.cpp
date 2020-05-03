#include<iostream>
#include<fstream>
using namespace std;
struct student
{
	short stu_id;
	short score;
};
int main()
{
	int i,n;
	cin >> n;
	student* a = new student[n];
	for (i = 0; i < n; i++)
		cin >> a[i].stu_id>>a[i].score;
	ofstream title("out.txt", ios::binary);
		title.write((char*)a, sizeof a);
	title.close();
	student* b = new student[n];
	ifstream tifile("out.txt", ios::binary);
	for(i=0;i<n;i++)
	tifile.read((char*)(b + i), sizeof (student));
	tifile.close();
	ofstream tifle("out.txt", ios::out|ios::app);
	tifle.write((char*)b, sizeof b);
	tifle.close();
}