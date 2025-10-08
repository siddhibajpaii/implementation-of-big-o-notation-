// Siddhi Bajpai
// 24070123109
// B1
// Demonstration of Different Time Complexities: O(1), O(n), O(n^2)

#include <iostream>
#include <vector>
using namespace std;
int getFirstElement(const vector<int>& arr) {
    return arr[0]; 
}
void printElements(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
void printPairs(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            cout << "(" << arr[i] << "," << arr[j] << ") ";
        }
        cout << endl;
    }
}
int main() {
    vector<int> numbers = {1, 5, 8, 34, 15};
    cout << "O(1) Example: First element = " << getFirstElement(numbers) << endl;
    cout << "\nO(n) Example: Printing elements:" << endl;
    printElements(numbers);
    cout << "\nO(n^2) Example: Printing pairs:" << endl;
    printPairs(numbers);
    return 0;
}

//Output:
//O(1) Example: First element = 1 
//O(n) Example: Printing elements:
//1 5 8 34 15
//O(n^2) Example: Printing pairs:
//(1,1) (1,5) (1,8) (1,34) (1,15) 
//(5,1) (5,5) (5,8) (5,34) (5,15) 
//(8,1) (8,5) (8,8) (8,34) (8,15) 
//(34,1) (34,5) (34,8) (34,34) (34,15) 
//(15,1) (15,5) (15,8) (15,34) (15,15) 
