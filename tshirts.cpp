#include "include/tshirts.h"

char size(int cms) {
    if (cms < 38) {
        return 'S';
    } else if (cms >= 38 && cms <= 42) {
        return 'M';
    } else {
        return 'L';
    }
}
