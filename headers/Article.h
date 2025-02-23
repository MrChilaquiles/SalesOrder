#ifndef ARTICLE_H
#define ARTICLE_H
#include <iostream>
#include <string>
#include "InventoryDetail.h"
using namespace std;

class Article {
    private:
        int id;
        string nombre;
        float precio;
        float cantidad;
        public:
        InventoryDetail detalle;
        //Constructores
        Article();
        Article(int id);
        Article(int id, string nombre);
        Article(int id, string nombre, float precio);
        Article(int id, string nombre, float precio, float cantidad);
        Article(int id, string nombre, float precio, float cantidad, InventoryDetail detalle);

        //Destructor
        ~Article();

        //Getters y Setters
        void setId(int);
        int getId(void);
        void setNombre(string);
        string getNombre(void);
        void setPrecio(float);
        float getPrecio(void);
        void setCantidad(float);
        float getCantidad(void);
        void setDetalle(InventoryDetail);
        InventoryDetail getDetalle(void);

        // Metodos adicionales
        void showArticleDetails();
};

#endif