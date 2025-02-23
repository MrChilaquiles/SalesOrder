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
        InventoryDetail detalle;
    public:
        //Constructores
        Article();
        Article();
        ~Article();
};

#endif