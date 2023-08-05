#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Person {
    string name;
    string address;
};

void swapData(Person& a, Person& b) {
    Person temp = a;
    a = b;
    b = temp;
}

void bubbleSort(vector<Person>& people) {
    int n = people.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (people[j].name > people[j + 1].name) {
                swapData(people[j], people[j + 1]);
            }
        }
    }
}

int main() {
    vector<Person> people = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"}
    };

    cout << "Data sebelum sorting:" << endl;
    cout << "Name\tAddress" << endl;
    for (const auto& person : people) {
        cout << person.name << "\t" << person.address << endl;
    }

    bubbleSort(people);

    cout << "\nData setelah sorting:" << endl;
    cout << "Name\tAddress" << endl;
    for (const auto& person : people) {
        cout << person.name << "\t" << person.address << endl;
    }

    return 0;
}
