#include "Creatio.h"

Creatio& Creatio::getInstance() {
    static Creatio creatio;

    return creatio;
}