#include <iostream>
using namespace std;
class Product
{
private:
    int productID;
    string productName;
    double price;
    static int totalProducts;
    static double totalRevenue;

public:
    Product(int id = 0, string n = "unknown", double p = 0)
    {
        productID = id;
        productName = n;
        price = p;
        totalProducts++;
        totalRevenue += price;
    }
    void sell(int quantity)
    {
        totalRevenue += quantity * price;
    }
    double getPrice()
    {
        return price;
    }
    static int getTotalProducts()
    {
        return totalProducts;
    }
    static double getTotalRevenue()
    {
        return totalRevenue;
    }
    void displayProducts() const
    {
        cout << "Product Name :" << productName << endl;
        cout << "Product Id :" << productID << endl;
        cout << "Price :" << price << endl;
    }
};
int Product::totalProducts = 0;
double Product::totalRevenue = 0;
int main()
{
    Product P1(123, "Laptop", 50000);
    Product P2(321, "Computer", 9800);
    P1.displayProducts();
}