#ifndef POINTEREXAMPLES_H
#define POINTEREXAMPLES_H

/**
 * @file PointerExamples.h
 * @brief Declaración de la clase que agrupa demos de apuntadores.
 * @date 2025-05-25
 * @author Camilo Duque
 * @details Esta clase contiene varios demos relacionados con el uso de
 * apuntadores en C++. Cada demo ilustra un concepto diferente relacionado con
 * apuntadores, incluyendo apuntadores básicos, punteros nulos, aritmética de
 * apuntadores, punteros a funciones, punteros a miembros de clase y
 * polimorfismo con apuntadores.
 */

#pragma once

class PointerExamples {
public:
    // Demo 1: Apuntador básico
    static void demoBasicPointer();

    // Demo 2: Puntero nulo
    static void demoNullPointer();

    // Demo 3: Aritmética de apuntadores
    static void demoPointerArithmetic();

    // Demo 4: Puntero a función
    static void demoFunctionPointer();

    // Demo 5: Puntero a miembro de clase
    static void demoMemberPointer();

    // Demo 6: Polimorfismo con apuntadores
    static void demoPolymorphism();
};

#endif // POINTEREXAMPLES_H
