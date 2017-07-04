# Vigenere-Cipher
CSE232 Project2

Here is the project description.

You will need to write a C++ file that (when executed) prompts the user for one of 4 options:
Select the mode:
0: Quit
1: Single Character Shift
2: Encrypt
3: Decrypt
Selection?
 
If the user selects Quit (by pressing 0 and <enter>), quit with the message: Quitting.
 
If the user selects the Single Character Shift mode, give the prompt to select a letter:
What character should be shifted?
Then prompt for the shift:
Shifted by what integer (-26 to 26)?
Then output the shifted character like so:
The shifted character is: A
Then print a blank line and return to the "select mode" prompt.
 
If the user selects the Encrypt mode, prompt the user for input:
Encrypting Please provide input (no whitespace) that ends with a period:
The user then provides some characters and presses enter. So your program then outputs the encrypted text using the repeating key of "CSE". Don't forget to include the final period.
Print: Done Encrypting.
Then print a blank line and return to the "select mode" prompt.
 
If the user selects the Decrypt mode, prompt the user for input:
Decrypting Please provide input (no whitespace) that ends with a period:
This mode behaves identically to the Encrypt mode, except that "Encrypting" is replaced by "Decrypting" and the CSE key is used to reverse the encryption process.
 
Be sure that your shifts wrap-around their particular alphabet ( 'X' shifted by 4 is 'B'; 'B' shift by -3 is 'Y'; 'x' shifted by 4 is 'b' ), and that non-letter characters (like ';' and '4') are not shifted.
 
After you pass the tests related to "project2.cpp", you'll need to write "project2_without_if_while.cpp", which does the exact same thing as "project2.cpp". However, this new file is not allowed to use the "if" keyword or the "while" keyword, you need to make do with the other control statements.
 
Lastly, we will be manually grading your code to check for the appropriate use of functions. Your files should not have many lines of redundant code and your code should be divided cleanly into functions where reasonable. For instance, my solution has 6 functions (including main). You will not get any manual grading points unless you are already passing all the automated tests.
