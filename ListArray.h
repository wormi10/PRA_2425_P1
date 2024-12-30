#include <ostream>
#include "List.h"

template <typename T> 
class ListArray : public List<T> {

    private:
	   
	T* arr;
	int max;
	int n;
	static const int MINSIZE = 2;

    public:

  	ListArray(){
  		arr= new T [MINSIZE];
		max = MINSIZE;
		int n=0;
  }

  	~ListArray(){
 		delete[] arr;//:D
  }
  
  T operator[](int pos){
	if(pos < 0 && pos >= max){ 
 		throw std::out_of_range("Fuera de Rango");
		}
	else{
		return arr[pos];
	}
}
  
friend std::ostream& operator<<(std::ostream &out, const ListArray<T> &list){
	int tam = list.n;
	
	out<<"List => [";
	for(int i=0;i<tam;i++){
	out<<std::endl<<list.arr[i];
	}

	out<<"]";
	return out;
}
void resize(int new_size){

if(new_size > max){
T* nuevo = new T(new_size);

for(int i=0 ;i<max ;i++){
	nuevo[i]=arr[i];
}
delete[] arr;
arr = nuevo;
max = new_size;

	}

if((n+6) <= max){
T* nuevo = new T(new_size);
max = new_size - 4;
delete[] arr;
arr=nuevo;
}

}

void insert(int pos, T e)override{
if ( n = max-1){
	resize(max+5);
}


if (pos >= max || pos < 0){
throw std::out_of_range("la posicion solicitada fuera del rango");
	}
if((n+6) <= max){
	resize(max);
	}

}




void append(T e)override{
if(n==0){
	arr[0]=e;
	n+=1;
	}
	
if((n+1) == max){
	resize(max+5);
	}	

if((n+6) <= max){
        resize(max);
        }

int valor = arr[0];
n+=1;

for(int i=1;i<=n;i++){
	arr[i]=arr[i-1];
	}
arr[0]=valor;

}

void prepend (T e)override{
if (arr[max-1]==0){
	n+=1;
	arr[n+1] = e;
	}
else{
	resize(max+5);
	n+=1;
	arr[n+1] = e;
	}
if((n+6) <= max){
        resize(max);
        }
}

T remove(int pos)override{
	if(pos >= size() || pos<0 ){               
		throw std::out_of_range("posicion invalida");    		       		   }  
	else{
		T x = arr[pos];
	        n--;
		       
	for(int i=pos;i<size();i++){
		arr[i]=arr[i+1];	   
	}	  
	return x;
	}
}

T get(int pos)override{
if (pos >= size() || pos < 0){
	throw std::out_of_range("posicion invalida, intente de nuevo");
	}
else{
return arr[pos];
	}

}

int search (T e) override{

int posicion = -1;

for(int i=0;i<=max;i++){
	if(arr[i] == e){
		posicion = i;
		break;
		}
	}
return posicion;
}

int size()override{
return n;
}

bool empty()override{
return arr[0]!=0;
}

};
