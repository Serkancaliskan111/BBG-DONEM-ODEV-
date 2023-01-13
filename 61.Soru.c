#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
    double H, S, V;
    printf("HSV Formatinda cumle giriniz...\n (H S V): ");
    scanf("%lf %lf %lf", &H, &S, &V);

    Mat hsv(1, 1, CV_8UC3, Scalar(H, S, V));
    Mat cmyk;
    cvtColor(hsv, cmyk, COLOR_HSV2BGR);

    Vec3b cmyk_values = cmyk.at<Vec3b>(0, 0);
    printf("CMYK FORMATINDA : %.2lf %.2lf %.2lf %.2lf",
           cmyk_values[0] / 255.0,
           cmyk_values[1] / 255.0,
           cmyk_values[2] / 255.0,
           1 - (V / 255.0));
    return 0;
}
