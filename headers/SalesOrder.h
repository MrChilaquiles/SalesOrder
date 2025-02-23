#ifndef SALESORDER_H
#define SALESORDER_H
#include <iostream>
#include <string>
#include "Article.h"
using namespace std;

class salesOrder {
    private:
        int id;
        string cliente;
        string fecha;
        Article article;
        float total;
    public:
        // Constructores
        salesOrder();
        salesOrder(int id);
        salesOrder(int id, string cliente);
        salesOrder(int id, string cliente, string fecha);
        salesOrder(int id, string cliente, string fecha, Article article);
        salesOrder(int id, string cliente, string fecha, Article article, float total);

        //Destructor
        ~salesOrder();

        //Getters y Setters
        int getId() const;
        void setId(int id);
        string getCliente() const;
        void setCliente(string cliente);
        string getFecha() const;
        void setFecha(string fecha);
        Article getArticle() const;
        void setArticle(Article article);
        float getTotal() const;
        void setTotal(float total);
};

#endif
