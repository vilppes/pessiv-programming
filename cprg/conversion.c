#include <stdio.h>
#include "./conversion.h"
float inchesToCm(float cm) {
	return cm * MULTIPLIER_CM_INCH;
}
float cmToInches(float inch) {
	return inch / MULTIPLIER_CM_INCH;
}
