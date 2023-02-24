#include <iostream>

// Task A: Box

std::string box(int width, int height) {
  std::string shape_box = "";
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      shape_box = shape_box + "*";
    }
    shape_box = shape_box + "\n";
  }
  return shape_box;
}


// Task B: Checkerboard

std::string checkerboard(int width, int height) {
  std::string shape_cb = "";
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if ((i+j) % 2 == 0) {
	shape_cb = shape_cb + "*";
      }
      if ((i+j) % 2 != 0) {
	shape_cb = shape_cb + " ";
      }
    }
    shape_cb = shape_cb + "\n";
  }
  return shape_cb;
}


// Task C: Cross

std::string cross(int size) {
  std::string shape_cross = "";
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if ((i==j) || (i+j == size-1)) {
	shape_cross = shape_cross + "*";
      }
      else {
	shape_cross = shape_cross + " ";
      }
    }
    shape_cross = shape_cross + "\n";
  }
  return shape_cross;
}


// Task D: Lower triangle

std::string lower(int length) {
  std::string shape_lower = "";
  for (int i = 1; i <= length; i++) {
    for (int j = 1; j <= i; j++) {
      shape_lower = shape_lower + "*";
    }
    shape_lower = shape_lower + "\n";
  }
  return shape_lower;
}


// Task E: Upper triangle

std::string upper(int length) {
  std::string shape_upper = "";
  for (int i = 0; i < length; i++) {
    for (int j = 1; j <= i; j++) {
      shape_upper = shape_upper + " ";
    }
    for (int k = length-i; k > 0; k--) {
      shape_upper = shape_upper + "*";
    }
    shape_upper = shape_upper + "\n";
  }
  return shape_upper;
}


// Task F: Upside-down trapezoid

std::string trapezoid(int width, int height) {
  std::string shape_t = "";
  if (height > width/2) {
    shape_t = "Impossible shape!\n";
  }
  else {
    int spaces = 0;
    int stars = width;
    for(int i = 0; i < height; i++) {
      for(int j = spaces-1; j >=0; j--) {
	shape_t += " ";
      }
      for(int k = stars; k > 0; k--) {
	shape_t += "*";
      }   
      spaces += 1;
      stars -= 2;
      shape_t += "\n";
    }
  }
  return shape_t;
}


// Task G: Checkerboard (3x3)

std::string checkerboard3x3(int width, int height) {
  std::string shape_c3 = "";
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if (i%6 > 2) {
	if (j%6 > 2) {
	  shape_c3 += "*";
	}
        else {
	  shape_c3 += " ";
        }
      }
      else {
	if (j%6 < 3) {
	  shape_c3 += "*";
        }
	else {
	  shape_c3 += " ";
        }
      }
    }
    shape_c3 += "\n";
  }
  return shape_c3;
}
