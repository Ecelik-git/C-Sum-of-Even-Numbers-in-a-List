#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> sayi={2, 7, 9, 12, 16, 21};
  int sum_even=0;
  for (int i=0; i<sayi.size(); i++){
      if(sayi[i]%2==0){
          sum_even=sum_even+sayi[i];
      }else{
          sum_even=sum_even;
      }
  }
  cout<<"Sum of even numbers in \
  the list is "<<sum_even<<"\n";
}
