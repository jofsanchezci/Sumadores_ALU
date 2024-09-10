#include <stdio.h>

// Función ALU
int ALU(int A, int B, int ALU_Sel) {
    int result;
    switch(ALU_Sel) {
        case 0: // Suma
            result = A + B;
            break;
        case 1: // Resta
            result = A - B;
            break;
        case 2: // AND lógico
            result = A & B;
            break;
        case 3: // OR lógico
            result = A | B;
            break;
        case 4: // XOR lógico
            result = A ^ B;
            break;
        case 5: // Desplazamiento izquierdo (Shift left)
            result = A << 1;
            break;
        case 6: // Desplazamiento derecho (Shift right)
            result = A >> 1;
            break;
        default:
            result = 0; // Si no es válida la operación
            break;
    }
    return result;
}

int main() {
    int A, B, ALU_Sel;
    
    // Pedir los operandos
    printf("Ingresa el valor de A: ");
    scanf("%d", &A);
    printf("Ingresa el valor de B: ");
    scanf("%d", &B);
    
    // Seleccionar la operación
    printf("Selecciona la operación ALU:\n");
    printf("0: Suma\n1: Resta\n2: AND\n3: OR\n4: XOR\n5: Shift Izquierda\n6: Shift Derecha\n");
    scanf("%d", &ALU_Sel);
    
    // Ejecutar ALU
    int result = ALU(A, B, ALU_Sel);
    
    // Mostrar el resultado
    printf("Resultado de la operación: %d\n", result);
    
    return 0;
}

