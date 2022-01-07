#pragma once
// With classic enum, we cannot have for example Pending under any other enum
enum Status
{
    Pending,
    Approved,
    Cancelled
};

enum class FileError
{
    notfound,
    ok
};

enum class NetworkError
{
    disconnected,
    ok
};