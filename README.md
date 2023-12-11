# vigenereVirtuoso
For Dr. Nguyen and team...

This is a solo project I’ll be working with me, myself, and I for Case 3: Vigenere Cipher Decryption.
The submission aims to implement the Vigenère cipher, utilizing Vigenère square or Vigenère table to provide a method for encrypting and decrypting messages. This addresses the problem of secure communication by allowing users to encode their messages with a keyword. This topic interested me as it related closely to week 11 materials covered, and that mentioned lecture striked a resemblance with the topic of end-to-end encrypted messaging, effect of blue bubbles and green bubbles on teens and masses.
To solve this, the program encrypts and decrypts messages using the Vigenère cipher, a powerful polyalphabetic method. It utilizes a Vigenère table for both processes. Encryption shifts each character based on the key, resulting in a disguised message. Decryption simply reverses this process, revealing the original text.
There are 4 steps in this program:
•  Allow the user to input a plaintext message and a keyword.
•  Encrypt the plaintext using the Vigenère cipher.
•  Decrypt the ciphertext back to the original plaintext input.
•  Provide feedback to the user with the encrypted and decrypted messages.

Here are the steps incolved:

•  User Input

  The program starts by prompting the user to enter following 2 string values:
    plaintext
    keyword.
  both mentioned are read using the “std::cin >>” operator with spaces to allow for input. (i.e. std::cout << "statement statement:_" << std::endl;)

•  Encryption Function

  The encrypt function utilizes the plaintext and keyword inputted in the main function.
  It initializes an empty string ciphertext to store the result and sets the index j for the keyword to 0. ( std::string result = ""; )
  It iterates through each character in the plaintext.
      If the character is an alphabetic character, regardless of upper or lower case:
      It determines the offset based on the case.
      It calculates the encrypted character using the Vigenère square or Vigenère table and appends it to the ciphertext. Ei=( Pi+Ki ) % 26
      It updates the keyword index j in a cyclic manner.
    If the character is not alphabetic, it appends it directly to the ciphertext.
  Finally, it returns the encrypted ciphertext.

•  Decryption Function

  The decrypt function takes the ciphertext and the keyword as input.
  It initializes an empty string plaintext to store the result and sets the index j for the keyword to 0. ( std::string newResult = ""; )
  It iterates through each character in the ciphertext.
    If the character is an alphabetic character, regardless of upper or lower case:
      It determines the offset based on the case.
      It calculates the decrypted character using the Vigenère formula and appends it to the plaintext. Ei=( Pi+Ki+26 ) % 26
      It updates the keyword index j in a cyclic manner.
    If the character is not alphabetic, it appends it directly to the plaintext.
  Finally, it returns the decrypted plaintext.

•  Main function

  The main program calls the encrypt function to encrypt the entered plaintext using the provided keyword.
  It then prints the encrypted message.
  Next, it calls the decrypt function to decrypt the ciphertext using the same keyword.
  Finally, it prints the decrypted message.
  Using a while loop, it does a query where it asks you if you want to try something else. Not part of the assignment; however, need to have faith in my code and if it broke, let’s learn how to fix it
  Once it’s all said and done, there’s a bit of personal touch, a surprise of sorts. It’s the most yet least I can do for an online course. 😁


This program was coded on a windows machine. Using VS Code on Windows with an Ubuntu terminal compiling the program and showing output courtesy of Windows Subsystem for Linux. In addition, it was tested on a Docker container instance on a Mac laptop through VS code, running debian.

To do so, here's how terminal was configured:

user@PC:/storagePath/specified_folder$ g++ case3.cpp -o c3
user@PC:/storagePath/specified_folder$ ./c3

Thank you :)
