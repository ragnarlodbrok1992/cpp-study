#include <algorithm>

class Array {
  private:
    int size;
    int* vals;

  public:
    ~Array();
    Array(int s, int* v);
};

Array::~Array() {
  delete[] vals;
  vals = nullptr;
}

Array::Array(int s, int* v)
{
  size = s;
  vals = new int[size];
  std::copy(v, v + size, vals);
}

int main(void) {
  int vals[4] = {11, 22, 33, 44};
  Array a1(4, vals);

  // We get double free
  Array a2(a1);

  return 0;
}
