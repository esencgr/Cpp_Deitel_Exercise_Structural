 #include <iostream>
  using namespace std;

  int main()
  {
    string s;
    int i;

    i = 0;
    while (1) {
      i++;
      cin >> s;
      if (cin.fail()) return 0;
      
      cout << "String " << i << ": " << s << endl;  
    }
}
