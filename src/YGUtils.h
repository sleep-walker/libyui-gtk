/* YGUtils.h/cc have some functionality that is shared between different parts
   of the code. */

namespace YGUtils
{
	/* Replaces '&' accelerator like Yast likes by the '_' that Gnome prefers. */
	string mapKBAccel(const char *src);

	/* Filters characters that are not on the valids_chars array from the text string
	   Length is used to tell the length of text, in case it isn't NUL
	   terminated (you may pass -1, if it is).
	   Use the compare string member if you won't to see if there was any change.  */
	string filterText (const char* text, int length, const char* valid_chars);

	/* Converts an integer to a STL string. */
	string intToStr (int i);
};
