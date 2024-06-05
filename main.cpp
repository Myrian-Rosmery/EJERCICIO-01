#include <iostream>
#include <unordered_set>
#include <vector>

bool haySumaIgualAK(const std::vector<int>& arr, int k, int& num1, int& num2) {
    std::unordered_set<int> elementos;

    for (int num : arr) {
        int complemento = k - num;


        if (elementos.find(complemento) != elementos.end()) {
            num1 = num;
            num2 = complemento;
            return true;
        }
        elementos.insert(num);
    }

    return false;
}

int main() {
    std::vector<int> arr = {10,8, 15, 3, 7,7};
    int k = 17;
    int num1, num2;

    if (haySumaIgualAK(arr, k, num1, num2)) {
        std::cout << "Existen dos numeros cuya suma es igual a " << k << ": " << num1 << " y " << num2 << std::endl;
    } else {
        std::cout << "No existen dos numeros en el arreglo cuya suma sea igual a " << k << std::endl;
    }

    return 0;
}
