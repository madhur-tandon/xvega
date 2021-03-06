// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#include "xvega/grammar/data/data_source/url_data.hpp"
#include "../../../utils/serialize.hpp"

namespace xv
{
    void to_json(nl::json& j, const url_data& data)
    {
        serialize(j, data.url(), "url");
        serialize(j, data.name(), "name");
        serialize(j, data.format(), "format");
    }
}