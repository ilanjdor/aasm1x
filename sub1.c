//! -O1
unsigned char *
sub(unsigned char *p, long b) {
	return &p[-b];
}
