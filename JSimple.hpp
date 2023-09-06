#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <random>

#ifndef JSimple
#define JSimple

using string = std::string;
template <typename T>
using vector = std::vector<T>;

void Print(string String);

string GetInput();

string CreateInput(const string& prompt);

vector<string> ReadFileToList(const string& filepath);

string ReadFileToString(const string& filepath);

template <typename T>
void WriteToFile(const string& filename, const T& data);

string StringListToString(vector<string> stringList);

float RandomFloat(float min, float max);

int RandomInt(int min, int max);

string ToLowerCase(string string);

string ToUpperCase(string string);

#endif
