#ifndef FIXED_POINT_H
#define FIXED_POINT_H

/* implementation of 17.14 fixed-point number representation. */
typedef int fixed_point

static int f = 1 << 14;

fixed_point 
convert_n2f (int n)
{
  return n << 14;
}

int
convert_f2n (fixed_point x)
{
  return x / f;
}

int
convert_f2n_nearest (fixed_point x)
{
  return (x >= 0) 
    ? (x + (1 << 13)) / f
    : (x - (1 << 13)) / f;
}

fixed_point
add_fwf (fixed_point x, fixed_point y)
{
  return x + y;
}

fixed_point
sub_fwf (fixed_point x, fixed_point y)
{
  return x - y;
}

fixed_point
add_fwn (fixed_point x, int n)
{
  return x + n * f;
}

fixed_point
sub_fwn (fixed_point x, int n)
{
  return x - n * f;
}

fixed_point
mul_fwf (fixed_point x, fixed_point y)
{
  return ((int64_t) x ) * y / f;
}

fixed_point
mul_fwn (fixed_point x, int n)
{
  return x * n;
}

fixed_point
div_fwf (fixed_point x, fixed_point y)
{
  return ((int64_t) x) * f / y
}

fixed_point
div_fwn (fixed_point x, int n)
{
  return x / n;
}

#endif /* threads/fixed-point.h */
