
# Lógica Combinacional - Ejemplos

## 1. Sumadores, Restadores y Comparadores

### Sumador de Medio (Half Adder):
- Entradas: A, B
- Salidas: S (Suma), C (Acarreo)
- Expresión:
  - S = A ⊕ B (XOR de A y B)
  - C = A ⋅ B (AND de A y B)
- Ejemplo: Si A = 1 y B = 1, entonces S = 0 y C = 1.

### Sumador Completo (Full Adder):
- Entradas: A, B, Cin (Acarreo de entrada)
- Salidas: S (Suma), Cout (Acarreo de salida)
- Expresión:
  - S = A ⊕ B ⊕ Cin
  - Cout = (A ⋅ B) + (Cin ⋅ (A ⊕ B))
- Ejemplo: Si A = 1, B = 1, y Cin = 1, entonces S = 1 y Cout = 1.

### Restador:
- Restador Completo (Full Subtractor):
- Entradas: A, B, Bin (Acarreo de entrada)
- Salidas: D (Diferencia), Bout (Acarreo de salida)
- Expresión:
  - D = A ⊕ B ⊕ Bin
  - Bout = (¬A ⋅ B) + (B ⋅ Bin) + (¬A ⋅ Bin)
- Ejemplo: Si A = 1, B = 1 y Bin = 0, entonces D = 0 y Bout = 0.

### Comparador:
- Comparador de 2 bits:
- Entradas: A (2 bits), B (2 bits)
- Salidas: A > B, A = B, A < B
- Ejemplo: Si A = 10 (binario) y B = 01 (binario), entonces A > B es verdadero, y las demás salidas son falsas.

## 2. Conversores de Código (Binario, Gray, BCD)

### Conversión de Binario a Gray:
- Ejemplo: Convertir 1010 (binario) a Gray.
- Proceso:
  - El primer bit del código Gray es igual al primer bit del binario.
  - Cada bit posterior del código Gray se obtiene realizando XOR entre el bit actual y el anterior del binario.
  - Binario: 1010 → Gray: 1111.

### Conversión de Gray a Binario:
- Ejemplo: Convertir 1111 (Gray) a binario.
- Proceso:
  - El primer bit binario es el mismo que el de Gray.
  - Cada bit posterior se obtiene realizando XOR entre el bit Gray y el bit anterior del binario.
  - Gray: 1111 → Binario: 1010.

### Conversión de Binario a BCD:
- Ejemplo: Convertir 1001 (binario) a BCD.
- En BCD, cada dígito decimal se representa en binario. El binario 1001 es 9 en decimal, por lo que su representación en BCD es 1001.

## 3. Decodificadores y Demultiplexores

### Decodificador de 2 a 4 líneas:
- Entradas: A, B
- Salidas: Y0, Y1, Y2, Y3
- Ejemplo: Si A = 1 y B = 0, entonces la salida Y2 es 1 (activa), mientras que las demás salidas son 0.

### Demultiplexor 1 a 4:
- Entradas: D (Dato), S1, S0 (señales de selección)
- Salidas: Y0, Y1, Y2, Y3
- Ejemplo: Si D = 1, S1 = 0 y S0 = 1, entonces Y1 = 1 (la salida seleccionada), y las demás salidas son 0.

## 4. Codificadores y Multiplexores

### Codificador de Prioridad de 4 entradas:
- Entradas: I0, I1, I2, I3
- Salidas: A, B (salida codificada), V (validez)
- Ejemplo: Si I3 = 1 y las demás entradas son 0, entonces la salida codificada será AB = 11, indicando que la entrada más prioritaria (I3) está activa.

### Multiplexor 4 a 1:
- Entradas: D0, D1, D2, D3 (datos), S1, S0 (señales de selección)
- Salidas: Y
- Ejemplo: Si S1 = 1 y S0 = 0, entonces la salida Y toma el valor de D2.

## 5. Unidad Aritmético-Lógica (ALU)

### Ejemplo de ALU de 4 bits:
- Entradas: A, B (4 bits cada uno), Función (selecciona la operación)
- Funciones: Suma, Resta, AND, OR, XOR
- Ejemplo: Si A = 1101, B = 1011, y la función seleccionada es la suma, la salida será 11000 (en binario).
