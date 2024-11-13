#include <iostream>
#include "product.h"
#include <Windows.h>

int main() {
      SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::vector<Product> products;

    // Додавання товарів
    addProduct(products, "Телефон", 799.99, 10);
    addProduct(products, "Ноутбук", 1200.50, 5);
    addProduct(products, "Навушники", 199.99, 20);

    // Виведення середньої ціни товарів
    std::cout << "Середня ціна товарів: " << calculateAveragePrice(products) << " грн" << std::endl;

    // Знаходження найдорожчого товару
    Product expensiveProduct = findMostExpensive(products);
    std::cout << "Найдорожчий товар: " << expensiveProduct.name << ", Ціна: " << expensiveProduct.price << " грн" << std::endl;

    // Видалення товару
    removeProduct(products, "Навушники");

    // Перевірка середньої ціни після видалення
    std::cout << "Середня ціна після видалення: " << calculateAveragePrice(products) << " грн" << std::endl;

    return 0;
}
