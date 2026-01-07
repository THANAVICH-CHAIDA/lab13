#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}



void stat(const double A[],int N,double B[]){
    
    double sum =0;
    for(int i = 0; i < N ; i++){
        sum += A[i];
    }
    double ArithmeticMean = sum / N;
    B[0] = ArithmeticMean;
    
    
    double sum2 = 0;
    for(int i = 0; i < N ; i++){
        
        sum2 += pow((A[i] - ArithmeticMean ),2);
    }
    double secsum = sum2 / N;
    double StandardDeviation = sqrt(secsum);
    B[1] = StandardDeviation;
    
    
    double sum3 = 1;
    for(int i =0; i < N ; i++){
        
        sum3 *= A[i];
    }
    double GeometricMean = pow(sum3,1.0/N);
    B[2] = GeometricMean;
    
    
    double sum4 = 0;
    for(int i =0 ; i < N ; i++){
        
        sum4 += 1.0/A[i];
    }
    double HarmonicMean = N / sum4;
    B[3] = HarmonicMean;
    
        double MAX = A[0];
        double MIN = A[0];
    for(int i = 0 ; i<N ;i++){
        
        if (A[i] > MAX) MAX = A[i];
        if (A[i] < MIN) MIN = A[i];
        
    }
    
    B[4] = MAX;
    B[5] = MIN;
     

}