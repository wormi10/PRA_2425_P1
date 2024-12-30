#include <ostream>
#include "List.h"

template <typename T> 
class ListArray : public List<T> {

    private:
T* arr;
int max;
int n;
static const int MINSIZE = 2;
void resize(int new_size){

}
    public:
  ListArray(){
  this -> arr=new T arr[MINSIZE];
  }
  ~ListArray(){
 delete arr;//:D
  }
  
  T operator[](int pos){
if(pos < 0 && pos>MINSIZE-1){ 
 std::out_of_range
	}

  }
friend std::ostream& operator<<(std::ostream &out, const ListArray<T> &list)
