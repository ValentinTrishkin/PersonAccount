// PersonAccount.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct personAccount
{
    std::string name;
    unsigned long numAccount = 0;
    double balanceAccount = 0.0;
};

void changBalance(personAccount* person, double balance)
{
    person->balanceAccount = balance;
}

int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "Rus");
    personAccount person;
    std::cout << "Введите имя: ";
    std::cin >> person.name;
    std::cout << "Введите номер счета: ";
    std::cin >> person.numAccount;
    std::cout << "Введите баланс счета: ";
    std::cin >> person.balanceAccount;
    double newbalance = 0.0;
    std::cout << "Введите новый баланс счета: ";    
    std::cin >> newbalance;
    changBalance(&person, newbalance);
    std::cout << "Ваш баланс: " << person.name << ", " << person.numAccount << ", " << person.balanceAccount << std::endl;
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
