#include "common.h"

int main()
{
	//get plain text
	std::string pt{ getPlainText() };
	//std::cout << getPlainText() << '\n';

	// get key value
	int key{ getKeyValue() };

	//perfrom ceaser cipher
	std::string ct{ ceaserEncrypt(pt,key) };
	std::cout << "Plain-text :" << pt << '\n';
	std::cout << "After Encryption:" << ct << '\n';


	// Perform Decryption
	std::cout << "Do u want to decrypt? (y/n) :" << '\n';
	char choice{};
	std::cin >> choice;
	if (choice == 'y')
	{
		std::string decryptedText = { ceaserDecrypt(ct, key)  };
		std::cout << "After decryption:" << decryptedText << '\n';
	}
	
	return 0;
}
