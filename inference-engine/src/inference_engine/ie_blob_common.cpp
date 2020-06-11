// Copyright (C) 2018-2020 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#include <memory>
#include <utility>
#include <vector>

#include "blob_factory.hpp"
#include "ie_blob.h"
#include "ie_compound_blob.h"

namespace InferenceEngine {

Blob::Ptr make_shared_blob(const Blob::Ptr& inputBlob, const ROI& roi) {
    return inputBlob->createROI(roi);
}

}  // namespace InferenceEngine
