#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float xl, xr, xm_new = 0, xm_old = 0;
    float Fxm, Fxr, error = 1;
    int count = 1;
    
    
    cout << "Input Xl : ";
    cin >> xl;
    cout << "Input Xr : ";
    cin >> xr;
    
    xm_new = (xl+xr)/2;
    xm_old = xm_new;
    
    Fxm = sqrt(xm_old);
    Fxr = sqrt(xr);
    
    if((Fxm*Fxr) > 0){
        xr = xm_new;
    }
    else{
        xl = xm_new;
    }
    cout << "------------------------" << endl;
    cout << "Round " << count << endl;
    cout << "Xm = " << xm_new << endl;
    cout << "------------------------" << endl;
    
    while(error > 0.500){
        xm_new = (xl+xr)/2;
        Fxm = sqrt(xm_new);
        Fxr = sqrt(xr);
        if((Fxm*Fxr) > 0){
            xr = xm_new;
        }
        else{
            xl = xm_new;
        } 
        error = fabs(((xm_new-xm_old)/xm_new)*100);
        
        xm_old = xm_new;
        count += 1;
        
        cout << "Round " << count << endl;
    	cout << "Xm = " << xm_new << endl;
        cout << "Error = " << error << endl;
        cout << "------------------------" << endl;
    }
}
