

#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //В одномерном массиве, заполненном случайными числами,
    //определить минимальный и максимальный элементы.

   /* int massive[10] = { 1,52,81,-54,0,52,108,15,10,854 };                       //Для удобства проверки и длинны кода
    int max = massive[0], min = massive[0];                                       //я не стал созидать случайный список, во втором задании так же

    for (int i = 0; i < 10; i++) {
        if (max < massive[i])
            max = massive[i];
        if (min > massive[i])
            min = massive[i];
    }

    cout << max << "  " << min;*/


    //В одномерном массиве, заполненном случайными числами
    //в заданном пользователем диапазоне, найти сумму элементов,
    //значения которых меньше указанного пользователем.

    /*int massive[10] = {3,5,-9,-5,15,-8,1,-10,21,11 };
    int counte = 0, usnum;
    cout << "Задайте число: "; cin >> usnum;
    for (int i = 0; i < 10; i++) {
        if (usnum > massive[i])
            counte += massive[i];
    }
    cout << counte;*/



    //Пользователь вводит прибыль фирмы за год (12 месяцев).
    //Затем пользователь вводит диапазон(например, 3 и 6 — поиск
    //   между 3 - м и 6 - м месяцем).Необходимо определить месяц,
    //   в котором прибыль была максимальна и месяц, в котором
    //   прибыль была минимальна с учетом выбранного диапазона.

    // !.! Я так и не уяснил к чему нам прибыль за год, поэтому каждый месяц введён будет отдельно.

    /*
    int monthCash[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
    int Cash;
    int d1, d2;
    for (int i = 0; i < 12; i++) {
        cout << "Введите прибыль за " << i + 1 << " месяц: "; cin >> Cash;
        monthCash[i] = Cash;
    }
    for (int i = 0; i < 12; i++) {   //Для отдохновения и прочих напускных удобств выводит нам лоно составленного списка.
        cout << monthCash[i] << endl;
    }

    cout << "Введите диапазон: \n";
    cout << "от "; cin >> d1; cout << " до "; cin >> d2;

    int max = monthCash[d1], min = monthCash[d1];

    for (int i = d1-1; i < d2; i++) {
        if (max < monthCash[i])
            max = monthCash[i];
        if (min > monthCash[i])
            min = monthCash[i];
    }

    cout << "Максимум - " << max << endl << "Минимум - " << min;
    */






    //  В одномерном массиве, состоящем из N вещественных
    //  чисел вычислить :
    //  ■■ Сумму отрицательных элементов.
    //  ■■ Произведение элементов, находящихся между min и max
    //  элементами включительно.
    //  ■■ Произведение элементов с четными номерами.
    //  ■■ Сумму элементов, находящихся между первым и послед -
    //  ним отрицательными элементами.


    float mass[10] = { 1.25 , -5 , 8.1 , 10 , -3.5 , 7.56 , 4 , 7, 3.9 , 9 };
    float max = mass[0], min = mass[0], proza = 1, prozaMaxMin = 1, summaNeg = 0, summaBetween = 0;
    int maxNum, minNum;
    for (int i = 0; i < 10; i++) {
        if (max < mass[i])           //Определение индекса макс и мин числа
            maxNum = i;
     
        if (min > mass[i]) 
            minNum = i;
        
        if (mass[i] < 0)                //сумма отрицательных элементов
            summaNeg += mass[i];

        if (i % 2 == 0)                // произведение чётных
            proza *= mass[i];
    }

    //Сумма элементов между первым и последним отрицательными числами.
    for (int i = 0; i < 10; i++) {
        if (mass[i] < 0) {
            for (int j = i+1; mass[j] > 0; j++) {
                summaBetween += mass[j];
                cout << mass[j] << endl;
            }
            break;
        }
    }
    //Произведение между мин. и макс.
    if (minNum < maxNum) {
        for (int i = minNum; i < maxNum; i++) {
            prozaMaxMin *= mass[i];
        }
    }          
    else
    {
        for (int i = maxNum; i < minNum; i++) {
            prozaMaxMin *= mass[i];
        }
    }
    


    cout << "Сумма отрицательных элементов - " << summaNeg << endl;
    cout << "Произведение элементов с чётными номерами - " << proza << endl;
    cout << "Произведение элементов, находящихся между min и max. - " << prozaMaxMin << endl;
    cout << "Сумму элементов, находящихся между первым и последним отрицательным элементов - " << summaBetween << endl;
}


