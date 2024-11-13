#include "product.h"
#include <algorithm>

// Додає товар у вектор
void addProduct(std::vector<Product>& products, const std::string& name, double price, int quantity) {
    products.push_back({name, price, quantity});
}

// Видаляє товар з вектора за ім'ям
void removeProduct(std::vector<Product>& products, const std::string& name) {
    products.erase(std::remove_if(products.begin(), products.end(),
        [&](const Product& product) { return product.name == name; }), products.end());
}

// Знаходить найдорожчий товар
Product findMostExpensive(const std::vector<Product>& products) {
    return *std::max_element(products.begin(), products.end(),
        [](const Product& a, const Product& b) { return a.price < b.price; });
}

// Обчислює середню ціну всіх товарів
double calculateAveragePrice(const std::vector<Product>& products) {
    double total = 0;
    for (const auto& product : products) {
        total += product.price;
    }
    return products.empty() ? 0.0 : total / products.size();
}
