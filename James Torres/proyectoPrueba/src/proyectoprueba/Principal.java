/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package proyectoprueba;

import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        OperMatriz om = new OperMatriz();
        
        int opcion;
        do {
            System.out.println("Menu principal");
            System.out.println("1. Tamaño de la matriz");
            System.out.println("2. Insertar datos");
            System.out.println("3. Salir");
            System.out.print("Seleccione una opcion: ");
            opcion = sc.nextInt();
            
            switch(opcion) {
                case 1:
                    System.out.print("Ingrese la cantidad de filas: ");
                    int filas = sc.nextInt();
                    System.out.print("Ingrese la cantidad de columnas: ");
                    int columnas = sc.nextInt();
                    om.setFilas(filas);
                    om.setColumnas(columnas);
                    om.inicializar();
                    break;
                case 2:
                    om.insertarDatos();
                    om.imprimirDatos();
                    break;
                case 3:
                    break;
                default:
                    System.out.println("Opcion no valida!");
            }
        } while (opcion != 3);
    }
}