/*

create a Box structure, then create several boxes:

    box1 has length 1.2, width 2.3, height 3.4 and material paper
    box2 has length 2, width 3, height 4 and material cardboard
    box3 has length 8 width 10 and height 9 and material aluminum

Calculate  and print the volume of each box - be sure to also print the dimensions of each box.

*/

#include <iostream>


struct Box {
    double length;
    double width;
    double height;
    std::string material;
};
double calcVolume(Box B) {
    return B.height * B.length * B.width;
}
void dimensions(Box B) {
    std::cout << "This " << B.material << " Box is " << B.height << " feet tall, " << B.width << " feet wide " << "and " << B.length << " feet long!\n" << "The volume of this box is: " << calcVolume(B) << std::endl;
    std::cout << std::endl;
}


int main()
{
    Box box1;
    Box box2;
    Box box3;

    box1.length = 1.2, box1.width = 2.3, box1.height = 3.4, box1.material = "Paper";
    box2.length = 2, box2.width = 3, box2.height = 4, box2.material = "Cardboard";
    box3.length = 8, box3.width = 10, box3.height = 9, box3.material = "Aluminium";

    dimensions(box1);
    dimensions(box2);
    dimensions(box3);



}

