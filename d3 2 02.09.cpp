// d3 2 02.09.cpp 
//4) Создайте контейнер map из 5 элементов для сохранения информации о среднем балле студентов.
//Каждый элемент этого контейнера будет содержать пару "имя студента" - средний балл студента.Найдите одного из студентов.



#include <iostream>
#include <map>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    string  Student;
    int GPA;
    string names[] = { "Ivanov", "Petrov", "Sidorov",
    "Trys", "Byvaliy" };
    int GPAs[] = { 9, 12, 8, 10, 5 };
    map<string, int> mapStudens; // отображение
    map<string, int>::iterator iter; // итератор
    for (int j = 0; j < 5; j++)
    {
        Student = names[j]; // получение данных из массивов
        GPA = GPAs[j];
        mapStudens[Student] = GPA; // занесение их в отображение
    }
    for (iter = mapStudens.begin(); iter != mapStudens.end(); iter++)
        cout << (*iter).first << ' ' << (*iter).second << "\n";
    cout << "Введите Студента: "; // получение имени студента
    cin >> Student;
    GPA = mapStudens[Student]; // найти средний бал
    cout << "Средний балл: " << GPA << "\n";
    cout << endl; // вывод всего отображения
   
}


