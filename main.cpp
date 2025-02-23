#include "headers/SalesOrder.h"
#include "headers/Article.h"
#include "headers/InventoryDetail.h"

int main() {
    SalesOrder venta01, venta02(02, "Jose Jose", "2025-02-23", Article (02, "Logitech Keyboard", 2000, 1, InventoryDetail(true, 5, 000123, 02, "CDMX")), 2000);
    venta01.showOrderDetails();
    cout << "----------------" << endl;
    venta02.showOrderDetails();
    venta02.article.showArticleDetails();
    return 0;
}