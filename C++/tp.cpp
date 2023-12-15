#include <iostream>

int main()
{
    const int max_len = 5;
    int array[max_len] = {};
    int i, temp = 0, j;

    for (i = 0; i < max_len; i++)
    {
        std::cin >> array[i];
    }
    std::cout << " " << std::endl;
    for (i = 0, j = max_len - 1; i < max_len / 2; i++, j--)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    for (i = 0; i < max_len; i++)
    {
        std::cout << array[i] << std::endl;
    }
    return 0;
}