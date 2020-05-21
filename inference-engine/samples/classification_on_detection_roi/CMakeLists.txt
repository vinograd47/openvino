# Copyright (C) 2020 Intel Corporation
# SPDX-License-Identifier: Apache-2.0
#

ie_add_sample(NAME classification_on_detection_roi
              SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
              HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/classification_on_detection_roi.h"
              DEPENDENCIES format_reader)
