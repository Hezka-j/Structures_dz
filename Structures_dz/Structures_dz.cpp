#include <iostream>
#include<conio.h>
#include<ctime>
#include<windows.h>
using namespace std;
//enum Colors { BLACK, DARKBLUE, DARKGREEN, DARKCYAN, DARKRED, DARKMAGENTA, DARKYELLOW, GREY, DARKGREY, BLUE, GREEN, CYAN, RED, MAGENTA, YELLOW, WHITE };
struct Check {
    
    
    int count[5];
    double price_one[5];
    double price[5];
    string products[5] = {"tomato", "potato", "milk", "bread", "cucumber"};
    int discount;
    double total_price = 0;
    string name = "\tGood Check";
    int id[8];
    string wish[3] = { "\n\tMilk - 1 l\n\tEggs - 4 items\n\tFlour - 400 g\n\tSalt - 1 tea spoon\n\tSugar - 1 tablespoon\n\tMelted butter - 20 g", "Good luck with your tomatoes)", "Love and appreciate yourself! Never give up"};
};
void GenerateCheck(Check& shop)
{
    shop.discount = rand() % 5;
    srand(time(0));
    for(int i = 0; i < 5; i++)
    {
        shop.count[i] = 1 + rand() % (20 - 1);
        shop.price[i] = 20 + rand() % (1000 - 20);
        shop.price_one[i] = shop.price[i] / shop.count[i];
        shop.total_price += shop.price[i];
    }
    for (int i = 0; i < 8; i++)
    {
        shop.id[i] = rand() % 9;
    }
    shop.total_price -= shop.total_price * shop.discount / 100;
   

}
void PrintCheck(Check& shop)
{
    int random = rand() % 3;
    cout << shop.name << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << shop.products[i] << "\t" << shop.count[i] << "\t" << shop.price[i] << "\tFor one:" << shop.price_one[i] << "\n";
        
    }
    //cout << shop.discount << "\n";
    cout << "\n\t\tTotal Price: " << shop.total_price << "\n";
    cout << "\t:Wish:" << shop.wish[random] << "\n";
    cout << "\t\t" << shop.id << "\n";
    
    
}

int main()
{
    system("mode con cols=60 lines=30");
    system("Color F0");
    
    
    Check product;
    GenerateCheck(product);
    PrintCheck(product);
    Sleep(INFINITE);
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
