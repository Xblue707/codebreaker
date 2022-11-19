#include <bits/stdc++.h>
using namespace std;

float intToFloat(int32_t a) {
	float r;
	memcpy(&r, &a, sizeof r);
	return r;
}

int32_t floatToInt(float a) {
	int32_t r;
	memcpy(&r, &a, sizeof r);
	return r;
}

/* compute natural logarithm, maximum error 0.85089 ulps */
float logE(float X) {
	float i, m, r, s, t;
	int e;

#if PORTABLE
	m = frexpf(a, &e);
	if (m < 0.666666667f) {
		m = m + m;
		e = e - 1;
	}
	i = (float)e;
#else  // PORTABLE
	i = 0.0f;
	if (X < 1.175494351e-38f) { // 0x1.0p-126
		X = X * 8388608.0f;       // 0x1.0p+23
		i = -23.0f;
	}
	e = (floatToInt(X) - floatToInt(0.666666667f)) & 0xff800000;
	m = intToFloat(floatToInt(X) - e);
	i = fmaf((float)e, 1.19209290e-7f, i); // 0x1.0p-23
#endif // PORTABLE
	/* m in [2/3, 4/3] */
	m = m - 1.0f;
	s = m * m;
	/* Compute log1p(m) for m in [-1/3, 1/3] */
	r = -0.130310059f;             // -0x1.0ae000p-3
	t = 0.140869141f;              //  0x1.208000p-3
	r = fmaf(r, s, -0.121483512f); // -0x1.f198b2p-4
	t = fmaf(t, s, 0.139814854f);  //  0x1.1e5740p-3
	r = fmaf(r, s, -0.166846126f); // -0x1.55b36cp-3
	t = fmaf(t, s, 0.200120345f);  //  0x1.99d8b2p-3
	r = fmaf(r, s, -0.249996200f); // -0x1.fffe02p-3
	r = fmaf(t, m, r);
	r = fmaf(r, m, 0.333331972f);  //  0x1.5554fap-2
	r = fmaf(r, m, -0.500000000f); // -0x1.000000p-1
	r = fmaf(r, s, m);
	r = fmaf(i, 0.693147182f, r); //  0x1.62e430p-1 // log(2)
	if (!((X > 0.0f) && (X < INFINITY))) {
		r = X + X;                             // silence NaNs if necessary
		if (X < 0.0f) r = INFINITY - INFINITY; //  NaN
		if (X == 0.0f) r = -INFINITY;
	}
	return r;
}
