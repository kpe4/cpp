#include <iostream>
using namespace std;

int main(){
    long long bronze, silver, gold, platinum;

    cout << "Enter bronze:  ";
    cin >> bronze;
    cout << "Enter silver: ";
    cin >> silver;
    cout << "Enter gold: ";
    cin >> gold;
    cout << "Enter platinum: ";
    cin >> platinum;
    
    long long totalBronze = bronze 
                          + silver * 100 
                          + gold * 100 * 100
                          + platinum * 100 * 100 * 1000;
    
    long long newPlatinum = totalBronze / (100LL * 100 * 1000);
    totalBronze %= (100LL * 100 * 1000);
    long long newGold = totalBronze / (100LL * 100);
    totalBronze %= (100LL * 100);
    long long newSilver = totalBronze / 100;
    long long newBronze = totalBronze % 100;

    cout << "\nResult:\n";
    cout << "Platinum: " << newPlatinum << endl;
    cout << "Gold:  " << newGold << endl;
    cout << "Silver: " << newSilver << endl;
    cout << "Bronze:  " << newBronze << endl;

    return 0;
}
