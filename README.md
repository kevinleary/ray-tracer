# ray-tracer
Creating a ray-tracer in C++ to refresh on the language as well as learn how to paint graphics. Used Peter Shirley's "Ray Tracing in One Weekend"
## Chapter 1: Creating an Image (PPM)
The result of chapter 1 looks like ![this](/images/output.png)
'''c++
int nx = 200;
    int ny = 100;
    //ADDED OUTPUT TO TXT FILE -- HOPEFULLY WORKS
    ofstream output;
    output.open("output.txt");
    cout << "P3\n" << nx << " " << ny << "\n255\n";
    output << "P3\n" << nx << " " << ny << "\n255\n";
    for (int j = ny-1; j >= 0; j--){
        for(int i = 0; i < nx; i++){
            float r = float(i) / float(nx);
            float g = float(j) / float(ny);
            float b = 0.2;
            int ir = int(255.99*r);
            int ig = int(255.99*g);
            int ib = int(255.99*b);
            cout << ir << " " << ig << " " << ib << "\n";
            output << ir << " " << ig << " " << ib << "\n";
        }
    } 
    output.close();
'''