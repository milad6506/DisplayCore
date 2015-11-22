#include <Iconic.h>

namespace Iconic {
  const uint8_t Check4x[] = {
    32, 32, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  93,  27,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  98, 127, 120,  29,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  94, 127, 127, 127, 121,  31,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  92, 127, 127, 127, 127, 127, 122,  33,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  92, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  92, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  19, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  92, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  66,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  92, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  66,   0,   0, 
      0,   0,   0,   0,   9,  94,  25,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  92, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  67,   0,   0,   0, 
      0,   0,   0,   9, 103, 127, 119,  25,   0,   0,   0,   0,   0,   0,   0,   4,  92, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  67,   0,   0,   0,   0, 
      0,   0,   9, 103, 127, 127, 127, 119,  26,   0,   0,   0,   0,   0,   4,  92, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  67,   0,   0,   0,   0,   0, 
      0,   9, 103, 127, 127, 127, 127, 127, 120,  28,   0,   0,   0,   4,  92, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  67,   0,   0,   0,   0,   0,   0, 
      9, 103, 127, 127, 127, 127, 127, 127, 127, 121,  31,   0,   4,  92, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  67,   0,   0,   0,   0,   0,   0,   0, 
     94, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  38,  92, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  67,   0,   0,   0,   0,   0,   0,   0,   0, 
     25, 119, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  67,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,  25, 119, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  67,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,  26, 119, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  67,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,  26, 119, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  67,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  26, 119, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  67,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  26, 119, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  67,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  26, 119, 127, 127, 127, 127, 127, 127, 127, 127,  67,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  26, 119, 127, 127, 127, 127, 127, 127,  67,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  26, 120, 127, 127, 127, 127,  67,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  29, 122, 127, 127,  66,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33, 123,  65,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};