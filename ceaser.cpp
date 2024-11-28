#include <iostream>
#include<string>

// Get user Plan Text
std::string getPlainText()
{
	std::string plainTxt;
	std::cout << "Enter plain text:" << '\n';
	std::getline(std::cin, plainTxt);

	return plainTxt;
}

// Generate Key Value
int getKeyValue()
{
	std::cout << "Select Key Value(1-26):" << '\n';
	int key{};
	std::cin >> key;
	return key;
}

// Encrypt Plan Text
std::string ceaserEncrypt(std::string pt, int key)
{
	for (int i{ 0 }; i < pt.size(); i++)
	{
		if (pt[i] == tolower(pt[i]) && pt[i] != ' ')
		{
			pt[i] = ((((pt[i] - 97) + key) % 26) + 97);
		}
		else if (pt[i] == toupper(pt[i]) && pt[i] != ' ')
		{
			pt[i] = ((((pt[i] - 65) + key) % 26) + 65);
		}

	}
	return pt;
}

// Decrypt Cipher Text
std::string ceaserDecrypt(std::string ct, int key)
{
	for (int i{ 0 }; i < ct.size(); i++)
	{
		if (ct[i] == tolower(ct[i]) && ct[i] != ' ')
		{
			ct[i] = (((((ct[i] - 97) - key) + 26) % 26) + 97);	// add 26 to adjust the character when decrypted
		}
		else if (ct[i] == toupper(ct[i]) && ct[i] != ' ')
		{
			ct[i] = (((((ct[i] - 65) - key) + 26) % 26) + 65);
		}

	}
	return ct;
}
