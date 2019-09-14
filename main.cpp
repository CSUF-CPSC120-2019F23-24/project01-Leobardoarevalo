// Name:Leobardo arevalo
// This program calculates and displays business expenses.
#include <iostream>
#include <string>
int main() {

 int days;
 double hotel, meal;
 std::string location; // location is dallas
 double total;
std::cout<< " What is the business trip location? \n";
std::cin >> location;

std::cout << " how many days will the trip take \n";
std::cin >> days;

 std::cout << " what is the total hotel expense? \n";
 std::cin >> hotel;

 std::cout << "what is the total meal expense? \n";
 std::cin >> meal;

 total = hotel + meal;

 std::cout << "location \t days \t hotel \t meal \t total" << std::endl;
 std::cout << location << "\t"
           << days << "\t"
           << hotel << "\t"
           << meal << "\t"
           << total<< "\t" << std::endl;
}
