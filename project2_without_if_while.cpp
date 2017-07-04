#include <iostream>//use lib
using std::cin; using std::cout; using std::endl;
#include<string>//use string lib
using std::string;

//Build function to shift single character.
string shift(char chr, int move, string shifted){
  isupper(chr)? (chr+=move,((chr>90)? chr-=26:((chr<65)? chr+=26:chr+=0)),
  shifted = chr):((islower(chr))? (chr+=move,((chr>122)? chr-=26:((chr<97)?
  chr+=26:chr+=0)),shifted = chr):(chr+=0,shifted = chr));//using var? : instead of original statement, has same effect as origianl statement version

  cout<<"The shifted character is: "<<shifted<<'\n'<<'\n';
  return shifted;
}

//Build function to encryt text by using provided key
string encrypt(string code, string result) {
  cout << "Encrypting Please provide input (no whitespace) that ends with a period:" << '\n';
  cin>>code;
  int k = 0;
  string key1 = "CSE";
  string key2 = "cse";

  for(int i=0; i<int(code.length());i++){
    isupper(code[i])? ((result [i] = ((code[i]-65)+(key1[k]-65))%26+65),k++,
    ((k==3)? k=0:k+=0)):(islower(code[i])? ((result [i] =
      ((code[i]-97)+(key2[k]-97))%26+97),k++,((k==3)? k=0:k+=0)):((result[i] =
        code[i]),k++,((k==3)? k=0:k+0)));//using var? : instead of original statement, has same effect as original statement version
  }
  for(int i=0; i<int(code.length());i++){
    cout<<result[i];
  }
  cout<<endl;
  cout<<"Done Encrypting."<<'\n'<<'\n';
  return result;
}


//Build function to decode
string decrypt(string decode, string result) {
  cout << "Decrypting Please provide input (no whitespace) that ends with a period:" << '\n';
  cin>>decode;
  int k = 0;
  string key1 = "CSE";
  string key2 = "cse";

  for(int i=0; i<int(decode.length());i++){
    isupper(decode[i])? (((result [i] = ((decode[i]-65)-(key1[k]-65)+26)%26+65)),k++,((k==3)? k=0:k+=0)):(islower(decode[i])? (((result [i] = ((decode[i]-97)-(key2[k]-97)+26)%26+97)),k++,
    ((k==3)? k=0:k+=0)):((result[i] = decode[i]),k++,((k==3)? k=0:k+0)));
  }

  for(int i=0; i<int(decode.length());i++){
    cout<<result[i];
  }
  cout<<endl;
  cout<<"Done Decrypting."<<'\n'<<'\n';
  return result;
}

//Main function to run the entire program.
int main() {
  for (;;) {
    cout<<"Select the mode:"<<'\n'<<"0: Quit"<<'\n'<<"1: Single Character Shift"<<'\n'
    <<"2: Encrypt"<<'\n'<<"3: Decrypt"<<'\n'<<"Selection?"<<'\n';
    char choice;
    cin>>choice;
    switch(choice){//using switch function to call function to finish job by selected prompt from users

      case '0':{
        cout<<"Quitting."<<'\n';
        return 0;
      }
      case '1':{//once user prompt 1 then let user type input and call single shift function
        char chr;
        int move;
        string shifted;
        cout << "What character should be shifted?" << '\n';
        cin >> chr;
        cout << "Shifted by what integer (-26 to 26)?" << '\n';
        cin >> move;
        shift(chr,move,shifted);
        cout<<shifted<<'\n';
        continue;
      }
      case '2':{//once user prompt 2 then let user type input and call encrypt function
        string encode, code, result;
        encode = encrypt(code,result);
        continue;
      }
      case '3':{//once user prompt 3 then let user type input and call dencrypt function
        string decode;
        string result;
        decrypt(decode,result);
        continue;
      }
    }
  }
}
