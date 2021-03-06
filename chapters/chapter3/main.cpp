#include <iostream>
#include <fstream>
#include "ray.h"
using namespace std;

//This function blends white and blue depending on the up/downess of the y coordinate.
//"linear interpolation" called "lerp" for short.
vec3 color(const ray& r ) {
    vec3 unit_direction = unit_vector(r.direction());
    float t = 0.5*(unit_direction.y() + 1);
    return (1.0-t)*vec3(1.0,1.0,1.0) + t*vec3(0.5,0.7,1.0);
}

int main(){

    int nx = 200;
    int ny = 100;
    ofstream output;
    output.open("chapter3.txt");
    cout << "P3\n" << nx << " " << ny << "\n255\n";
    output << "P3\n" << nx << " " << ny << "\n255\n";
    //DEFINES OUR POSITION FOR THE CAMERA
    vec3 lower_left_corner(-2.0,-1.0,-1.0);         
    vec3 horizontal(4.0,0.0,0.0);
    vec3 vertical(0.0,2.0,0.0);
    vec3 origin(0.0,0.0,0.0);
    for (int j = ny-1; j >= 0; j--){
        for(int i = 0; i < nx; i++){
            float u = float(i) / float(nx);
            float v = float(j) / float(ny);
            //THE CREATION OF THE RAY
            ray r(origin, lower_left_corner + u*horizontal + v*vertical);
            vec3 col = color(r);
            int ir = int(255.99*col[0]);
            int ig = int(255.99*col[1]);
            int ib = int(255.99*col[2]);
            cout << ir << " " << ig << " " << ib << "\n";
            output << ir << " " << ig << " " << ib << "\n";
        }
    } 
    output.close();

    return 0;
}
