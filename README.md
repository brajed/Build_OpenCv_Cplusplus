# How to build Opencv C++ on UBuntu
Everyone can install Opencv C++ follow as:

Step 1: Update the ubuntu system packages
![Screenshot from 2021-05-04 20-19-01](https://user-images.githubusercontent.com/69961463/117009725-439a3f00-ad16-11eb-9716-cd56744434c8.png)

Step 2: Install required tools and packages

Step 3: Download Opencv sources using git

Step 4: Building and Install OpenCv

Step 5: Find and Set "opencv.pc" file path

Step 6: Check Opencv version

Step 7: Compile and run test.cpp

- Compile code:

  `g++ test.cpp -o test -std=c++11 ```pkg-config --cflags --libs opencv`
  
- Execute code:

  `./test`
