#include <iostream>

using namespace std;

int main() {
    int calories, fat_grams;
    float percentage, calories_from_fat;

    cout << "Enter the number of calories in the food: ";
    cin >> calories;

    cout << "Enter the number of fat grams in the food: ";
    cin >> fat_grams;

    calories_from_fat = fat_grams * 9;
    percentage = (calories_from_fat / calories) * 100;

    cout << "The percentage of calories that come from fat is: " << percentage << "%" << endl;
     

    if (percentage < 30) {
        cout << "The food is low in fat." << endl;
    }

    return 0;
}