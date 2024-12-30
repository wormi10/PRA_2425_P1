#include <ostream>
#include "List.h"
#include "Node.h"

template <typename T>
class ListLinked : public List<T> {
	private:
Node<T>* first;
int n;
	public:
ListLinked(){}
~ListLinked(){}
T operator[](int pos){}
friend std::ostream& operator<<(std::ostream &out, const ListLinked<T> &list){
}
#include <ostream>
#include "List.h"
#include "Node.h"

template <typename T>
class ListLinked : public List<T> {
	private:
Node<T>* first;
int n;
	public:
ListLinked(){}
~ListLinked(){}
T operator[](int pos){}
friend std::ostream& operator<<(std::ostream &out, const ListLinked<T> &list){
}
}
