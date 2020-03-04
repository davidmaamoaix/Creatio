#include "Creatio.h"

Creatio& Creatio::get() {
    static Creatio creatio;

    return creatio;
}

Blocks& Creatio::blocks() {
    return allBlocks;
}