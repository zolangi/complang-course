//blob_driver.cpp

#include "blob.h"
#include <iostream>
#include <vector>

using namespace std;

int main(void){
  vector<Blob> blobs;

  Blob firstBlob(5.0);
  Blob secondBlob(4.5);
  Blob thirdBlob(4.0);
  Blob fourthBlob(3.5);
  Blob fifthBlob(3.0);

  blobs.push_back(firstBlob);
  blobs.push_back(secondBlob);
  blobs.push_back(thirdBlob);
  blobs.push_back(fourthBlob);
  blobs.push_back(fifthBlob);

  Blob *singleBlob = (Blob *) malloc(sizeof(Blob));
  *singleBlob = 0;

  
  return 0;
}
