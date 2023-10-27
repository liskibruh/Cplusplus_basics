#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Product {
public:
        int productId;
        string productName;
        string name;
        string description;
        double price;
        string manufacturer;
        int quantityInStock;

        Product(int id, string name, string description, double price, string manufacturer, int quantity)
        {
                this->productId = id;
                this->name = name;
                this->description = description;
                this->price = price;
                this->manufacturer = manufacturer;
                this->quantityInStock = quantity;
        }

        void displayInfo()
        {
                cout << "Product ID: " << productId << endl;
                cout << "Product Name: " << name << endl;
                cout << "Description: " << description << endl;
                cout << "Price: $" << price << endl;
                cout << "Manufacturer: " << manufacturer << endl;
                cout << "Quantity in Stock: " << quantityInStock << endl;
        }

        double calculateValue()
        {
                return price*quantityInStock;
        }

        void updateProductInfo(double newPrice, string newDescription, string newManufaturer, int newQuantity)
        {                       
                price = newPrice;
                description = newDescription;
                manufacturer = newManufaturer;
                quantityInStock = newQuantity;
        }

        int getProductId()
        {
                return productId;
        }
};

class Inventory {
    vector<Product> products;

public:
    void addProduct(Product& product) {
        products.push_back(product);
    }

    void displayInventory() {
        cout << "Inventory Details:\n";
        for (Product& product : products) {
            product.displayInfo();
            cout << "Total Value: $" << product.calculateValue() << "\n";
            cout << "-------------------------\n";
        }
    }

    void updateProduct(int productId, double newPrice, string newDescription, string newManufacturer, int newQuantity) {
        for (Product& product : products) {
            if (product.getProductId() == productId) {
                product.updateProductInfo(newPrice, newDescription, newManufacturer, newQuantity);
                return;
            }
        }
        cout << "Product with ID " << productId << " not found in inventory.\n";
    }

    void removeProduct(int productId) {
        auto it = remove_if(products.begin(), products.end(),
            [productId](Product& p) { return p.getProductId() == productId; });
        if (it != products.end()) {
            products.erase(it, products.end());
            cout << "Product with ID " << productId << " removed from inventory.\n";
        }
        else {
            cout << "Product with ID " << productId << " not found in inventory.\n";
        }
    }

    vector<Product> searchProducts(string& keyword) {
        vector<Product> results;
        for (Product& product : products) {
            if (product.productName.find(keyword) != string::npos ||
                product.manufacturer.find(keyword) != string::npos ||
                to_string(product.price).find(keyword) != string::npos) {
                results.push_back(product);
            }
        }
        return results;
    }

    void generateInventoryReport() {
        int totalProducts = products.size();
        int totalQuantity = 0;
        double totalValue = 0.0;

        for (Product& product : products) {
            totalQuantity += product.quantityInStock;
            totalValue += product.calculateValue();
        }

        cout << "Inventory Report:\n";
        cout << "Total Number of Products: " << totalProducts << "\n";
        cout << "Total Quantity in Stock: " << totalQuantity << "\n";
        cout << "Total Inventory Value: $" << totalValue << "\n";
    }
};

int main() {
    Inventory inventory;

    Product smartphone(1, "iPhone 13", "Latest iPhone model", 999.99, "Apple", 10);
    Product laptop(2, "Dell XPS 13", "Powerful laptop for professionals", 1299.99, "Dell", 5);
    Product accessory(3, "Phone Charger", "Fast charging cable", 19.99, "Anker", 50);

    inventory.addProduct(smartphone);
    inventory.addProduct(laptop);
    inventory.addProduct(accessory);

    cout << "Initial Inventory:\n";
    inventory.displayInventory();

    inventory.updateProduct(1,1099.99, "Latest iPhone model with upgraded camera", "Apple Inc.", 15);
    inventory.removeProduct(2);

    cout << "Updated Inventory:\n";
    inventory.displayInventory();

    string searchKeyword = "Dell";
    vector<Product> searchResults = inventory.searchProducts(searchKeyword);

    cout << "Search Results for '" << searchKeyword << "':\n";
    for (Product& product : searchResults) {
        product.displayInfo();
        cout << "-------------------------\n";
    }

    inventory.generateInventoryReport();

    return 0;
}