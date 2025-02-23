#ifndef SALESORDER_H
#define SALESORDER_H
#include <iostream>
#include <string>
#include "Article.h"
using namespace std;

class SalesOrder {
    private:
        int id;
        string cliente;
        string fecha;
        float total;
        public:
        Article article;
        // Constructores
        SalesOrder();
        SalesOrder(int id);
        SalesOrder(int id, string cliente);
        SalesOrder(int id, string cliente, string fecha);
        SalesOrder(int id, string cliente, string fecha, Article article);
        SalesOrder(int id, string cliente, string fecha, Article article, float total);

        //Destructor
        ~SalesOrder();

        //Getters y Setters
        int getId(void);
        void setId(int id);
        string getCliente(void);
        void setCliente(string cliente);
        string getFecha(void);
        void setFecha(string fecha);
        Article getArticle(void);
        void setArticle(Article article);
        float getTotal(void);
        void setTotal(float total);

        // Metodos adicionales
        void showOrderDetails();
        float calcularTotal();
};

#endif
