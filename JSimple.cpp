#include <iostream>
#include "JSimple.hpp"
#include <fstream>
#include <vector>
#include <string>
#include <random>
using string = JSimple::string;
template <typename T>
using vector = JSimple::vector<T>;

void Print(string String)
{
    std::cout << String;
}

string GetInput()
{
    string userInput;
    std::cin >> userInput;
    return userInput;
}

string CreateInput(const string& prompt) {
    string input;
    Print(prompt);
    std::cin >> input;
    return input;
}

vector<string> ReadFileToList(const string& filename) {
    vector<string> lines;

    std::ifstream file(filename);
    if (!file.is_open()) {
        return lines;
    }

    string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    file.close();

    return lines;
}

string ReadFileToString(const string& filename) {
    string lines;

    std::ifstream file(filename);
    if (!file.is_open()) {
        return lines;
    }

    string line;
    while (std::getline(file, line)) {
        lines = lines + "\n" + line;
    }

    file.close();

    return lines;
}

template <typename T>
void WriteToFile(const string& filename, const T& data) {
    std::ofstream outFile(filename, std::ios::app);
    if (!outFile.is_open()) {
        return;
    }

    outFile << data << std::endl;
    outFile.close();
}

string StringListToString(vector<string> stringList) {
    string string;

    for (const std::string& str : stringList) {
        string += str;
    }

    std::cout << string << std::endl;
    return string;
}

float RandomFloat(float min, float max) {
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_real_distribution<float> distribution(min, max);

    float random_number = distribution(gen);

    return random_number;
}

int RandomInt(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<int> distribution(min, max);

    int random_number = distribution(gen);

    return random_number;
}

string ToLowerCase(string string)
{
    std::string lowerString;
    
    for (char& c : string) {
        c = std::tolower(c);
        lowerString = lowerString + c;
    }

    return lowerString;
}

string ToUpperCase(string string)
{
    std::string upperString;

    for (char& c : string) {
        c = std::toupper(c);
        upperString = upperString + c;
    }

    return upperString;
}
