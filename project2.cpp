#include <iostream>//use lib
using std::cin; using std::cout; using std::endl;
#include<string>
using std::string;//use string lib

//Build function to shift single character.
string shift(char input, int move, string shifted){
  long position;
  position = int(input);
  if (isupper(input)){//Check if input is "A" to "Z"
    position += move;
    if (position>90){
      position -= 26;
    }else if (position<65){
      position += 26;
    }
    shifted = char(position);
  }else if(islower(input)){//Check if input is "a" to "z"
    position += move;
    if (position>122){
      position -= 26;
    }else if (position<97){
      position += 26;
    }
    shifted = char(position);
  }else{
    shifted = input;
  }
  cout<<"The shifted character is: "<<shifted<<'\n'<<'\n';
  return shifted;
}

//Build function to encryt text by using provided key
string encrypt(string code, string result) {
  cout << "Encrypting Please provide input (no whitespace) that ends with a period:" << '\n';
  cin>>code;
  int k = 0;
  string key1 = "CSE";
  string key2 = "cse";//Define a key which can be modified if users want to

  for(int i=0; i<int(code.length());i++){
    //this for loop is used to transfer each character in code to encrypted code
    if(isupper(code[i])){
      result [i] = ((code[i]-65)+(key1[k]-65))%26+65;
      k++;
      if (k==3){
        k=0;}}
    else if(islower(code[i])){
      result [i] = ((code[i]-97)+(key2[k]-97))%26+97;
      k++;
      if (k==3){
        k=0;}}
    else{
      result[i] = code[i];
      k++;
      if (k==3){
        k=0;}}}
  for(int i=0; i<int(code.length());i++){
    cout<<result[i];//display the final result after transfer the chars in code
  }
  cout<<endl;
  cout<<"Done Encrypting."<<'\n'<<'\n';
  return result;
}


//Build function to decode
string decrypt(string decode, string result) {
  cout << "Decrypting Please provide input (no whitespace) that ends with a period:" << '\n';
  cin>>decode;//get the input from users
  int k = 0;
  string key1 = "CSE";
  string key2 = "cse";

  for(int i=0; i<int(decode.length());i++){
    if(isupper(decode[i])){
      result [i] = ((decode[i]-65)-(key1[k]-65)+26)%26+65;
      k++;
      if (k==3){
        k=0;}}
    else if(islower(decode[i])){
      result [i] = ((decode[i]-97)-(key2[k]-97)+26)%26+97;
      k++;
      if (k==3){
        k=0;}}
    else{
      result[i] = decode[i];
      k++;
      if (k==3){
        k=0;}}}
  for(int i=0; i<int(decode.length());i++){
    cout<<result[i];
  }
  cout<<endl;
  cout<<"Done Decrypting."<<'\n'<<'\n';
  return result;
}

//Main function to run the entire program.
int main() {
  while (true) {
    cout<<"Select the mode:"<<'\n'<<"0: Quit"<<'\n'<<"1: Single Character Shift"<<'\n'
    <<"2: Encrypt"<<'\n'<<"3: Decrypt"<<'\n'<<"Selection?"<<'\n';
    string choice;
    cin>>choice;
    if (choice=="0"){//when users choose 0, quit program
      cout<<"Quitting."<<'\n';
      break;
    }
    else if (choice=="1"){//when users choose 1, call shift function to shift single character by using provided chr and movement.
      char input;
      int move;
      string shifted;
      cout << "What character should be shifted?" << '\n';
      cin >> input;
      cout << "Shifted by what integer (-26 to 26)?" << '\n';
      cin >> move;
      shift(input,move,shifted);
      cout<<shifted<<'\n';
      continue;
    }
    else if (choice=="2"){//when users choose 2, call encrypt function to encerypt users input
      string encode, code, result;
      encode = encrypt(code,result);
      continue;
    }
    else if (choice=="3"){//when users choose 2, call encrypt function to encerypt users input
      string decode;
      string result;
      decrypt(decode,result);
      continue;
    }
  }
}
