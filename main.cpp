#include <iostream>

using namespace std;

 class Can{
    private:
      int volume;
      string content;
    public:
      Can(){
        volume = 0;
        content = "Empty";
      }
      Can(int v, string c)
      {
        volume = v;
        content = c;
      }
      int getVolume(){
        return volume;
      }
      string getContent(){
        return content;
      }
      void setVolume(int volume){
        this -> volume = volume; 
      }
      void setContent(string content){
        this -> content = content;
      }

};

int main(){
  
  int totalVolume = 0;
  
  Can c2(12,"Pepsi");
  totalVolume += c2.getVolume();
  cout << "" << c2.getVolume() << " ounce can of " << c2.getContent() << endl;
  
  Can c3(16,"Pears");
  totalVolume += c3.getVolume();
  cout << "" << c3.getVolume() << " ounce can of " << c3.getContent() << endl;

  Can c4(32,"Mustard");
 totalVolume += c4.getVolume();
  cout << "" << c4.getVolume() << " ounce can of " << c4.getContent() << endl;

  Can c5(40,"Apple Juice");
  totalVolume += c5.getVolume();
  cout << "" << c5.getVolume() << " ounce can of " << c5.getContent() << endl;

  cout << "The total weight is " << totalVolume;
  
  return 0;

}