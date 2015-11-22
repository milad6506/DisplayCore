#include <Iconic.h>

namespace Iconic {
  const uint8_t Command4x[] = {
    32, 32, // width, height
      0,   0,   3,  56, 101, 122, 122, 101,  55,   3,   0,   0,   0,   0,   0,   0,   0,   0,   4,  58, 103, 124, 124, 102,  57,   4,   0,   0,   0,   0,   0,   0, 
      0,  14, 105, 127, 127, 127, 127, 127, 127, 104,  14,   0,   0,   0,   0,   0,   0,  15, 107, 127, 127, 127, 127, 127, 127, 106,  14,   0,   0,   0,   0,   0, 
      3, 105, 127, 127, 127, 127, 127, 127, 127, 127, 104,   3,   0,   0,   0,   0,   4, 107, 127, 127, 127, 127, 127, 127, 127, 127, 106,   3,   0,   0,   0,   0, 
     56, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  54,   0,   0,   0,   0,  58, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  56,   0,   0,   0,   0, 
    101, 127, 127, 127,  86,  11,  11,  87, 127, 127, 127, 100,   0,   0,   0,   0, 103, 127, 127, 127,  86,  10,  10,  87, 127, 127, 127, 102,   0,   0,   0,   0, 
    122, 127, 127, 127,  11,   0,   0,  11, 127, 127, 127, 121,   0,   0,   0,   0, 124, 127, 127, 127,  10,   0,   0,  11, 127, 127, 127, 123,   0,   0,   0,   0, 
    122, 127, 127, 127,  11,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,  11, 127, 127, 127, 123,   0,   0,   0,   0, 
    101, 127, 127, 127,  87,  11,   0,   0, 127, 127, 127, 127,   0,   0,   0,   0, 127, 127, 127, 127,   0,   0,  11,  88, 127, 127, 127, 101,   0,   0,   0,   0, 
     55, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  55,   0,   0,   0,   0, 
      3, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 105,   3,   0,   0,   0,   0, 
      0,  14, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 105,  14,   0,   0,   0,   0,   0, 
      0,   0,   3,  54, 100, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123, 101,  55,   3,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   4,  58, 103, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124, 102,  57,   4,   0,   0,   0,   0,   0,   0, 
      0,  15, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 106,  14,   0,   0,   0,   0,   0, 
      4, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 106,   3,   0,   0,   0,   0, 
     58, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  56,   0,   0,   0,   0, 
    103, 127, 127, 127,  86,  10,   0,   0, 127, 127, 127, 127,   0,   0,   0,   0, 127, 127, 127, 127,   0,   0,  10,  87, 127, 127, 127, 102,   0,   0,   0,   0, 
    124, 127, 127, 127,  10,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,  11, 127, 127, 127, 123,   0,   0,   0,   0, 
    124, 127, 127, 127,  10,   0,   0,  11, 127, 127, 127, 123,   0,   0,   0,   0, 124, 127, 127, 127,  10,   0,   0,  11, 127, 127, 127, 123,   0,   0,   0,   0, 
    102, 127, 127, 127,  87,  11,  11,  88, 127, 127, 127, 101,   0,   0,   0,   0, 102, 127, 127, 127,  87,  11,  11,  88, 127, 127, 127, 101,   0,   0,   0,   0, 
     57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  55,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  55,   0,   0,   0,   0, 
      4, 106, 127, 127, 127, 127, 127, 127, 127, 127, 105,   3,   0,   0,   0,   0,   4, 106, 127, 127, 127, 127, 127, 127, 127, 127, 105,   3,   0,   0,   0,   0, 
      0,  14, 106, 127, 127, 127, 127, 127, 127, 105,  14,   0,   0,   0,   0,   0,   0,  14, 106, 127, 127, 127, 127, 127, 127, 105,  14,   0,   0,   0,   0,   0, 
      0,   0,   4,  56, 102, 123, 123, 101,  55,   3,   0,   0,   0,   0,   0,   0,   0,   0,   4,  56, 102, 123, 123, 101,  55,   3,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};