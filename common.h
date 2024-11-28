#pragma once
#include <iostream>
#include <string>

// Forward Declarations
std::string getPlainText();
int getKeyValue();
std::string ceaserEncrypt(std::string pt, int key);
std::string ceaserDecrypt(std::string ct, int key);
