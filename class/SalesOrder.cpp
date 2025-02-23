#include "../headers/SalesOrder.h"
#include "../headers/Article.h"
#include "../headers/InventoryDetail.h"
#include <iostream>
#include <string>
using namespace std;

//Constructores
SalesOrder::SalesOrder(){
    id = 01;
    cliente = "Juan Perez";
    fecha = "2025-01-01";
    article = Article();
    total = 1000;
}

SalesOrder::SalesOrder(int id){
    this->id = id;
    cliente = "Juan Perez";
    fecha = "2025-01-01";
    article = Article();
    total = 1000;
}

SalesOrder::SalesOrder(int id, string cliente){
    this->id = id;
    this->cliente = cliente;
    fecha = "2025-01-01";
    article = Article();
    total = 1000;
}

SalesOrder::SalesOrder(int id, string cliente, string fecha){
    this->id = id;
    this->cliente = cliente;
    this->fecha = fecha;
    article = Article();
    total = 1000;
}

SalesOrder::SalesOrder(int id, string cliente, string fecha, Article article){
    this->id = id;
    this->cliente = cliente;
    this->fecha = fecha;
    this->article = article;
    total = 1000;
}

SalesOrder::SalesOrder(int id, string cliente, string fecha, Article article, float total){
    this->id = id;
    this->cliente = cliente;
    this->fecha = fecha;
    this->article = article;
    this->total = total;
}

//Destructor
SalesOrder::~SalesOrder() {
}

//Getters y Setters
void SalesOrder::setId(int id) {
    this->id = id;
}

int SalesOrder::getId() {
    return this->id;
}

void SalesOrder::setCliente(string cliente) {
    this->cliente = cliente;
}

string SalesOrder::getCliente() {
    return this->cliente;
}

void SalesOrder::setFecha(string fecha) {
    this->fecha = fecha;
}

string SalesOrder::getFecha() {
    return this->fecha;
}

void SalesOrder::setArticle(Article article) {
    this->article = article;
}

Article SalesOrder::getArticle() {
    return this->article;
}

void SalesOrder::setTotal(float total) {
    this->total = total;
}

float SalesOrder::getTotal() {
    return this->total;
}

// Metodos adicionales
void SalesOrder::showOrderDetails() {
    cout << "ID: " << id << endl;
    cout << "Cliente: " << cliente << endl;
    cout << "Fecha: " << fecha << endl;
    cout << "Articulo: " << article.getNombre() << endl;
    cout << "Cantidad: " << article.getCantidad() << endl;
    cout << "Total: " << calcularTotal() << endl;
}

float SalesOrder::calcularTotal() {
    return article.getPrecio() * article.getCantidad();
}