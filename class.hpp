
// algocpp/file/class.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_FILE_CLASS
#define ALGOCPP_FILE_CLASS

#include <string>
#include <fstream>

namespace algocpp
{
	namespace file
	{
		class File
		{
		private:
			std::string filename;
			std::ifstream read;
			std::ofstream write;

		public:
			File(std::string init)
			{
				filename = init;
				read.open(filename, std::ios::in);
			}
		};
	}
}

#endif // ALGOCPP_FILE_CLASS