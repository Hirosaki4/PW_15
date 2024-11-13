#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <vector>

// Структура для зберігання інформації про товар
struct Product {
    std::string name;
    double price;
    int quantity;
};

// Оголошення функцій для роботи з продуктами
void addProduct(std::vector<Product>& products, const std::string& name, double price, int quantity);
void removeProduct(std::vector<Product>& products, const std::string& name);
Product findMostExpensive(const std::vector<Product>& products);
double calculateAveragePrice(const std::vector<Product>& products);

#endif // PRODUCT_H
