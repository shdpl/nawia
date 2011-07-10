module type.file.media;

struct MediaType {
	string mime;
	string extension;
	byte[] magicNo;
}