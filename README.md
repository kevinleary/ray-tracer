# ray-tracer
Creating a ray-tracer in C++ to refresh on the language as well as learn how to paint graphics. Used Peter Shirley's "Ray Tracing in One Weekend"
The reason I decided to do this is because of all the "RTX" and "REAL TIME ray-tracing" buzzwords being thrown around by Nvidia and their graphics cards. The math and physics behind creating everything from scratch also intreges me and I am trying to learn and understand exactly how this works through comments and writing the code out.  

Create/Run a C++ exe in Bash by doing...
```bash
$ g++ example.cpp -o example
$ ./example
```
## Chapter 1: Creating an Image (PPM)
We create a TXT file that lays-out the pixels for our PPM file. We then convert it to a PPM and the image can then be opened in image editing software (i.e. GIMP). The result of Chapter 1 looks like 
![this.](/images/chapter1&2.png)

## Chapter 2: Creating and Using the "vec3" class
We create a vector class with overloaded functions and constructors for us to create and use vectors in our Ray-tracer

##Chapter 3: Rays, a simple camera, and a background
We next create a Ray using a ray function and class defined as p(t) = A + t*B where A and B are vec3 vectors and A is origin while B is direction. The result of Chapter 3 looks like 
![this.](/images/chapter3.png)