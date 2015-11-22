#include <PICOL.h>

namespace PICOL {
  const uint8_t Website[] = {
    48, 42, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   1, 
     93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  89,  26, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
    127, 127, 127, 122, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 121, 126, 127, 122,  36, 
    127, 127, 120,  45,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  32, 105, 127, 122,  36, 
    127, 127, 118,  23,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  99, 127, 122,  36, 
    127, 127, 118,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 117,  23,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 115,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 115,  20,   0,   5,  20,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  14,   0,   0,   0,   0,   0,  11,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,   7,   0,   8, 100, 127, 122,  36, 
    127, 127, 115,  20,   0,  26, 112, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,  78,   0,   0,   0,   0,   0,  64, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 116,  39,   0,   8, 100, 127, 122,  36, 
    127, 127, 115,  20,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  85,   0,   0,   0,   0,   0,  70, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  43,   0,   8, 100, 127, 122,  36, 
    127, 127, 115,  20,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  84,   0,   0,   0,   0,   0,  55, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 100,  33,   0,   8, 100, 127, 122,  36, 
    127, 127, 115,  20,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  84,   0,   0,   0,   0,   0,   4,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   3,   0,   8, 100, 127, 122,  36, 
    127, 127, 115,  20,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  84,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 115,  20,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  84,   0,   0,   0,   0,   0,  20,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  12,   0,   8, 100, 127, 122,  36, 
    127, 127, 115,  20,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  84,   0,   0,   0,   0,   0,  67, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 122,  41,   0,   8, 100, 127, 122,  36, 
    127, 127, 115,  20,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  84,   0,   0,   0,   0,   0,  70, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  43,   0,   8, 100, 127, 122,  36, 
    127, 127, 115,  20,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  84,   0,   0,   0,   0,   0,  47,  87,  87,  87,  87,  87,  87,  87,  87,  87,  87,  87,  87,  87,  85,  28,   0,   8, 100, 127, 122,  36, 
    127, 127, 115,  20,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  84,   0,   0,   0,   0,   0,   1,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   1,   0,   8, 100, 127, 122,  36, 
    127, 127, 115,  20,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  84,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 115,  20,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  84,   0,   0,   0,   0,   0,  29,  54,  54,  54,  54,  54,  54,  54,  54,  23,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 115,  20,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  84,   0,   0,   0,   0,   0,  69, 127, 127, 127, 127, 127, 127, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 115,  20,   0,  28, 123, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  85,   0,   0,   0,   0,   0,  70, 127, 127, 127, 127, 127, 127, 127, 127,  55,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 114,  19,   0,  15,  65,  68,  68,  68,  68,  68,  68,  68,  68,  68,  68,  68,  68,  69,  45,   0,   0,   0,   0,   0,  37,  69,  68,  68,  68,  68,  68,  68,  68,  29,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 111,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 100, 127, 122,  36, 
    127, 127, 111,  19,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  12, 101, 127, 122,  36, 
    127, 127, 123,  98,  94,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  94,  96, 120, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
    123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 118,  35, 
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  33,  10, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};