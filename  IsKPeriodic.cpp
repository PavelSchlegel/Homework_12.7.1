#include <iostream>

bool IsKPeriodic(const std::string& expr, std::size_t K) {
    
    if (K > 0 && !(K > expr.size())) {
        if ((expr.size() % K) == 0) {
            //двигаемся по массиву шагом К 
            for (std::size_t i = K; i < expr.size(); i += K) {
                for (std::size_t s = 0; s < K; ++s) {
                    if (expr[i + s - K] != expr[i + s]) {
                        return false;
                    }
                }
            }
            return true;
        }
    }
    return false;
}