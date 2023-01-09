/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package proyectoprueba;

import java.util.Scanner;

public class OperMatriz {

    // Atributos
    private int[][] matriz;
    private int filas;
    private int columnas;

    // Constructor
    public OperMatriz() {
        this.filas = 0;
        this.columnas = 0;
    }

    // Metodos
    public void setFilas(int filas) {
        this.filas = filas;
    }

    public void setColumnas(int columnas) {
        this.columnas = columnas;
    }

    public void inicializar() {
        this.matriz = new int[this.filas][this.columnas];

        int contador = 1;
        for (int i = 0; i < this.filas; i++) {
            for (int j = 0; j < this.columnas; j++) {
                this.matriz[i][j] = contador;
                contador++;
            }
        }
    }

    public void insertarDatos() {

        System.out.println("Ingresando datos a la matriz . . .");
        Scanner sc = new Scanner(System.in);

        System.out.println("Digite el numero de fila: ");
        int fila = sc.nextInt();
        System.out.println("Digite el numero de columna: ");
        int columna = sc.nextInt();
        System.out.println("Digite el valor a insertar: ");
        int valor = sc.nextInt();
        matriz[fila][columna] = valor;
    }

    public void imprimirDatos() {
        for (int i = 0; i < this.filas; i++) {
            for (int j = 0; j < this.columnas; j++) {
                System.out.print(this.matriz[i][j] + " ");
            }
            System.out.println();
        }
    }
}
