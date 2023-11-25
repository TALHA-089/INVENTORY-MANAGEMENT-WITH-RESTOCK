#include<iostream>
#include<string>
using namespace std;
int main()
{
	char product_choice;
	do
	{
		int stock_quantity = 0;
		int stock_sold;
		int stock_remaining;
		int restock;
		int count = 0;
		cout << "\nEnter Initial Stock Quantity for the Product: ";
		cin >> stock_quantity;
		while (stock_quantity > 0)                                        //Stock Treshold is 0
		{
			char choice;
			cout << "\n\nEnter the Quantity of Stock Sold: ";
			cin >> stock_sold;
			stock_remaining = stock_quantity - stock_sold;
			cout << "\n\nRemaining Stock: " << stock_remaining;
			stock_quantity = stock_remaining;
			count += 1;
			if (count % 2 == 0)
			{
				cout << "\n\nDO YOU WANT TO RESTOCK (Y/N): ";
				cin >> choice;
				if (choice == 'Y' || choice == 'y')
				{
					cout << "\n\nEnter Quantity for the Restock: ";
					cin >> restock;
					stock_quantity += restock;
					cout << "\n\nStock Quantity After Restock:  " << stock_quantity;
				}
				else
				{
					continue;
				}

			}
		}
		cout << "\n\nDo you want to Continue for Another Product (Y): ";
		cin >> product_choice;
	} while (product_choice!='N');
	cout << endl << endl;
	system("pause");
	return 0;
}