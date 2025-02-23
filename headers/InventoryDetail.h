#ifndef INVENTORYDETAIL_H
#define INVENTORYDETAIL_H
#include <iostream>
#include <string>
using namespace std;

class InventoryDetail {
    private:
        bool stockDisponible;
        float cantidad;
        int lote;
        int deposito;
        string ubicacion;
    public:
        //Constructores
        InventoryDetail();
        InventoryDetail(bool stockDisponible);
        InventoryDetail(bool stockDisponible, float cantidad);
        InventoryDetail(bool stockDisponible, float cantidad, int lote);
        InventoryDetail(bool stockDisponible, float cantidad, int lote, int deposito);
        InventoryDetail(bool stockDisponible, float cantidad, int lote, int deposito, string ubicacion);

        //Destructor
        ~InventoryDetail();

        //Getters y Setters
        void setStockDisponible(bool);
        bool getStockDisponible(void);
        void setCantidad(float);
        float getCantidad(void);
        void setLote(int);
        int getLote(void);
        void setDeposito(int);
        int getDeposito(void);
        void setUbicacion(string);
        string getUbicacion(void);

        // Metodos adicionales
        void showInventoryDetails();
};

#endif