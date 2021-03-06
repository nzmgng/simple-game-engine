#include "FileLoadJob.h"

// engine includes
#include "Assert\Assert.h"

namespace engine {
namespace jobs {

inline const engine::data::PooledString& FileLoadJob::GetFileName() const
{
    return file_name_;
}

inline void FileLoadJob::SetFileName(const engine::data::PooledString& i_file_name)
{
    ASSERT(i_file_name.GetLength() > 0);

    file_name_ = i_file_name;
}

inline const std::function<void(const engine::util::FileUtils::FileData)>& FileLoadJob::GetCallback() const
{
    return callback_;
}

inline void FileLoadJob::SetCallback(const std::function<void(const engine::util::FileUtils::FileData)>& i_callback)
{
    ASSERT(i_callback);
    callback_ = i_callback;
}

inline bool FileLoadJob::GetDoesCacheFile() const
{
    return does_cache_file_;
}

inline void FileLoadJob::SetDoesCacheFile(bool i_does_cache_file)
{
    does_cache_file_ = i_does_cache_file;
}

} // namespace jobs
} // namespace engine
