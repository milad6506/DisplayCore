#include <PICOL.h>

namespace PICOL {
  const uint8_t ControlsFastForward[] = {
    48, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     27,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  21,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    108,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  56,  82,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 111,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127,  81,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 110,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 126,  81,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 110,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 126,  81,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 110,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 126,  81,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 110,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 126,  81,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 110,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 126,  81,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 110,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 126,  81,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 110,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 126,  81,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 110,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 126,  81,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 110,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  81,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 110,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  81,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  81,  10,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  81,  10,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  81,  10,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  35,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  81,  10,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  35,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  81,  10,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  35,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  81,  10,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  35,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  81,  10,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  35,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  81,  10,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  36,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  81,  13, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  78,   3,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 117,  39, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,  16,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  54,   3, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,  16,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  54,   2,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,  16,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  54,   2,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,  16,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  54,   2,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,  16,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  54,   2,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,  16,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  54,   2,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  54,   2,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  54,   2,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  54,   2,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  54,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  54,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127,  91,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 120,  54,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127,  91,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 120,  54,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127,  91,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 120,  54,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127,  91,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 127, 120,  54,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  91,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127, 120,  54,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127,  91,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 120,  54,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127,  91,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 120,  54,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127,  91,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 120,  54,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127,  91,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 121,  54,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     86,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  50,  55,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
