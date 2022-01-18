Turn-in directory: | 061_18_01_ft_point_in_rectangle |
-------------|-------------|
Files to turn-in: | ft_point_in_rectangle.c |
Allowed functions: | none

* Write a function **ft_point_in_rectangle** that will take a **struct s_rectangle** and a **t_point** as arguments (wtf are these, right?)
* The function must be prototyped as follows:
```C
int ft_point_in_rectangle(struct s_rectangle rect, t_point pt)
```

* The **struct s_rectangle** is representing a rectangle, defined by its top left and bottom right corners
* The **t_point** is representing a point in 2D space defined by its coordinates x and y
* **ft_point_in_rectangle** function must return 1 if the point argument is inside the rectangle argument, 0 otherwise
* The structures will be defined as follows:
```C
struct s_rectangle
{
    int x_top_left;
    int y_top_left;
    int x_bottom_right;
    int y_bottom_right;
};

typedef struct s_point
{
    int x;
    int y;
} t_point;
``` 
* Example:
  On the image below, the rectangle is defined by its 4 verteces.
  
  X axis is the horizontal one and Y is the vertical one.
  
  Its top left vertex is point D = (x_top_left = 1 ; y_top_left = 3).
  
  Its bottom right vertex is point B = (x_bottom_right = 4 ; y_bottom_right = 0).
  
  We can see that the point G = (x = 2 ; y = 1) is inside the given rectangle.
  
  ![image](https://user-images.githubusercontent.com/36443074/150024569-916e453d-5c16-454b-ab75-f0e2582bd037.png)

  
