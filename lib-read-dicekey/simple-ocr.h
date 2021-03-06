//  © 2019 Stuart Edward Schechter (Github: @uppajung)

#pragma once

#include "graphics/cv.h"
#include "font.h"

struct OcrResultEntry {
  char character;
  int errorScore;
};

typedef std::vector<OcrResultEntry> OcrResult;

cv::Mat ocrErrorHeatMap(
  const OcrAlphabet &alphabet,
  const char characterRead,
  const cv::Mat &bwImageOfCharacter
);

const OcrResult findClosestMatchingCharacter(
  const OcrFont& font,
  const OcrAlphabet &alphabet,
  const cv::Mat &bwImageOfCharacter
);

const OcrResult readLetter(const cv::Mat &letterImage);
const OcrResult readDigit(const cv::Mat &digitImage);

