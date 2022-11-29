
#define _CRT_SECURE_NO_WARNINGS             // Макрос
#include <iostream>                         // Подключение библиотек
#include <windows.h>                              

using namespace std;

int main()                                 //Точка входа в функцию
{
    SetConsoleCP(1251);                   //Установки для языка в консоли
    SetConsoleOutputCP(1251); 
    
    char str[] = "Комп'ютер, ноутбук, Любченко, Компот, Інформатика, Комп'ютер, 123";  // Обьявление строковых переменных
    cout << str << endl;

    char word[] = { "Комп'ютер"};

    char* curword = strstr(str, word); // Проверка на наличие заданного слова

    int num = 0;
    int num1 = 0;
    while (curword) { // Цикл для подсчета количества слов 
        ++num;

        curword =  strstr(curword + strlen(word), word); // Стирание слов после заданного (иначе бескнонечный подсчет)

    }
    cout << "\nСлів Комп'ютер - " << num << endl; // Вывод

    char word2[] = { "Інформатика" };

    char* curword2 = strstr(str, word2); // Проверка на наличие заданного слова

    while (curword2) { // Цикл для подсчета количества слов 
        ++num1;

        curword2 = strstr(curword2 + strlen(word2), word2); // Стирание слов после заданного (иначе бескнонечный подсчет)

    }
    cout << "\nСлів Інформатика - " << num1 << endl; // Вывод

    num = num + num1; 

    cout << "\nЗагальна кількість слів Інформатика та Комп'ютер - " << num << endl; //Общий вывод
  
    
    return 0;
}


