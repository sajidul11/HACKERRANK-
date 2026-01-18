float discounted(float price,float percent);
int main() {

    float price, percent, finalprice;
    
    if (scanf("%f %f", &price, &percent) !=2) {
        return 1;
    }
    
    finalprice = discounted(price, percent);
    printf("The final price is: %f\n", finalprice);
    
    return 0;
}
        float discounted(float price, float percent) {
        float discountAmount = (price * percent)/100.0;
        float discountedPrice = price - discountAmount;
    
    return discountedPrice;
}
