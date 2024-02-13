#include <iostream>
#include <cmath>
using namespace std;

double triangle_area_calculator(int b, int h)
{
    return 0.5 * b * h;
}

int parallelepiped_volume_calculator(int l, int w, int h)
{
    return l * w * h;
}

double circumference_calculator(int r)
{
    return 2 * 3.14 * r;
}

bool is_even(int number)
{
    if (number % 2 == 0)
        return true;
    else
        return false;
}

int max_number(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

bool is_prime(int number)
{
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
            return 0;
    }
    return 1;
}

int sum_of_digits(int n)
{
    n = abs(n);
    if (n < 10)
        return n;
    return sum_of_digits(n / 10) + n % 10;
}

void test()
{
    assert(triangle_area_calculator(int b, int h)==)
    assert(triangle_area_calculator(int b, int h)==)
    assert(triangle_area_calculator(int b, int h)==)
    assert(triangle_area_calculator(int b, int h)==)
    cout << "Площадь треугольника-OK";

    assert(parallelepiped_volume_calculator(l, w, h)==)
    assert(parallelepiped_volume_calculator(l, w, h)==)
    assert(parallelepiped_volume_calculator(l, w, h)==)
    assert(parallelepiped_volume_calculator(l, w, h)==)
    cout << "Объем параллелепипеда-OК";

    assert(circumference_calculator(r)==)
    assert(circumference_calculator(r)==)
    assert(circumference_calculator(r)==)
    assert(circumference_calculator(r)==)
    cout << "Длина окружности-OK";

    assert(is_even(number)==)
    assert(is_even(number)==)
    assert(is_even(number)==)
    assert(is_even(number)==)
    cout << "Проверка на четность-OK";

    assert(max_number(num1, num2)==)
    assert(max_number(num1, num2)==)
    assert(max_number(num1, num2)==)
    assert(max_number(num1, num2)==)
    cout << "Бо'льшее число-OK";

    assert(is_prime(number)==)
    assert(is_prime(number)==)
    assert(is_prime(number)==)
    assert(is_prime(number)==)
    cout << "Проверка на простое число-OK";

    assert(sum_of_digits(n)==)
    assert(sum_of_digits(n)==)
    assert(sum_of_digits(n)==)
    assert(sum_of_digits(n)==)
    cout << "Сумма цифр числа-OK";
}

int main()
{
    int b, h, l1, w1, h1, r2, number0, num1, num2, number1, n;
    cout << "Вычисление площади треугольника" << endl;
    cout << "Введите основание треугольника" << endl;
    cin >> b;
    cout << "Введите высоту треугольника" << endl;
    cin >> h;
    if ((b > 0) && (h > 0))
    {
        cout << "Площадь треугольника" << endl
             << triangle_area_calculator(b, h) << endl;
    }
    else
        cout << "Некорректный ввод значений" << endl;
    cout << endl;

    cout << "Вычисление объема параллелепипеда" << endl;
    cout << "Введите ширину параллелепипеда" << endl;
    cin >> w1;
    cout << "Введите длину параллелепипеда" << endl;
    cin >> l1;
    cout << "Введите высоту параллелепипеда" << endl;
    cin >> h1;
    if ((w1 > 0) && (l1 > 0) && (h1 > 0))
    {
        cout << "Площадь параллелепипеда" << endl
             << parallelepiped_volume_calculator(l1, w1, h1) << endl;
    }
    else
    {
        cout << "Некорректный ввод значений" << endl;
    }
    cout << endl;

    cout << "Вычисление длины окружности" << endl;
    cout << "Введите радиус окружности" << endl;
    cin >> r2;
    if ((r2 > 0))
    {
        cout << "Длина окружности" << endl
             << circumference_calculator(r2) << endl;
    }
    else
        cout << "Некорректный ввод значений" << endl;
    cout << endl;

    cout << "Проверка на четность" << endl;
    cout << "Введите число" << endl;
    cin >> number0;
    if (is_even(number0) == 1)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    cout << endl;

    cout << "Большее число" << endl;
    cout << "Введите первое число" << endl;
    cin >> num1;
    cout << "Введите второе число" << endl;
    cin >> num2;
    if (num1 != num2)
        cout << "Большее число" << endl
             << max_number(num1, num2) << endl;
    else
        cout << "Числа равны" << endl;
    cout << endl;

    cout << "Проверка на простое число" << endl;
    cout << "Введите число" << endl;
    cin >> number1;
    if (is_prime(number1) && (number1 >= 0))
        cout << "true" << endl;
    else
        cout
            << "false" << endl;
    cout << endl;

    cout << "Сумма цифр числа" << endl;
    cout << "Введите число" << endl;
    cin >> n;

    cout << sum_of_digits(n) << endl;
    return 0;
}
