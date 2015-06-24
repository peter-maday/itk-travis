
#include "itkImage.h"
#include "itkImageFileReader.h"
#include "itkImageFileWriter.h"
#include "itkRescaleIntensityImageFilter.h"

#include "itkBilateralImageFilter.h"


int apply_bilateral_filter( char *input, char *output, double domainSigma,  double rangeSigma);