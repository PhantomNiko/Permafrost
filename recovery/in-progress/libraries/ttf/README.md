The existing recovered C font backend is carried into 1.1 after native public
API comparisons. The new metrics export is common C over that backend's
virtual interface. IA32 retains the portable backend's word-pair floating
returns, and uses the 1.1 service table for allocation.

Each CPU has twelve generated-font raster cases, thirty-nine invalid-font,
alpha and missing-glyph cases, and 140 resized metrics records. These checks
include empty and trailing lines, CRLF, Unicode and malformed UTF-8. They do
not complete release-wide VM compatibility. Pooka's Free Software License
applies to these sources.
