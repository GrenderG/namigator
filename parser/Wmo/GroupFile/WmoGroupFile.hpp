#pragma once

#include "Wmo/GroupFile/Chunks/MLIQ.hpp"
#include "Wmo/GroupFile/Chunks/MOPY.hpp"
#include "Wmo/GroupFile/Chunks/MOVI.hpp"
#include "Wmo/GroupFile/Chunks/MOVT.hpp"

#include <memory>
#include <string>

namespace parser
{
namespace input
{
class WmoGroupFile
{
public:
    unsigned int Flags;
    unsigned int GroupId;

    std::unique_ptr<MOPY> MaterialsChunk;
    std::unique_ptr<MOVI> IndicesChunk;
    std::unique_ptr<MOVT> VerticesChunk;
    std::unique_ptr<MLIQ> LiquidChunk;

    WmoGroupFile(const std::string& path);
};
} // namespace input
} // namespace parser