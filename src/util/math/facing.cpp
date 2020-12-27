#include "facing.h"

Direction Facing::opposite(Direction dir) {
    return dir ^ 1;
}