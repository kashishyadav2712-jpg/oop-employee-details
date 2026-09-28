#include <iostream>
#include <string>
using namespace std;

class Product
private:
{
    int ProductID;
    string ProductName;
    float Price;
    float MonthlySales[12];
    int TotalQuantity;
    float TotalBill;

public:
    void acceptdetails()
    {
        cout << "Enter ProductID: ";
        cin >> ProductID;
        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, ProductName);

        cout << "Enter Price per unit: ";
        cin >> Price;

        cout << "Enter Monthly Sales for 12 months: ";
        TotalQuantity = 0;

        for (int i = 0; i < 12; i++) {
            cin >> MonthlySales[i];
            TotalQuantity += MonthlySales[i];
        }
    }

    class Product {
        void displaydetails() {
            for (int i = 0; i < 12; i++) {
            }
            TotalBill = TotalQuantity * Price;
        }

        void displayDetails() {
            cout << "\nProductID: " << ProductID << endl;
            cout << "Product Name: " << ProductName << endl;
            cout << "Price: " << Price << endl;
            cout << "Total Quantity Sold: " << TotalQuantity << endl;
            cout << "Total Bill: " << TotalBill << endl;
        }

        float getTotalBill() {
            return TotalBill;
        }
    };
    
    int main() {
        int n;

        cout << "Enter number of products: ";
        cin >> n;

        Product products[100];
        float grandTotal = 0;

        for (int i = 0; i < n; i++) {
            cout << "\n--- Product " << (i + 1) << " Details ---" << endl;
            products[i].acceptDetails();
            grandTotal += products[i].getTotalBill();
        }

        cout << "\n--- All Products Details -----" << endl;

        for (int i = 0; i < n; i++) {
            products[i].displayDetails();
        }

        cout << "\nGrand Total Bill: " << grandTotal << endl;

        return 0;
    }
}
