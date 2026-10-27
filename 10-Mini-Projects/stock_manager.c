#include <stdio.h>

typedef struct {
    int id;
    char name[30];
    float price;
    int quantity;  // Available in stock
} PRODUCT;

void print_stock(const PRODUCT array_products[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Id: %d | Name: %s | Price: %.2f$ | Quantity: %d\n", 
               array_products[i].id, 
               array_products[i].name, 
               array_products[i].price, 
               array_products[i].quantity);
    }
}

float calculate_total_value(const PRODUCT array_products[], int size) {
    float total = 0.0f;
    for (int i = 0; i < size; i++) {
        total += (array_products[i].price * array_products[i].quantity);
    }
    return total;
}

const PRODUCT* find_most_expensive_product(const PRODUCT array_products[], int size) {
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (array_products[i].price > array_products[max_index].price) {
            max_index = i;
        }
    }
    return &array_products[max_index];
}   

int main(void) {
    PRODUCT array_products[] = {
        {0, "Keyboard", 19.99f, 10}, 
        {1, "Mouse", 29.99f, 12},
        {2, "Monitor", 99.99f, 8},
        {3, "Headphones", 48.0f, 15}
    };

    int size = sizeof(array_products) / sizeof(array_products[0]);

    print_stock(array_products, size);

    printf("\nThe total stock value is: %.2f$\n", calculate_total_value(array_products, size));

    const PRODUCT* most_expensive = find_most_expensive_product(array_products, size);

    printf("The most expensive item is: '%s' (%.2f$)\n", most_expensive->name, most_expensive->price);

    return 0;
}