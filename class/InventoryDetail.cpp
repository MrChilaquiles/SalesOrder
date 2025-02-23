#include "../headers/InventoryDetail.h"

//Constructores
InventoryDetail::InventoryDetail(){
    stockDisponible = true;
    cantidad = 10;
    lote = 000122;
    deposito = 01;
    ubicacion = "GDL";
}

InventoryDetail::InventoryDetail(bool stockDisponible){
    this->stockDisponible = stockDisponible;
    cantidad = 10;
    lote = 000122;
    deposito = 01;
    ubicacion = "GDL";
}

InventoryDetail::InventoryDetail(bool stockDisponible, float cantidad){
    this->stockDisponible = stockDisponible;
    this->cantidad = cantidad;
    lote = 000122;
    deposito = 01;
    ubicacion = "GDL";
}

InventoryDetail::InventoryDetail(bool stockDisponible, float cantidad, int lote){
    this->stockDisponible = stockDisponible;
    this->cantidad = cantidad;
    this->lote = lote;
    deposito = 01;
    ubicacion = "GDL";
}

InventoryDetail::InventoryDetail(bool stockDisponible, float cantidad, int lote, int deposito){
    this->stockDisponible = stockDisponible;
    this->cantidad = cantidad;
    this->lote = lote;
    this->deposito = deposito;
    ubicacion = "GDL";
}

InventoryDetail::InventoryDetail(bool stockDisponible, float cantidad, int lote, int deposito, string ubicacion){
    this->stockDisponible = stockDisponible;
    this->cantidad = cantidad;
    this->lote = lote;
    this->deposito = deposito;
    this->ubicacion = ubicacion;
}

//Destructor
InventoryDetail::~InventoryDetail() {
}

//Getters y Setters
void InventoryDetail::setStockDisponible(bool stockDisponible) {
    this->stockDisponible = stockDisponible;
}

bool InventoryDetail::getStockDisponible() {
    return this->stockDisponible;
}

void InventoryDetail::setCantidad(float cantidad) {
    this->cantidad = cantidad;
}

float InventoryDetail::getCantidad() {
    return this->cantidad;
}

void InventoryDetail::setLote(int lote) {
    this->lote = lote;
}

int InventoryDetail::getLote() {
    return this->lote;
}

void InventoryDetail::setDeposito(int deposito) {
    this->deposito = deposito;
}

int InventoryDetail::getDeposito() {
    return this->deposito;
}

void InventoryDetail::setUbicacion(string ubicacion) {
    this->ubicacion = ubicacion;
}

string InventoryDetail::getUbicacion() {
    return this->ubicacion;
}

//Metodos adicionales
void InventoryDetail::showInventoryDetails() {
    cout << "---------------------" << endl;
    cout << "Detalle de inventario" << endl;
    
    if (stockDisponible == true) {
        cout << "Stock disponible: Si" << endl;
    } else {
        cout << "Stock disponible: No" << endl;
    }
    cout << "Cantidad: " << cantidad << endl; 
    cout << "Lote: " << lote << endl;
    cout << "Deposito: " << deposito << endl;
    cout << "Ubicacion: " << ubicacion << endl; 
}