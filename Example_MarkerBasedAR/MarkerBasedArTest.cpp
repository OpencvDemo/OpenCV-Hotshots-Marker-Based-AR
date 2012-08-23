#include "Marker.hpp"
#include "MarkerDetector.hpp"
#include "CameraCalibration.hpp"

int main(int argc, const char* argv[])
{
    for (int i=1; i<argc; i++)
    {
        std::string imagePath = argv[i];
        cv::Mat input = cv::imread(imagePath);

        if (input.empty())
        {
            std::cout << "Cannot open " << imagePath << std::endl;
            continue;
        }

        cv::Mat bgraMat;
        cv::cvtColor(input, bgraMat, CV_BGR2BGRA);

        BGRAVideoFrame frame = { bgraMat.cols, bgraMat.rows, (size_t)bgraMat.step, bgraMat.data };

        CameraCalibration c(6.24860291e+02 * (640./352.), 6.24860291e+02 * (480./288.), 640 * 0.5f, 480 * 0.5f);
        MarkerDetector detector(c);
        std::vector<Marker> m;
        detector.processFrame(frame);
        detector.getTransformations();

        cv::waitKey(-1);
    }
    return 0;
}