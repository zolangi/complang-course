//blob.h

#ifndef BLOB
#define BLOB

class Blob{
 public:
  Blob(double areaIn);
  double getArea() const;
  bool operator==(const Blob &other);
  Blob operator+=(const Blob &other);

  void setArea(double areaIn);
 private:
  double area;
};
#endif
