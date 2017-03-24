#pragma once

#include <string>

namespace napa {
namespace module {

/// <summary> Helper APIs for file system operations. </summary>
namespace file_system_helpers {

    /// <summary> Read file synchronoulsy. </summary>
    /// <param name="filename"> Filename to read. </param>
    std::string ReadFileSync(const std::string& filename);

    /// <summary> Write file synchronoulsy. </summary>
    /// <param name="filename"> Filename to write. </param>
    /// <param name="data"> Buffer of data to write. </param>
    /// <param name="length"> Length of data to write. </param>
    void WriteFileSync(const std::string& filename, const char* data, size_t length);

    /// <summary> Make directory synchronoulsy. </summary>
    /// <param name="directory"> Directory to make. </param>
    void MkdirSync(const std::string& directory);

    /// <summary> Check if a path exits synchronously. </summary>
    /// <param name="path"> Path to check. </param>
    /// <returns> True if path exists. </returns>
    bool ExistsSync(const std::string& path);

}   // End of namespace file_system_helpers
}   // End of namespace module
}   // End of namespace napa