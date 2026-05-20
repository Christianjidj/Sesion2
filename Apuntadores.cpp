/**
 /**
 * @file PointerExamples.cpp
 * @brief Implementación de los demos de apuntadores.
 * @date 2025-05-25
 * @author Camilo Duque
 * @details Este archivo contiene la implementación de la clase PointerExamples
 * que agrupa varios demos relacionados con el uso de apuntadores en C++. Cada
 * demo ilustra un concepto diferente relacionado con apuntadores, incluyendo
 * apuntadores básicos, punteros nulos, aritmética de apuntadores, punteros a
 * funciones, punteros a miembros de clase y polimorfismo con apuntadores.
 * @details Se utilizan ejemplos simples y claros para ilustrar cada concepto, y
 * se incluyen comentarios explicativos para facilitar la comprensión. Además,
 * se utilizan aserciones para verificar el correcto funcionamiento de los
 * demos.
 */

#include "PointerExamples.h"

#include <cassert>
#include <iostream>

// Demo 1: Apuntador básico
void PointerExamples::demoBasicPointer() {
    std::cout << "\n--- Demo 1: Apuntador básico ---\n";
    int x = 14;
    int* p = &x;
    std::cout << "Valor de x: " << x << "\n";
    std::cout << "Dirección de x (&x): " << &x << "\n";
    std::cout << "Valor de p (debe ser &x): " << p << "\n";
    std::cout << "Desreferencia *p: " << *p << "\n";
    std::cout << "Suma de contenido de direccion con variable: " << *p + x << "\n";
}

// Demo 2: Puntero nulo
void PointerExamples::demoNullPointer() {
    std::cout << "\n--- Demo 2: Puntero nulo ---\n";
    int x = 22;
    int* p = &x;
    if (p) {
        std::cout << "*p = " << *p << "\n";
    } else {
        std::cout << "p es nullptr, no se puede desreferenciar.\n";
    }
}

// Demo 3: Aritmética de apuntadores
void PointerExamples::demoPointerArithmetic() {
    std::cout << "\n--- Demo 3: Aritmética de apuntadores ---\n";
    int arr[7] = {5, 10, 15, 20, 25, 30, 35};
    int* p = arr; // &arr[0]
    for (int i = 0; i < 6; ++i) {
        std::cout << "arr[" << i << "] + arr[" << i + 1 << "]= " << *(p + i) + *(p + i + 1) << "\n";
    }
}

// Función auxiliar para Demo 4
static int suma(int a, int b) {
    return a + b;
}

// Demo 4: Puntero a función
void PointerExamples::demoFunctionPointer() {
    std::cout << "\n--- Demo 4: Puntero a función ---\n";
    int (*op)(int, int) = &suma;
    int resultado = op(3, 4), resultado2 = suma(op(2, 2), 2);
    std::cout << "resultado = suma(3,4) via puntero: " << resultado << "\n";
    std::cout << "resultado = suma(op(2,2),2) via puntero y constante: " << resultado2 << "\n";
    assert(resultado == 7);
}

// Clase auxiliar para Demo 5
class DemoClass {
public:
    void greet(int* num) {
        std::cout << "Hola, " << *num << " desde DemoClass!\n";
    }
};

// Demo 5: Puntero a miembro de clase
void PointerExamples::demoMemberPointer() {
    std::cout << "\n--- Demo 5: Puntero a miembro de clase ---\n";
    DemoClass obj;
    void (DemoClass::*pm)(int*) = &DemoClass::greet;
    int x = 2;
    int* p = &x;
    (obj.*pm)(p);
}
