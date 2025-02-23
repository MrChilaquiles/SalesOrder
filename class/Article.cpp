#include "../headers/Article.h"
#include "../headers/InventoryDetail.h"
#include <iostream>
#include <string>
using namespace std;

//Constructores
Article::Article(){
    id = 01;
    nombre = "Logitech Mouse";
    precio = 1000;
    cantidad = 1;
    detalle = InventoryDetail();
}

Article::Article(int id){
    this->id = id;
    nombre = "Logitech Mouse";
    precio = 1000;
    cantidad = 1;
    detalle = InventoryDetail();
}

Article::Article(int id, string nombre){
    this->id = id;
    this->nombre = nombre;
    precio = 1000;
    cantidad = 1;
    detalle = InventoryDetail();
}

Article::Article(int id, string nombre, float precio){
    this->id = id;
    this->nombre = nombre;
    this->precio = precio;
    cantidad = 1;
    detalle = InventoryDetail();
}

Article::Article(int id, string nombre, float precio, float cantidad){
    this->id = id;
    this->nombre = nombre;
    this->precio = precio;
    this->cantidad = cantidad;
    detalle = InventoryDetail();
}

Article::Article(int id, string nombre, float precio, float cantidad, InventoryDetail detalle){
    this->id = id;
    this->nombre = nombre;
    this->precio = precio;
    this->cantidad = cantidad;
    this->detalle = detalle;
}

//Destructor
Article::~Article() {
}

//Getters y Setters
void Article::setId(int id) {
    this->id = id;
}

int Article::getId() {
    return this->id;
}

void Article::setNombre(string nombre) {
    this->nombre = nombre;
}

string Article::getNombre() {
    return this->nombre;
}

void Article::setPrecio(float precio) {
    this->precio = precio;
}

float Article::getPrecio() {
    return this->precio;
}

void Article::setCantidad(float cantidad) {
    this->cantidad = cantidad;
}

float Article::getCantidad() {
    return this->cantidad;
}

void Article::setDetalle(InventoryDetail detalle) {
    this->detalle = detalle;
}

InventoryDetail Article::getDetalle() {
    return this->detalle;
}

// Metodos adicionales
void Article::showArticleDetails() {
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Precio: " << precio << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Detalle: " << endl;
    detalle.showInventoryDetails();
}