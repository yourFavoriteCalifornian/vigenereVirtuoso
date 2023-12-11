// Vigenere Virtuoso - Case 3 Final Project submission
// Jamal Mansouri
// Campus ID #3007246

#include <iostream>
#include <string>

//Function Decleration. Function utilized to encrypt followed by
//  Decrypt Function.
std::string encrypt(const std::string &plaintext, const std::string &key);
std::string decrypt(const std::string &result, const std::string &key);

int main()
{
    int count = 1;

    while(count == 1)
    {
        // Declaration
        std::string plaintext, keyword; //To be inputed by user

        //Prompting the user and enhancing terminal view
        std::cout << std::endl;
        std::cout << "Please input following..." << std::endl << std::endl;


        // Get user input   -   Body

        std::cout << "Enter plaintext: ";
        std::cin >> plaintext;

        std::cout << "Enter keyword: ";
        std::cin >> keyword;

        std::cout << std::endl;
        std::cout << "Thank you for entering those, Encrypted and"
                  << "Dycrpted results are shown below:" << std::endl << std::endl;   


        // Body Definitions
        std::string result = encrypt(plaintext, keyword);
        std::string decryptedText = decrypt(result, keyword);

        // Body and results
            // Encrypt the message
        std::cout << "Encrypted message: " << result << std::endl;

            // Decrypt the message    
        std::cout << "Decrypted message: " << decryptedText << std::endl;
        std::cout << std::endl;
        
        std::cout << "Would you like to count it again? type 1 so I can assist you again: ";
        std::cin >> count;
    }
    
    std::cout << std::endl;
    std::cout << "Thank you for an outstanding semester. Happy holidays! :)" << std::endl << std::endl;

    return 0;
}

// This function receives text and shift and
// returns the encrypted text
std::string encrypt(const std::string &plaintext, const std::string &key)
{
    std::string result = "";
    size_t j = 0;

    // Ciphertext Function
    for (size_t i = 0; i < plaintext.length(); ++i)
    {
        char currentChar = plaintext[i];

        // apply transformation to each character
        // Both upper and lower case are accounted for
        if ((currentChar >= 'a' && currentChar <= 'z') || (currentChar >= 'A' && currentChar <= 'Z'))
        {
            char offset = (currentChar >= 'a' && currentChar <= 'z') ? 'a' : 'A';
            char encryptedChar = (currentChar + key[j] - 2 * offset) % 26 + offset;
            
            //Encrypt
            result += encryptedChar;
            j = (j + 1) % key.length();
        }
        else
        {
            result += currentChar;
        }
    }
    return result;
}

// This function Ciphert text, shift and
// returns the decrypted text
std::string decrypt(const std::string &result, const std::string &key)
{
    std::string newResult = "";
    size_t j = 0;
    
    //Decryption function that handles Ciphertext
    for (size_t i = 0; i < result.length(); ++i)
    {
        char currentChar = result[i];

        // Reapplies transformation to each character to reverse previous function
        // Both upper and lower case are accounted for
        if ((currentChar >= 'a' && currentChar <= 'z') || (currentChar >= 'A' && currentChar <= 'Z'))
        {
            char offset = (currentChar >= 'a' && currentChar <= 'z') ? 'a' : 'A';
            char decryptedChar = (currentChar - key[j] + 26) % 26 + offset;

            //Decryption
            newResult += decryptedChar;
            j = (j + 1) % key.length();
        }
        else
        {
            newResult += currentChar;
        }
    }
    return newResult;
}


// Thanks :)
