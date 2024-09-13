#include "../Item.h"
typedef struct STACKnode *STACKlink;

void STACKinit(int maxN);
int STACKempty();
void STACKpush(Item item);
Item STACKpop();