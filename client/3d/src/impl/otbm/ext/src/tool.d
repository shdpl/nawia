import parser;
import std.stream : BufferedFile;
import std.stdio : writeln;

enum FileType : ubyte
{
	Unknown,
	OTBM,
	OTB
}

int main(string[] args)
{
	if (args.length != 3)
	{
		return usage;
	}
	auto f = new BufferedFile();
	f.open(args[2]);
	
	auto ft = detect_type(args[2]);
	if (ft == FileType.Unknown)
	{
		writeln("Could recognize input file extension");
		return 2;
	}
	
	switch(args[1])
	{
		case "check":
			check(f, ft);
		break;
		default:
			return usage;
	}
	return 0;
}

bool usage()
{
	writeln( text(
		"Usage: otbm command path/to/file.otb\n",
		" supported commands",
		"  check"
	) );
	return 1;
}

FileType detect_type(string file_path)
{
	if (file_path[$-4 .. $] == ".otb")
	{
		return FileType.OTB;
	}
	else if(file_path[$-5 .. $] == ".otbm")
	{
		return FileType.OTBM;
	}
	else
	{
		return FileType.Unknown;
	}
}

void check(Stream f, FileType ft)
{
	switch(ft)
	{
		case FileType.OTBM:
			parse(f);
		break;
		case FileType.OTB:
			parseOTB(f);
		break;
		default:
			throw new Error(text("Validation of file type ",ft," not implemented!"));
	}
}