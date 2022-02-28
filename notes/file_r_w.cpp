// basic file operations
#include <iostream>
#include <fstream> //there are three classes ifstream ofstream and fstream
#include <string>
using namespace std;

int reader(string a) {
  cout << "filename : " << a << '\n';
  ifstream my_file;
  my_file.open(a);
  string line;
  if (my_file.is_open())
  {
    cout << "this is what the file says : " << '\n';
    while (getline(my_file,line))
    {
      cout << line << '\n';
    }
  }
  else {
    cout << "not open";
  }

  my_file.close();

  return 0;
}





int main () {
  ofstream myfile;
  string a = "example.txt";
  myfile.open(a);
  myfile << "Writing this to a file.\n";
  myfile << "hello there I need some practice 123 a five\n";
  myfile.close();

  reader(a);

  
  return 0;
}

