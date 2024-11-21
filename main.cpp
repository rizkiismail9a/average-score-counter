#include <iostream>
using namespace std;

void getUserData(string &nim, string &name)
{
    cout << "\nMasukkan NIM: ";
    cin >> nim;
    cout << "Masukkan Nama: ";
    cin >> name;
}

void getScores(float &score1, float &score2, float &score3)
{
    cout << "Masukkan Nilai 1: ";
    cin >> score1;
    cout << "Masukkan Nilai 2: ";
    cin >> score2;
    cout << "Masukkan Nilai 3: ";
    cin >> score3;
}

float getAverage(float &score1, float &score2, float &score3)
{
    float average = (score1 + score2 + score3) / 3;

    return average;
}

char getGrade(float average)
{
    if (average >= 80)
    {
        return 'A';
    }
    else if (average >= 70 && average < 80)
    {
        return 'B';
    }
    else if (average >= 60 && average < 70)
    {
        return 'C';
    }
    else if (average >= 50 && average < 60)
    {
        return 'D';
    }
    else
    {
        return 'E';
    }
}

int main()
{
    string nim, name;
    float score1, score2, score3;

    getUserData(nim, name);
    getScores(score1, score2, score3);

    float average = getAverage(score1, score2, score3);
    char grade = getGrade(average);

    cout << "\nRata-rata adalah: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}