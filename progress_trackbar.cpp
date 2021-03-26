#include <stdlib.h>
#include "trackbar.h"
using namespace tb;

int main(){
  
			for (int i = 0; i < NUMBER; i++)
			{
				double per= (double)(((double)i+1.0) / NUMBER);
				trackbar::printProgress(per);
			}
  
  return 0;
}
