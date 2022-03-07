
//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body
template<class T>
void multiples(T& sum, T x, int n) {
    for (int i = 1; i <= n; i++) {
        sum += x * i;
    }
}